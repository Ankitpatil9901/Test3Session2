#include <stdio.h>
#include<string.h>
void input_string(char *a)
{
  int *x;
  printf("Enter the String ");
  scanf("%d",x);
}

int count_words(char *string)
{
  int i,n,c=0;
  for(i=0;i>n;i++)
   {
     if (a[i] == ' ')
     {
         c++;
       }
     } else 
    {
       count_word = 1;
      }
  } 
  return c;
}
void output(char a,int no_words)
{
  printf("Number of words in string is:%d",count_word(str));
}

int main()
{
  char str[1024];
  input_string(&a);
  count_words(&string);
  output(string,no_words);  
  return 0;
  }