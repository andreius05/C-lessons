#include <stdio.h>
#include <stdlib.h>
#include <assert.h>


typedef struct node_t{ 
    int value;
    struct node_t * next;

}node_t;

struct node_t * reverse(struct node_t *top) {
  struct node_t *xs;
  if (NULL == top) return NULL;
  if (NULL == top->next) return top;
  xs = reverse(top->next);
  top->next->next = top;
  top->next = NULL;
  return xs;
}

void  print_list( const node_t * plist ){
     const node_t *p;
     for ( p = plist; p != NULL; p = p->next ){
         printf("%d\n",p->value);
     }
     printf("\n");

}


void  free_list( const node_t * plist ){
     const node_t *p;
     for ( p = plist; p != NULL;){
        node_t * tmp = p->next;
        free(p);
        p = tmp;
     }
}



struct node_t * read_file(FILE * f){
    int n;
    node_t * el = NULL, * ol = NULL, * node,*lastol = NULL,*lastel = NULL;

    while (fscanf(f,"%d",&n)==1){
        printf("Considering:%d\n",n);
        node = malloc(sizeof(node_t));
        node->value = n;
        if (n%2==0){
	    if (el==NULL){
	        lastel = node;
	    }
            node->next = el;
            el = node;
        }
        else{
	    if ( ol==NULL ){
	        lastol = node;
	    }
            node->next = ol;
            ol = node;
        }

    }
    if ( lastol==NULL ){
        return reverse(el);
    }
    assert(lastol->next==NULL);
    lastol->next = el;
   
    return reverse(ol) ;
}
     


int main(){
    FILE * file = fopen("1.txt","r");
    node_t * result;
    result = read_file(file);
    print_list(result);
    fclose(file);


}
