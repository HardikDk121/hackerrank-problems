#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int checkeven(int number)
{
    return number%2==0;
}
int main() 
{
    int a, b;
    scanf("%d\n%d", &a, &b);
  	// Complete the code.
    for (int index = a; index<= b; index++) 
    {
        switch (index)
        {
            case 1:
                printf("one");
                break;
            case 2: 
                printf("two");
                break;
            case 3: 
                printf("three");
                break;
            case 4: 
                printf("four");
                break;
            case 5: 
                printf("five");
                break;
            case 6: 
                printf("six");
                break;
            case 7: 
                printf("seven");
                break;
            case 8: 
                printf("eight");
                break;
            case 9:
                printf("nine");
                break;
            default:
                if (checkeven(index))
                {
                    printf("even");
                    break;
                }
                else
                {
                    printf("odd");
                    break;
                }
                
        }
        printf("\n");
    }
    return 0;
}

