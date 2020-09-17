#include <iostream>
using namespace std;

long sum_square_difference(long n)
{
  long diff = 0;
  int l, k; 
  
    // Sum of the squares of the 
    // first n natural numbers is 
    l = (n * (n + 1) * (2 * n + 1)) / 6; 
      
    // Sum of n naturals numbers 
    k = (n * (n + 1)) / 2; 
  
    // Square of k 
    k = k * k; 
      
    // Differences between l and k 
    diff = abs(l - k);    

  return diff;
}

int main()
{ 
  long long n = -1;
  while(n != 0){
    cout<<"\n" << "Enter a number: ";  
    cin >> n ;
    cout<<"\n" << sum_square_difference(n) ;
  }
}