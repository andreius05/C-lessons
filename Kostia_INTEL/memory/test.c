#include <stdio.h>
#include <stdlib.h>

int * foo(int x ,int y ){
    int *res = malloc(sizeof(int));
    *res = x*y;
    return res;

}


int main(){
    int *res = foo(5,5);
    printf("%d\n",*res);
    free(res);

}
