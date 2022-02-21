// Program to execute another file
#include <stdio.h>   
#include <stdlib.h>

using namespace std;

int main(){
    printf ("Checking Availability...");
    if (system(NULL)){
        printf("Ok\n");
    }else{
        return -1;
    }
    printf ("Executing...\n");
    int i = system("helloworld/main");
    if(!i){
        printf("No errors.\n");
    }else{
        printf("Errors occured in executable.\n");
    }
    return 0;
}

