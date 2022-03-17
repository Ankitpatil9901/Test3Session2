#include<stdio.h>
int input_size()
{
  int n; 
  printf("Enter the size of an array");
  scanf("%d",&n);
  return n;
}
void input_array(int n,int a[n])
{
  int i;
  printf("enter the array elements\n");
  for(i=0; i<n; i++)
 {
   scanf("%d",&a[i]);
  }
}
int find_largest(int n,int a[n])
{
  int i,biggest=0,largest;
  for(i=0; i<n; i++)
      if(a[i]>biggest)
      {
        biggest=a[i];
        largest=i;
      }
      else
      {
        biggest=biggest;
      }
  return i;
}
void out_put(int n,int a[n],int largest)
{
  printf("largest is %d",largest);
}
int main()
{
  int n,biggest,largest;
  n=input_size();
  int a[n];
  input_array(n,a);
  find_largest(n,a);
  out_put(n,a,largest);
}