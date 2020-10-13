#include <stdio.h>
int main( )
{
  float a[10],b[10];
  for(int i=0;i<10;i++)
  {
  scanf("%f",&a[i]);
  if (a[i] == 0) {
        break;}
  }
  for(int i=0;i<10;i++)
  { b[i]= (a[i])/400;
  printf("%.1f ",b[i]);
  int m = i+1 ; 
  if (a[m] == 0) {
        break;}
  }
  return 0;
}
