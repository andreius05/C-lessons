#include <stdio.h>
#include <stdlib.h>


typedef struct struct_eratosphen
{
    int size;
    unsigned char *sieve;
} sieve_t;


int init_sieve(int size){
    int * p = malloc(size * sizeof(int)+1);
    if (p==NULL){
        printf("Allocation is failed");
        abort();
    }
    for (int i = 0;i<=size;++i){
        p[i]=i;
    }
        
}

sieve_t s;



int main(){
init_sieve(100);
}