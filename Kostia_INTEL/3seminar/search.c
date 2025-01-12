#include <stdio.h>
#include <stdlib.h>
#include <assert.h>


unsigned int search ( const int *arr,unsigned int len,int elem ){
for (int i = 0;i<len;++i){
  	if (arr[i]==elem){
		return i;
		}
	}	
return len;
}


int main(){
    int arr[6]={1,23,43,54,65,76};
    unsigned p54 = search(arr,6,54);
    unsigned p10 = search(arr,6,10);
    assert(p54 == 3 && p10 == 6);

}
