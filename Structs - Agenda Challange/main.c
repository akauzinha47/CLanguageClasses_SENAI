#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "contact_struct.h"
#include "contact_list.h"

int main() {

    contactList contact_list = construct_contact_list();

    printf("=== WELCOME TO YOUR CONTACT LIST ===\n");
    char name[20], email[20], adress[20], phone[10], birth_date[11];
    
    int choice = 0;

    printf("\nType below the operation you'd like to perform.\n1. Add new contact\n2. Delete contact\n3. Search by first name\n4. Search by birth date\n5. Show data from all contacts\n6. Show name and phone from all contacts\n\nR: ");
    scanf(" %d", &choice);

    switch (choice)
    {
    case 1:
        
        for (int i = 0; i < 6; i++) {

            printf("\nType your contact name: ");
            scanf("%s", name);

            // printf("\nType their phone: ");
            // scanf("%s", phone);
            
            // printf("\nType their e-mail: ");
            // scanf("%s", email);

            // printf("\nType their adress: ");
            // scanf("%s", adress);

            // printf("\nType their birth date on the format DD/MM/YYYY: ");
            // scanf("%s", birth_date);

            // Contact contact = construct_contact(name, email, adress, phone, birth_date);
            Contact contact = construct_contact(name);
            
            add_sort(&contact_list, contact);
            printf("%s", contact.name);
        }

        for (int i = 0; i < 6; i++) {
            printf("\n%s", contact_list.array[i].name);
        }
        
        break;
    
    case 2:

    
    default:
        break;
    }

    return 0;
}