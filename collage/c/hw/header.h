//isperfect
//count
//isarmstrong
//reverse
//isAdamNumber
//isprime
//factorial
//odd_even
#include<math.h>
int isperfect (int no)
{
    int check=0;
    for (int i = 1; i < no; i++)
    {
        if (no % i == 0)
          check += i;
    }
    return check;
}
int count(int no)
{
    int n,count = 0;
    
    //to count the numbers
    while (no != 0)
    {
        no /= 10;
        count++; 
    }
    return count;
}
int isarmstrong(int no)
{   
    int rem,ans=0; 
    int original_no = no;
    int c = count(no);

    //to find the armstrong number
    for (int i = 0; i < c; i++)
    {
        rem = no % 10;
        ans = ans + pow(rem, c);
        no /= 10;
    }
    if (original_no == ans) 
      return 1;
    else
      return 0;
}
int reverse(int n) 
{
    int rev = 0;
    while (n > 0) 
    {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    return rev;
}
int isAdamNumber(int n) 
{
    int sq1,rev_n,sq2;

    sq1 = n * n;
    rev_n = reverse(n);
    sq2 = rev_n * rev_n;
    if(reverse(sq2) == sq1)
      return 1;
    else 
      return 0;
}
int isprime(int num)
{
    int i,check = 0;
    for(i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            check++;
            break;
        }
    }
    if(check > 0)
      return 0;  //composite
    else
      return 1;  //prime
}
unsigned long long int factorial(int number)
{
    unsigned long long int fact = 1;
    for(int i = 1; i <= number; i++)
    {
        fact *= i;
    }
    return fact;
}
int odd_even(int no)
{
    if (no % 2 == 0)
       return 0;
    else 
       return 1;
}