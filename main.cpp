#include <iostream>
#include <vector>
#include <string>
#include <math.h>
using namespace std;

int multiple3n5(int n)
{
  if(n < 3)
    return 0;
  
  int sum = 3;
  for(int i = 4; i<n; ++i)
  {
    if( i % 3 == 0 || i % 5 == 0)
    {
      sum += i;
    }    
  }

  return sum;
}

int main()
{
  cout << "Enter a number: ";
  int n;
  cin >> n ;
  cout << multiple3n5(n);
}