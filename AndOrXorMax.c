#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  //Write your code here.

  int i,j,max1=0,max2=0,max3=0,And,Or,Xor;
  for(i=1;i<=k;i++){
      for(j=i+1;j<=n;j++){
            And=i&j;
            Or=i|j;
            Xor=i^j;
            if(And<k & And>max1){
                max1=And;
            }
             if(Or<k & Or>max2){
                max2=Or;
            }
             if(Xor<k & Xor>max3){
                max3=Xor;
            }
            
            
      }

  }
  printf("%d\n%d\n%d",max1,max2,max3);
  

 
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}

