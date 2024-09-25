#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int value1_int,value2_int;
    float value1_float ,value2_float;
    
    scanf("%d %d" , &value1_int , &value2_int);
    scanf("%f %f" , &value1_float , &value2_float);
    
    printf("%d %d" ,(value1_int + value2_int),(value1_int - value2_int));
    
    printf("\n%.1f %.1f" , (value1_float + value2_float) , (value1_float - value2_float));
    return 0;
}
