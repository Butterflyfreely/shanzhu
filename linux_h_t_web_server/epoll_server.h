#ifndef _EPOLL_SERVER_H
#define _EPOLL_SERVER_H

int init_listen_fd(int port,int epfd);
void epoll_run(int port);
void do_accept(int lfd,int epfd);
void do_read(int cfd, int epfd);
int get_line(int sock, char *buf, int size);
void disconnect(int cfd, int epfd);
void http_request(const char* request, int cfd);
void send_dir(int cfd, const char* dirname);

#endif
