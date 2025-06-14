#ifndef USERPROG_PROCESS_H
#define USERPROG_PROCESS_H

#include "threads/thread.h"

tid_t process_create_initd (const char *file_name);
tid_t process_fork (const char *name, struct intr_frame *if_);
int process_exec (void *f_name);
int process_wait (tid_t);
void process_exit (void);
void process_activate (struct thread *next);

void argument_stack(char **parse, int count, void **rsp); //[*]3-B. 추가
#ifdef VM
bool lazy_load_segment(struct page *page, void *aux);
bool setup_stack(struct intr_frame *if_);
#endif

#endif /* userprog/process.h */
