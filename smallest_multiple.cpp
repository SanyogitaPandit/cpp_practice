#include <iostream>
#include <algorithm>
using namespace std;

/*
2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
*/

long long lcm(long n1, long n2)
{
  return n1*n2 / (__gcd(n1, n2));
}

long long smallest_multiple(long max)
{
  long min = 1;
  long long lcmn = 1;
 
  for(int i=min+1; i<=max; ++i)
  {
    lcmn = lcm(lcmn, i);
  }

  return lcmn;
}