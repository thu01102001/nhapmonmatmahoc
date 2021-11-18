
#include <stdio.h>
 
int main(){
    int n;
    printf("\nNhap n = ");
    scanf("%d", &n);
    int dem;
    int i;
    for( i = 2; i <= n; i++){
        dem = 0;
        while(n % i == 0){
            ++dem;
            n /= i;
        }
        if(dem){
            if(dem > 1) printf("%d^%d", i, dem);
            else printf("%d", i);
            if(n > i){
                printf(" * ");
            }
        }
    }
    
}
