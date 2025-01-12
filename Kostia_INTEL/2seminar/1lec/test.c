#include <stdio.h>
#include <stdlib.h>


int main(){
	int *ptr = malloc(10*sizeof(int));
	int *q = calloc(10,sizeof(int));

	if (ptr==NULL){
		printf("Allocating is failed\n");
	}
	printf("%d",ptr[0]);
	printf("%d",q[0]);

}
