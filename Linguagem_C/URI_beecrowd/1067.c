#include <stdio.h>
 
int main() {
    
    int n,i;
    
    scanf("%d",&n);
    
    if(n % 2 == 0){
        n = n - 1;
    }else{
        for(i=1;i<=n;i+=2){
            printf("%d\n",i);
        }
    }
    
    return 0;
}
