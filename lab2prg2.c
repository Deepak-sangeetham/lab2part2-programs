/* Write a program that formats product information entered by the user.
   A session with the program should look like this:
*/

#include <stdio.h>

int main()
{
    int item, year, month, day;
    float price;

    printf("Enter item number : ");
    scanf("%d", &item);

    printf("Enter unit price : ");
    scanf("%f", &price);

    printf("Enter purchase date (mm/dd/yyyy) : ");
    scanf("%d /%d /%d", &month, &day, &year);

    printf("Item\t\tUnit\t\tpurchase\n\t\tPrice\t\tDate\n");
    printf("%d\t\t$%8.2f\t%.2d/%.2d/%.4d\n", item, price, month, day, year);

    return 0;

}