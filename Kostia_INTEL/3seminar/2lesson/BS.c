#include <stdio.h>
#include <stdlib.h>
#include <assert.h>



int bSearch( int const * arr,unsigned len,int elem ){
    int low = 0;
    int h = len - 1;
  
    printf("Start");
    while (h >= low){
       int  medium = low + (h-low) / 2;
	if (arr[medium] == elem){
		printf("%d\n",medium);
		return medium;
	}
	if ( arr[medium]>elem ){
	    h = medium -1;
	}
	if ( arr[medium]<elem ){
	    low = medium +1;
	}
	
    }
printf("ERROR\n");    
return -1;
}


int compless(const void * a,const void * b){
    int * aa = (int *)a;
    int * bb = (int *)b;
    if (*aa>*bb)return 1;
    if ( *aa<*bb )return -1;
    return 0;
}
int main(){
    const int len = 10;
    int arr[10] = {23,124,5,25,4,63,22,120,244,1525};
    qsort(arr,len,sizeof(int),compless);
    bSearch(arr,len,5);
	
}
