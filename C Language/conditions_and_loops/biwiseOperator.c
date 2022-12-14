// Complete the calculate_the_maximum function in the editor below.

// calculate_the_maximum has the following parameters:

// int n: the highest number to consider
// int k: the result of a comparison must be lower than this number to be considered
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  //Write your code here.
    int mxAnd = 0, mxOr = 0, mxXor = 0;
    
    for(int i = 1; i <= n; i++){
        for(int j = i + 1; j <= n; j++){
            if(mxAnd < (i & j) && (i & j) < k)
                mxAnd = i & j;
            if(mxOr < (i | j) && (i | j) < k)
                mxOr = i | j;
            if(mxXor < (i ^ j) && (i ^ j) < k)
                mxXor = i ^ j;
        }
    }
    printf("%d\n", mxAnd);
    printf("%d\n", mxOr);
    printf("%d\n", mxXor);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
