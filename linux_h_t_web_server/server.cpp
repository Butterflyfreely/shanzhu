



void http_respond_head(int cfd,char*type)
{
    char buf[1024];
    //状态行
    sprintf(buf,"http/1.1 200 OK\r\n");
    write(cfd,buf,strlen(buf));

    //消息报头
    sprintf(buf,"Content-Type:\r\n");
    write(cfd,buf,strlen(buf));


    //空行
    write(cfd,"\r\n",2);

}




void main()
{
    // 修改进程的工作目录
chdir(path);
// 创建监听的套接字
int lfd = socket(af_inet, sock_stream, 0);
// 绑定
struct sockaddr_in serv;
serv.family = af_inet;
serv.port = htons(8989);
bind(lfd, &serv, len);
// 监听
listen();
int cfd = accept();
// 读数据
{
- 传输协议: tcp
http
IP:port
web服务器实现
2017年6月11日 16:12
 分区 web服务器 的第 18 页 
// 读数据
read(cfd, buf, sizeof(buf));
// 先将buf中的请求行拿出来
// GET /hello.c http/1.1
char method[12], path[1024], protocol[12];
// 得到文件名
char* file = path+1;
// 打开文件
int fdd = open(file, O_RDONLY);
int len = 0;
http_respond_head(cfd, "text/plain");
// 循环读数据
while( (len=read(fdd, buf, sizeof(buf))) > 0)
// 数据发送给浏览器
write(fdd, buf, len));
{
}
}
}

