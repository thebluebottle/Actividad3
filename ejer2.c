#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>
#include <stdlib.h>

#define ERROR 1
void proceso(int n){
printf("%d\n",n);
}
int main (int argc, char* argv[])
{
int nivel,i,p;
if(argc > 1)
    {
        printf("%s niveles \n", argv[1]);
	printf("\n");
	nivel = atoi(argv[1]);
	for(i=0;nivel>=i;i++){
	p = fork();
	if(p==0){
	proceso(i);
}

}
	wait(NULL);
    }
    else
    {
        printf("%s \n", "ERROR");
        return ERROR;
    }



}
