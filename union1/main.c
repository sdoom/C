#include <stdio.h>
#include<stdlib.h>
#include<string.h>
union A
{
  char a;
  char *b;

};

int main(int argc, char *argv[])
{
    union A a;
    a.b=malloc(100);

    a.a=10;
    //a.b=;

    printf("%d\n",sizeof(union A));
      printf("%p,%p\n",&a.a,&a.b);
        printf("a=%x\n",a.a);
        printf("b=%x\n",a.b);
        free(a.b);
    return 0;
}
