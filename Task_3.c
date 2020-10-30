#include <stdio.h>
int main()
{
  int a[10] = {}; 
  for (int i = 0; i < 10; i++) {
  a[i] = 1;    
}
int j = 9;
while (j >= 0)
{
//   sprintf(, "%d", number); какая-то новая хуйня, надо разобраться, как в ней работать
   printf("%d ", a[j]);
   j--;
}
for (int j = 0; j < 10; j++){
  if (j % 2 == 0){
    a[j] = 0;
  }
}
for (int k = 0; k < 10; k++)
{
  if(k == 4){
    a[k] = 3;
  }
    if(k == 5){
      a[k] = 2;
    }
printf("\n");
int x = 9;
while (x >= 0)
{
   printf("%d ", a[x]);
   x--;
}
  
}
}