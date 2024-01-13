#ifndef _EPOLL_SERVER_H
#define _EPOLL_SERVER_H

void epoll_run(int port);

int init_listen_fd(int port,int epfd);


#endif
