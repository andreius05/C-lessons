#include <stdio.h>


int is_prime(int n ){
    if (n<2)return 0;
    for (int i =2;i*i<=n;++i){
    	if ((n%i)==0){
	    return 0;
	}
    
    }
    return 1;
}


int main(){
int num,res;
res = scanf("%d",&num);
if (is_prime(num)){
    printf("Tes this num is prime\n");
    return 1;
}
printf("No this isnt prime num\n");
return 0;

}
