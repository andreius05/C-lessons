#include <stdio.h>
#include <stdlib.h>



typedef struct node_t{ 
    int value;
    struct node_t * next;

}node_t;



void  print_list( const node_t * plist ){
     const node_t *p;
     for ( p = plist; p != NULL; p = p->next ){
         printf("%d\n",p->value);
     }
     printf("\n");

}


node_t * read_file( FILE * file ){
     int n;
     int res;
     node_t * el = NULL,* ol = NULL;
     node_t * node;
     
     
     while ( fscanf(file,"%d",&n)==1 ){
         printf("Considering:%d\n",n);
         node = (node_t *)malloc(sizeof(node_t));
	     node->value=n;
	 if ( n%2==0 ){
	      node->next = el;
	      el = node;
	 }
} 
return el;

}


void free_list( node_t * plist ){
    node_t * p;
    for ( p = plist;p!=NULL;p = p->next ){
        node_t * tmp = p->next;
    	free(p);
	p = tmp;	
    }

}


int main(){
    FILE * file = fopen("1.txt","r");
    print_list(read_file(file));
    fclose(file);


}
