/* Write a program that prompts the user to enter a telephone number inthe form
   (xxx)xxx-xxxx and then displays the number in the form xxx.xxx.xxxx:
*/

#include <stdio.h>

int main()
{
    int num1, num2, num3;

    printf("Enter phone number [(xxx) xxx-xxxx] : ");
    scanf(" (%d ) %d- %d", &num1, &num2, &num3);

    printf("You entered %.3d.%3d.%.4d\n", num1, num2, num3);

    return 0;
}