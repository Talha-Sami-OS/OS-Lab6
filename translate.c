#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <sys/types.h>
#include <string.h>

int pagetable_enteries = 256;
int page_size = 256;
int TLB_size = 16;
int frame_size = 256;



//void *thread(void*para)
//{
//	int *para=*int (*para);
//	for(int i=0;i<4096;i++)
//	{
//		if(buffer[i]==a)
//		{
//			buffer[i]=b;
//		}
//	
//	}
//	pthread_exit(para);
//}

int main(int agrc,char*arg[])
{
  long long page_no,offset,page_table,totalhits=0,fault=0,pages=0;
  
  int hit = 0;
  
  
}
