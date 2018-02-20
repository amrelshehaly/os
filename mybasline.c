#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <unistd.h>
#include <string.h>
#include <dirent.h>


void main(int argc, char * argv[])   { 

char * directoryName = argv[1];  /* Directory name to be created */


int rval ;

//char exist [2] ={};

    char cwd [1024];
    scanf("%s",cwd);

    /*if (getcwd(cwd, sizeof(cwd)) != NULL){
       printf( "Current working dir: %s\n", cwd);
    }else{
       perror("getcwd() error");
    }*/



	/*rval = access (cwd, F_OK);

     if(rval  == 0){
         printf("the file exist\n");
    }else{

        printf("the file doesnt exist\n");
    }*/

   /*int helperB = helper (cwd);
    if(helperB == 1){
        printf("the file exist\n");
    }*/
    
    
   /*if(exist[0] == 'N'){ 
        for(int i =0 ; i<strlen(cwd) ; i++){

     }
   }*/
   ///= memset(cwd, 0, (sizeof cwd));


   struct dirent **namelist;
    int n;

   n = scandir(".", &namelist, NULL , alphasort);
    if (n < 0)
        perror("scandir");
    else {
        while (n-->0) {
            if(strcmp(namelist[n]->d_name, cwd) == 0){
            printf("%s\n", namelist[n]->d_name);
            }
            free(namelist[n]);
        }
        free(namelist);
    }

    

}

/*int helper (char x[1024]){

    int rval ;

   int rval = access (x, F_OK);

    if(rval  == 0){
        return 1;
    }else{

        return 0;
        //printf("the file doesnt exist\n");
    }

    
}*/