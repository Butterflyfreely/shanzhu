#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>


int main(int argc,const char* argv[])
{
	if(argc<3)
		{
			printf("eg:./a.out port path\n");
			exit(1);
		}
	//端口
	int port=atoi(argv[1]);

	
	//启动epoll模型
	return 0;

}
