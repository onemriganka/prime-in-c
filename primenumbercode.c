#include <stdio.h>

int main()
{
    int num, i, flag = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    for (i = 2; i <= num/2; ++i)
    {
        // condition for non-prime
        if(num % i == 0)
        {
            flag = 1;
            break;
        }
    }

    if (num == 1)
    {
        printf("1 is neither prime nor composite.");
    }
    else
    {
        if (flag == 0)
            printf("%d is a prime number.", num);
        else
            printf("%d is not a prime number.", num);
    }

    return 0;
}
