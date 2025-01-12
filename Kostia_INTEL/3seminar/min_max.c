#include <stdio.h>




int min_max(const int * arr,unsigned len){
    int min,max;
    if (arr[0]<=arr[1]){
        min = arr[0];
	max = arr[1];
    } 
    else{
        min = arr[1];
	max = arr[0];
    }
    for ( int i =2;i<len;++i ){
    	if (arr[i]<min){
		min = arr[i];
	}
	if ( arr[i]>max ){
		max = arr[i];
	}
    }
    printf("Minimal of your array is :%d\n",min);
    printf("Maximal of your array is :%d\n",max);

}
int main(){
    int arr[10]={1,23,0,56,122,546,9,12,3,90};
    min_max(arr,10);

}
