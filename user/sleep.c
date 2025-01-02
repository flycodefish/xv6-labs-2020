#include "kernel/types.h"
#include "user/user.h"

int main(int argc, char const *argv[])
{
  if (argc != 2) { //参数错误	argc == 1：表示程序没有接收到任何有效的命令行参数, argc > 2：表示用户传递了额外的参数。argc == 2：表示正确的输入格式
    fprintf(2, "usage: sleep <time>\n");
    exit(1);
  }
  sleep(atoi(argv[1]));
  exit(0);
}

