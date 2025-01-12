#include <stdio.h>
#include <stdlib.h>


int find_in_file( const char * name,int needle ){
    int n;
    int count = 0;
    FILE * f;
    f = fopen( name,"r" );
    if (f == NULL){
        perror("Something goes wring");
	abort();
    }
    for (;;){
      int res;
      res = fscanf(f,"%d",&n);
      printf("This is n :%d\n",n);
      if (res == EOF ){
          break;
      }
      if ( res !=1 ){
      fprintf(stderr,"Something goes wring in your file error is data\n");
      abort();
      }
      if ( needle == n ){
          count+=1;
		
      }
    
    }
    
    
    

    fclose(f);
    return count;


}


int main( int argc,char **argv ){
	int res;
        int n;
	char *endptr;
	if (argc<3){
	    printf("%s:need more args minimum 3 u gave %d\n",argv[0],argc);
	    return 1;
	}
	n = strtol(argv[1],&endptr,10);
	printf("This is for me :%d\n",n);
	if ( endptr==argv[1] ){
	    printf("Can not converted to int:%s\n",argv[1]);
	    return 1;
	}

        for ( int i =2;i<argc;++i ){
	    printf("Iteration\n");
	    res += find_in_file(argv[i],n);
	}
	printf("%d\n",res);





}
