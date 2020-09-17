#include <iostream>
#include <vector>
#include <string>
#include <math.h>
using namespace std;



int main()
{ 
  int n = -1;
  while(n != 0){
    cout<<"\n" << "Enter a number: ";  
    cin >> n ;
    cout<<"\n" << even_fibonacci_num(n);
  }
}