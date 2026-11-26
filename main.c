// Online C compiler (editor)
// Write and run C online using this edition 
#include <stdio.h>

int main()
{
    int id[100], qty[100];
    int choice, n = 0, i, search, found;

    do
    {
        printf("\n\n===== LIBRARY MANAGEMENT =====");
        printf("\n1. Add Book");
        printf("\n2. Display Books");
        printf("\n3. Search Book");
        printf("\n4. Issue Book");
        printf("\n5. Return Book");
        printf("\n6. Exit");

        printf("\nEnter Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                if(n < 100)
                {
                    printf("Enter Book ID: ");
                    scanf("%d", &id[n]);

                    printf("Enter Quantity: ");
                    scanf("%d", &qty[n]);

                    n++;
                    printf("Book Added Successfully!");
                }
                else
                    printf("Library is Full!");
                break;

            case 2:
                for(i = 0; i < n; i++)
                    printf("\nID: %d  Quantity: %d",
                           id[i], qty[i]);
                break;

            case 3:
                printf("Enter Book ID: ");
                scanf("%d", &search);
                found = 0;

                for(i = 0; i < n; i++)
                {
                    if(id[i] == search)
                    {
                        printf("Book Found! Quantity: %d",
                               qty[i]);
                        found = 1;
                        break;
                    }
                }

                if(!found)
                    printf("Book Not Found!");
                break;

            case 4:
                printf("Enter Book ID: ");
                scanf("%d", &search);

                for(i = 0; i < n; i++)
                {
                    if(id[i] == search && qty[i] > 0)
                    {
                        qty[i]--;
                        printf("Book Issued!");
                        break;
                    }
                }

                if(i == n)
                    printf("Book Not Available!");
                break;

            case 5:
                printf("Enter Book ID: ");
                scanf("%d", &search);

                for(i = 0; i < n; i++)
                {
                    if(id[i] == search)
                    {
                        qty[i]++;
                        printf("Book Returned!");
                        break;
                    }
                }

                if(i == n)
                    printf("Book Not Found!");
                break;

            case 6:
                printf("Thank You!");
                break;

            default:
                printf("Invalid Choice!");
        }

    } while(choice != 6);

    return 0;
}
