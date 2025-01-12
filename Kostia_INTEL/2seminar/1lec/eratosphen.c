#include <stdio.h>
#include <stdlib.h>


int is_prime(int n ){
    if (n<2)return 1;
    for (int i =2;i*i<=n;++i){
        if ((n%i)==0){
            return 0;
        }
        
    }
    return 1;
}


int main(){
    
    int N,res;
    res = scanf("%d",&N);
    char *p = malloc(N*sizeof(char));
    if (p==NULL){
        printf("Alocaation is failed\n");
    }
    for (int i = 2 ;i<=N;++i){
	    printf("%d\n",i);
        if (is_prime(i)){
	    printf("%d is prime\n",i);
	    p[i]='0';
	}
	else{
	    printf("%d is not prime\n",i);
	    p[i]='1';
	}
    }
    for (int j =0;j<=N;++j){
        printf("%c",p[j]);
    }

free(p);


}
