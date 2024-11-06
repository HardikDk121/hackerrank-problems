#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int number ,sumofdigits=0;
    scanf("%d", &number);
    //Complete the code to calculate the sum of the five digits on n.
    while(number)
    {
        sumofdigits = sumofdigits + (number % 10);        
        number=number / 10;
        
    }
    printf("%d",sumofdigits);
    return 0;
}
