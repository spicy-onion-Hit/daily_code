#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>

#define NUMBER_OF_THREADS 10

  void* print_hello_world( void*  tid){
  /* 输出线程的标识符，然后退出 */
  printf("Hello World. Greetings from thread %d\n", tid);
  pthread_exit(NULL);// 线程退出
}

int main(int argc,char *argv[]){
  /* 主程序创建 10 个线程，然后退出 */
  pthread_t threads[NUMBER_OF_THREADS];
  int status;

  for(int i = 0;i < NUMBER_OF_THREADS;i++){
    printf("Main here. Creating thread %d\n",i);
    status = pthread_create(&threads[i], NULL, print_hello_world, (void*)i);
    // 强制转换

    if(status != 0){
      printf("Oops. pthread_create returned error code %d\n",status);
      exit(-1);
    }
  }

  system("pause");
  exit(NULL); //主线程退出
}
/*
第一个参数为指向线程标识符的指针。
第二个参数用来设置线程属性。
第三个参数是线程运行函数的起始地址。
最后一个参数是运行函数的参数。*/

/*
原因是pthread_create希望第三个参数是一个函数指针，它接受一个void*参数，返回一个void*指针。
*/

/*
int pthread_create(pthread_t *tidp,const pthread_attr_t *attr,void *(*start_rtn)(void*),void *arg);
*/