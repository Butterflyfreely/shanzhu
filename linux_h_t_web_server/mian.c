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
	//修改进程的工作目录，方便后续操作
	int ret=chdir(argv[2]);
	if(ret==-1)
		{
			perror("chdir error");
			exit(1);

		}
	
	//启动epoll模型
	return 0;

}










