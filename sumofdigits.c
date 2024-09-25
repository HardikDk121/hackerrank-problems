#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int number ,sumofdigits=0 ,ten_multiplier=10;
    scanf("%d", &number);
    //Complete the code to calculate the sum of the five digits on n.
    while(ten_multiplier <= 10000)
    {
        number=number % ten_multiplier;
        sumofdigits = sumofdigits + number;
        ten_multiplier = ten_multiplier * 10;        
        
    }
    printf("%d",sumofdigits);
    return 0;
}
