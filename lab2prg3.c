/* splitting of ISBN into categories */

#include <stdio.h>

int main()
{
    int  prefix, identifier, code, item, digit;

    printf("Enter ISBN : ");
    scanf("%d -%d -%d -%d -%d", &prefix, &identifier, &code, &item, &digit);

    printf("GS1 prefix : %d\n", prefix);
    printf("Group identifier : %d\n", identifier);
    printf("Publisher code : %d\n", code);
    printf("Item number : %d\n", item);
    printf("Check digit : %d\n", digit);

    return 0;
}