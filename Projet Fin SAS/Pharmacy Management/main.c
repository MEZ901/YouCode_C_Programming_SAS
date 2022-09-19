#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100

/*-------------structures section-------------*/

typedef struct{
    int code;
    char name[50];
    int quantity;
    float price;
}Product;

/*-------------global variables section-------------*/

static int i;
int n;
int counter = 0;

/*-------------functions section-------------*/

void newProduct();
void displayProducts();
void updateQuantity();
void search();
void storage();
void deleteProduct();
void registerBook();
void salesStatistics();

/*-------------the main function-------------*/

int main()
{
    Product product[MAX];
    int choice;
    do{
        system("color 7");
        printf("\n--------MENU--------\n");
        printf("\n1. Add new product");
        printf("\n2. Display products");
        printf("\n3. Update the quantity");
        printf("\n4. Search");
        printf("\n5. Storage");
        printf("\n6. Delete");
        printf("\n7. Register book");
        printf("\n8. Sales Statistics");
        printf("\n0. Exist");

        printf("\n\nEnter your choice: "); scanf("%d",&choice);

        switch(choice){
            case 1:
                newProduct();
                system("cls");
                system("color 2");
                printf("\n\n\tyour changes has been saved successfully\n\n"); sleep(2);
                system("cls");
                break;
            case 2:
                displayProducts();
                break;
            case 3:
                updateQuantity();
                break;
            case 4:
                search();
                break;
            case 5:
                storage();
                break;
            case 6:
                deleteProduct();
                break;
            case 7:
                registerBook();
                break;
            case 8:
                salesStatistics();
                break;
            default:
                if(choice!=0) printf("\nSomething went wrong. Please try again\n");
                break;
        }

    }while(choice!=0);

    return 0;
}

/*-------------functions-------------*/

void newProduct(){
    Product product[MAX];
    system ("cls");

    do{
        printf("How many products you want to add?\n"); scanf("%d", &n);
        if(n<1 || n>100) printf("Something went wrong. Please try again\n");
    }while(n<1 || n>100);

    for(i=0; i<n; i++){
        printf("______________________________________________________________");
        printf("\n\nEnter the following informations of the product number %d\n\n", i+1);
        printf("Enter the code of product: "); scanf("%d", &product[counter].code);
        printf("Enter the name of product: "); scanf("%s", &product[counter].name);
        printf("Enter the quantity of product: "); scanf("%d", &product[counter].quantity);
        printf("Enter the price of product: "); scanf("%f", &product[counter].price);
        counter++;
    }
}


void displayProducts(){
    Product product[MAX];
    system("cls");
    int choice;
    int j, s;

    printf("\t \t \t \t ALL PRODUCTS  \n");
    printf("-----------------------------------------------------------------------------------\n");
    printf("Serial Number  |  Name  |  Code  |  Quantity  |  Price  |\n");
    printf("-----------------------------------------------------------------------------------\n");
    for(i = 0; i<counter; i++){
        printf("      %d       |   %s   |   %d   |     %d     |    %d   |\n", i+1, product[i].name, product[i].code, product[i].quantity, product[i].price);
        printf("==========================================================================================\n");
    }

    printf("\n1. sort products in ascending alphabetical order of name.\n");
    printf("2. sort products in descending order of price.\n");
    do {
        printf("enter your choice: "); scanf("%d", &choice);

        if(choice == 1){
            for(i=0; i<=counter; i++){
                for(j=i+1; j<=counter; j++){
                    if(strcmp(product[i].name, product[j].name)>0){
                        strcpy(s, product[i].name);
                        strcpy(product[i].name, product[j].name);
                        strcpy(product[j].name, s);
                    }
                }
            }
            for(i=0; i<=counter; i++) printf("%s\n", product[i].name);
        } else if(choice == 2){
            for(i=0; i<=counter; i++){
                for(j=i+1; j<=counter; j++){
                    if(product[i].price<product[j].price){
                        s = product[i].price;
                        product[i].price = product[j].price;
                        product[j].price = s;
                    }
                }
            }
            for(i=0; i<=counter; i++) printf("%s  ||  price: %f dh", product[i].name, product[i].price);
        } else printf("Something went wrong. Please try again\n");
    } while(choice!=1 && choice!=2);
}

void updateQuantity(){

}


void search(){

}


void storage(){

}


void deleteProduct(){

}


void registerBook(){

}


void salesStatistics(){

}
