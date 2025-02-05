#include <stdio.h>
#include <stdlib.h>



typedef struct node{
    int data;
    struct node * next;
}node_t;


node_t * init_list( const int * arr,unsigned len ){
    node_t * tmp = malloc(sizeof(node_t));
    tmp->next = NULL;
    tmp->data=arr[0];


    node_t *current = tmp;
    for (int i =1;i<len;++i){
        node_t * new_mode = malloc(sizeof(node_t));
        if (new_mode==NULL){
            printf("Alocated was failed\n");
            abort();
        } 
        new_mode->data = arr[i];
        new_mode->next = NULL;
        current->next = new_mode;
        current = new_mode;


    }
    return tmp;
}



void print_list( const node_t * head ){
  printf("[");
  while(head->next!=NULL){
    printf("%d ",head->data);
    head = head->next;
  }
  printf("]\n");
}


void free_list(  node_t *head ){
    while(head){
         node_t * tmp = head;
        head = head->next;
        free(tmp);
    }
}

int main(){
    int arr[10] = {1,2,3,4,5,8,7,2,1,3};
    node_t * list = malloc(sizeof(node_t));
    if (list==NULL){
        printf("Allocation was failed\n");
        abort();
    }
    list = init_list(arr,10);
    printf("%p\n",list);
    print_list(list);
    free_list(list);

}

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Node {
    int value;
    struct Node * next;

};
typedef struct Node node_t;


void print_linked_list( node_t *head ){
    node_t * temporary = head;
    while (temporary != NULL){
        printf("d-%d",temporary->value);
	temporary = temporary->next;
    
    }
    printf("\n");
}

int main(){
node_t n1,n2,n3;

n1.value = 23;
n2.value = 44;
n3.value = 52;

node_t *head;

head = &n3;
n3.next = &n1;
n1.next = &n2;
n2.next = NULL;


print_linked_list(head);
}
