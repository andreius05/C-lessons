#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

int gcd(int x ,int y){
        int q;
        assert (y!=0);
        q = x%y;
        if (q==0){
            return y;
        }
        return gcd(y,q);
    }
int main(){
    printf("Hellowrodl\n");
    int a,b,g,res;
    res = scanf("%d%d",&a,&b);
    if (res!=2 || b==0){
        printf("Wrong input\n");
        abort();
    }
    g = gcd(a,b);
    printf("%d\n",g);
}