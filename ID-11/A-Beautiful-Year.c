#include <stdio.h>
int main(){

    int n, year, a, b, c, d;
    scanf("%d", &n);

    while(1){
        n++;
        a = n / 1000;
        b = n / 100 % 10;
        c = n / 10 % 10;
        d = n % 10;

        if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d){
            printf("%d", n);
            break;
        }


    }

    return 0;
}