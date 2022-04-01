#include<stdio.h>

void input_str(char *a)
{
  printf("Enter the string: ");
  scanf("%s",a);
}

int str_reverse(char *a,char *rev)
{
  int i=0,len=0;
  while(a[i]!=0)
    {
      len+=1;
      i++;
    }
  int j=len-1;
  for(int k=0;k<len;k++)
    {
      rev[k]=a[j];
      j--;
    }
}

void output(char *a,char *rev)
{
  printf("Reverse of the string %s is %s",a,rev);
}

int main()
{
  char x[100],reverse[100];
  input_str(x);
  str_reverse(x,reverse);
  output(x,reverse);
}