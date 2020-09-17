/*

A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.

Find the largest palindrome made from the product of two 3-digit numbers.

*/

bool isPalindrome(const long long no)
{
  long long reverse = 0;

  long long n = no;  
  while(n != 0)
  {    
    reverse = (reverse * 10) + (n % 10);
    n /= 10;
  }  
 
  if(reverse == no)
    return true;

  return false;
}

long long largest_palindrome_product(int digits)
{  
  long long panlindromeNo = 0;
  long long min = 1;
  long long max = 9;

  while(digits > 1)
  {
    min *= 10;
    max = (max * 10) + 9;
    digits--;
  }

  for(long long i = max; i >= min; --i)
  {    
    for(long long j = i; j >= min; --j)
    {      
      if(isPalindrome(i*j))
      {        
        if(panlindromeNo < i*j)
          panlindromeNo = i*j;   

        break;
      }
    }    
  }

  return panlindromeNo;
}