/* Name: Harman Singh
   Roll_Number: 2019042 */

#define _GNU_SOURCE
#include <unistd.h>
#include <sys/syscall.h>
#include <stdio.h>
#include <errno.h>
#include <string.h>
#include <stdlib.h>

#define SYS_sh_task_info 440

int main()
{
	
  long a;
  char b[256];
  printf("Enter PID:");
  scanf("%ld",&a);
  printf("\nEnter filepath: ");
  scanf("%s",b);
  printf("\n");

  long res = syscall(SYS_sh_task_info,a,b);
  
  if(res!=0){

	

	printf("System call did not get executed succesfully\n");
	printf("System call returned %ld.\n", res);
	perror("The process encountered an error ");
	printf("\nError No. : %d\n",errno);

  }

  else{

		
	printf("System call executed succesfully\n");
	printf("System call returned %ld.\n", res);

  }			
 
  return 0;
}




