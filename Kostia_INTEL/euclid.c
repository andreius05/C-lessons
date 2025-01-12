// I will do it with loop non recuresion
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>


int gcd(int a,int b){
	while (b!=0){
		int tmp;
		tmp = a;
		a = b;
		b= tmp % b;
	}
	printf("This is result:%d\n",a);
	return 1;
}

int main(){
	int res,q,a,b;
	res = scanf("%d%d",&a,&b);
	if (res!=2){
		printf("ERROR");
		return -1;
	}
	q = gcd(a,b);
	return 1;
}
