

#include<stdio.h>
#include<math.h>
int main()
{
  int n=scanf("%d \n",&n);
  printf("%d\n",(int)floor(log(n)/log(4)));
  printf("%d\n",(int)ceil(log(n)/log(4)));
  if ((int)floor(log(n)/log(4)) == ((int)ceil(log(n)/log(4))))
  printf("power of 4");
  else
  {
    printf("not in power of 4");
  }
  
}
