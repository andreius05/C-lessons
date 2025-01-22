#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>


#define MAXNAME 256
#define TABLE_SIZE 10





typedef struct person_t{
    char name[256];
    int age;
}person;


typedef struct node{
    int data;
    struct node * next;
}node_t;


person * table[TABLE_SIZE];


unsigned int hash(const char *key ) {
    unsigned int hash_value = 0;
    unsigned int prime = 31;  // Простое число для умножения

    while (*key) {
        hash_value = (hash_value * prime + *key) % TABLE_SIZE;
        key++;
    }

    return hash_value;
}
 void init_table(){
    for ( int i =0;i<TABLE_SIZE;++i ){
        table[i]=NULL;
    }
}

void print_all(){
    for ( int i =0;i<TABLE_SIZE;++i ){
        if (table[i]==NULL){
            printf("%d:----\n",i+1);
        }
        else{
            printf("%d:[ key:%s , value:%d ]\n",i+1,table[i]->name,table[i]->age);
        }
    }
}


person *key_check(char * name){
      int index = hash(name);
      if ( table[index]!=NULL && strcmp(table[index]->name,name)==0 ){
        return table[index];
      }
      return NULL;
}


person * get_by_key(char * key){
    person *tmp = key_check(key);
    if (tmp==NULL){
        printf("NOT FOUNDED\n");
        return NULL;
    }
    return tmp;
}


person *delete_item( person * p ){
    int index = hash(p->name);
    if (table[index]!=NULL,strcmp(table[index]->name,p->name)==0){
        table[index]=NULL;
        return p;
    }
    return NULL;
}


bool insert_table( person *p ){
     if (p==NULL)return false;
     unsigned index = hash(p->name);
     if (table[index]!=NULL)return false;
     table[index]=p;
     return true;
}
int main(){
//Here you can use this shit in this way
#if 0 
init_table();
print_all();
person andrii = {.age = 20,.name="Andrii"};
person ivan = {.age = 20,.name="Ivan"};
insert_table(&andrii);
insert_table(&ivan);


person *res =get_by_key("Andrii");
if (res==NULL){
    printf("ERROR with finding i dont know\n");
    abort();
}
printf("%s:||:%d\n",res->name,res->age);


person * fakeRes =get_by_key("Lena") ;
delete_item(&ivan);

print_all();
#endif
}