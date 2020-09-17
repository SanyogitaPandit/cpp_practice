#include <iostream>
#include <vector>
using namespace std;

/*

By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.

What is the 10001st prime number?
*/

const long long MAX_SIZE = 1000001; 
  
// isPrime[] : isPrime[i] is true if number is prime  
// prime[] : stores all prime number less than N 
// SPF[] that store smallest prime factor of number 
// [for Exp : smallest prime factor of '8' and '16' 
// is '2' so we put SPF[8] = 2 , SPF[16] = 2 ] 
vector<long long >isprime(MAX_SIZE , true); 
 
vector<long long >SPF(MAX_SIZE); 

long nth_prime(long n)
{
  if(n == 1)
    return 2;
  if(n == 2)
    return 3;

  vector<long long >prime = {3};
  long index = 2;
  long nthPrime = 0;
  long naturalNumber = 5;
  while(index < n)
  {
    for(long i : prime)
    {        
      if(naturalNumber % i == 0)
      {        
        nthPrime = -1;
        break;
      }
    }

    if(nthPrime != -1)
    {
      nthPrime = naturalNumber; 
      cout<<nthPrime<<" ";     
      prime.push_back(nthPrime);      
      index++;
    }
    else
      nthPrime = 0; 

    naturalNumber += 2;
  }
  
  return nthPrime;
}