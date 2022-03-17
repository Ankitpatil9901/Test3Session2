#include<stdio.h>

typedef struct Fraction
{ 
  int num, den;
}fraction;

fraction input_fraction()
{
  fraction f;
  printf("Enter the numerator: ");
  scanf("%d",&f.num);
  printf("Enter the denominator: ");
  scanf("%d",&f.den);
  return f;
}
int find_gcd(int a,int b)
{
  int i,gcd,lcm,multi1,multi2;
    for(i=1;i<=a && i<=b;i++)
      {
        if(a%i==0 && b%i==0)
        {
          gcd=i;
        }
      }
    
  return gcd;
}

fraction add_fractions(fraction f1,fraction f2,int gcd)
{
  fraction f3;
  int multi1,multi2,lcm,num1,num2;
  lcm=(f1.den*f2.den)/gcd;
  multi1=lcm/f1.den;
  multi2=lcm/f2.den;
  num1=f1.num*multi1;
  num2=f2.num*multi2;
  f3.num=num1+num2;
  f3.den=lcm;
  return f3;
}

void output(fraction f1,fraction f2,fraction f3)
{
  printf("The sum of fractions %d/%d and %d/%d is: %d/%d.",f1.num,f1.den,f2.num,f2.den,f3.num,f3.den);
}

int main()
{
  fraction f1,f2,f3;
  int gcd;
  f1=input_fraction();
  f2=input_fraction();
  gcd=find_gcd(f1.den,f2.den);
  f3=add_fractions(f1,f2,gcd);
  output(f1,f2,f3);
}