#include <stdio.h>
#include <stdlib.h>



int * foo (int x, int y){
   int *res = malloc(sizeof(int));
   *res = x * y;
   return res;


}
int main(){
    int * p = foo(5,5);
    printf("%d\n",*p);

}
