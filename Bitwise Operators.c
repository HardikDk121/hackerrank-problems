#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  
  int maxand=0,maxor=0,maxxor=0;
  for (int index=1; index <= n-1; index++)
  {
      
      for(int jindex= index+1 ; jindex<=n; jindex++)
      {
          int and = index & jindex , or =  index | jindex , xor =index ^ jindex ;
          
          if(and > maxand && and < k )
            maxand  = and;
              
          if(or > maxor && or < k )
            maxor = or;  
          
          if(xor > maxxor && xor < k )
            maxxor = xor;  
      }

  }
    printf("%d", maxand);
    printf("\n%d", maxor);
    printf("\n%d", maxxor);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
