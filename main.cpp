#include <iostream>

using namespace std;

int main()
{ 
  /*long long n = -1;
  while(n != 0){
    cout<<"\n" << "Enter a number: ";  
    cin >> n ;
    cout<<"\n" << (n);
  }*/
  std::string no;
  int cnt;
  while(no[0] != 'q'){
    cout<<"\n" << "Enter a number and digit count: ";  
    cin >> no ;
    cin >> cnt ;
    cout<<"\n";
  }
}