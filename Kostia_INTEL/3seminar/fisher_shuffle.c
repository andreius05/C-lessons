#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int fisher_sort(int  * arr,unsigned len){
    srand(time(NULL));
    len-=1;
    for (int i =0;i<len;--len){
	int random_index = rand()%len;
	printf("Size of arr is :%d\n",len);
	int temp = arr[len - 1];
	arr[len - 1] = arr[random_index];
	arr[random_index] = temp;
    }

}




int main(){ 
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int size = sizeof(arr)/sizeof(arr[0]);

    fisher_sort(arr,size);
    printf("[");
    for (int i =0;i<size;++i){
    	printf("%d,",arr[i]);
    }
    printf("]\n");

}
