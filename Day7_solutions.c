#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    int n ,arr[1001];
    scanf("%d",&n);
    
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(int i=n-1;i>=0; i--){
        printf("%d ",arr[i]);
    }
    
}
