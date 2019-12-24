#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n;
    scanf("%d", &n);
    int counter=0;

    while(n>0){
        counter+=n%10;
        n=n/10;
    }
    printf("%d",counter);
    //Complete the code to calculate the sum of the five digits on n.
    return 0;
}


