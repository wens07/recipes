//
//  socket.h
//  recipes_working
//
//  Created by wens on 10/7/14.
//  Copyright (c) 2014 wens. All rights reserved.
//

#ifndef recipes_working_socket_h
#define recipes_working_socket_h

#include <unistd.h>
#include <sys/types.h>
#include <sys/socket.h>

#include <errno.h>

ssize_t readn(int fd, void *vptr, size_t n);

//error deal
void	 err_dump(const char *, ...);
void	 err_msg(const char *, ...);
void	 err_quit(const char *, ...);
void	 err_ret(const char *, ...);
void	 err_sys(const char *, ...);


#endif
