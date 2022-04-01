#include <stdio.h>
#include <string.h>

void input_string(char *st)
{
  printf("String? ");
  scanf("%s", st);
}

int findsubstring(char *st1, char *st2) {
  int i;
  for (i=strlen(st1)-1; i>0; i--) {
    if (strncmp(st1, st2, i) == 0)
      break;
  }

  return i;
}

/* Alternate way to code */

int mystrcmp(char *s1, char *s2, int i)
{
  int j=0;
  while(s1[i]==s2[j]
        && s1[i]!='\0' 
        && s2[j] !='\0' )
    {
      i++;
      j++;
    }
  if(s2[j]=='\0')
  {
    return 1;
  }
  return 0;
}

int sub_str(char *s1, char *s2)
{
  int i=0;
  for(i=0;s1[i] != 0;i++)
    {
      if(mystrcmp(s1,s2,i))
        return i;
    }
  return -1;
}
void output(char *st1, char *st2, int p) {
  printf("String '%s' in '%s' starts from %d and ends at %d\n", st2, st1, p, (int) strlen(st2) + p - 1);
}

int main() {
  char st1[100];
  char st2[100];

  input_string(st1);
  input_string(st2);

  output(st1, st2, sub_str(st1, st2));
}
