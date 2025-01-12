#include <stdio.h>
#include <stdlib.h>
#include <assert.h>



int maxn ( const int *arr,unsigned len ){
    int max = *arr;
    for ( int i = 0 ;i <len;++i){
        if (arr[i]>max){
            max = arr[i];
        }
    }
    return max;
}


int majority_foo( const int * arr,int len ){
    int max = maxn(arr,len);
    int *new_arr = calloc(max+1,sizeof(int));
    for (int i =0;i<len;++i){
        new_arr[arr[i]]++;
    }
    int majority = 0;
    for (int i = 0;i<=max;++i){
        if (new_arr[i]>len/2){
            majority = i;
            break;
        }

    }
    free(new_arr);
    printf("%d\n",majority);
    return majority;
}


int main(){
    int arr[5]={1,2,2,4};
    int res=majority_foo(arr,5);
    assert(res == 2);
}