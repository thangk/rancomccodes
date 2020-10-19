#include <stdio.h>

int hstTax = 13;

float calPrice(float a);
float calTax(float a);
int changeTax(int a);

int main() {

    char errorMes[] = "ERROR: Please enter a number between 1 and 5.";
    float itemPrice;
    int option;


    printf(
        "\nSelect the operation you want to do.\n\n"
        
        "1 - Calculate the total cost of item after HST.\n"
        "2 - Calculate the HST of an item.\n"
        "3 - Change the HST value.\n"
        "4 - Display current HST value.\n"
        "5 - Exit\n\n"
        );

    scanf("%d", &option);

    while (option != 5) {


        switch (option) {

            case 1:
                    printf("Enter the price of the item: $");
                    scanf("%f", &itemPrice);
                    printf("\n\nIt's $%0.2f after HST.", calPrice(itemPrice));
                    break;

            case 2:
                    printf("Enter the price of the item: $");
                    scanf("%f", &itemPrice);
                    printf("\n\nThe HST is $%0.2f", calTax(itemPrice));
                    break;

            case 3:
                    printf("How much do you want the new HST to be? ");
                    scanf("%d", &hstTax);
                    // changeTax(hstTax);
                    printf("\n\nThe new HST is now %d%%", changeTax(hstTax));
                    break;
            case 4:
                    printf("The tax is currently %d%%", hstTax);
                    break;

            default:
                    printf("%s", errorMes);
                    break;
        }
    
        printf("\n\nChoose an option: 1, 2, 3, 4 or 5 for exit.\n\n");
        scanf("%d", &option);


    }

    printf("\n\nThanks for using the small program. Goodbye!\n\n");

    return 0;
    
}

    
float calPrice(float a) {
    return a = a * (1 + ((float)hstTax/100));
}

float calTax(float a) {
    return a = a * ((float)hstTax/100);
}

int changeTax(int a) {
    return a;
}