#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<stdio.h>
#include <math.h>
using namespace std;

long long multiple3n5(int n)
{
  if((n < 3) || (n > pow(10, 9)))
  {
    return 0;
  }  
    
  long long sum = 0;
  long x = (n-1) / 3;
  sum = 3*(x*(x + 1)/2);
  x = (n-1) / 5;
  sum += 5*(x*(x + 1)/2);
  x = (n-1) / 15;
  sum -= 15*(x*(x + 1)/2);

  return sum;
}

int main(){
    int t;
    cin >> t;
    if(t<=pow(10, 5))
    {        
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;                
        cout<< multiple3n5(n) << "\n";
    }
    }
    return 0;
}
