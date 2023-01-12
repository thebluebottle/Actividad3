#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

#define PROCS 10
void hijo(int n){
printf("Soy el hijo \n");
exit(0);
}

int main()
{
int p;
int i;
for(i=0;i<PROCS;i++){
sleep(1);
	p = fork();
	if(p==0){
		hijo(i);

}
}

for (i=0;i<PROCS;i++){
	wait(NULL);
sleep(1);
printf("Soy el padre \n");
}
printf("Mi proceso hijo a terminado\n");
}
