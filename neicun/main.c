#include <stdio.h>

static int a=20;
extern int age;

void set_age(int n)
{

    age =n;
}


void get_age()
{
    printf("age=%d\n",age);

}

void test1()
{

  auto  int a1=0;
  int a=100;

}


void test2()
{

    int a2=0;
}

int main04(int argc, char *argv[])
{
   // int a=0;

  //  a1=100;


  //  printf("Hello World!\n");
   // return 0;
}
void mystatic()
{
    int i;
    static int a=0;
    printf("a=%d\n",a);
    a++;

}


int main()
{
    set_age(10);
    get_age();
    //register int i=0;
    //int *p=&i;
    printf(("------------------\m"));

            int i;
    for(i=0;i<10;i++)
    {

        mystatic();
    }

    return 0;



}
