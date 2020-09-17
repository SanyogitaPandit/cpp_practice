long long largest_prime_factor(long long n)
{
  long long lpf = n;
  while(n % 2 == 0)
  {
    lpf = 2;
    n /= 2;
  }

  for(int i = 3; i <= n; i+=2)
  {
    while(n % i == 0)
    {
      n /= i;
      lpf = i;
    }
  }

  return lpf;
}