int even_fibonacci_num(int n)
{
  cout<<1<<" ";

  if(n == 1)   
    return 0;
  
  cout<<2<<" ";

  if(n == 2)   
    return 2;

  int evenSum = 2;
  int term1 = 1;
  int term2 = 2;
  
  for(int i = 3; i<=n; ++i)
  {    
    int currentTerm = term1 + term2;
    
    if(currentTerm > 4000000)
      return evenSum;

    if( currentTerm % 2 == 0)
    {
      evenSum += currentTerm;
    }

    term1 = term2;
    term2 = currentTerm;
  }

  return evenSum;
}