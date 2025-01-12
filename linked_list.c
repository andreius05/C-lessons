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
