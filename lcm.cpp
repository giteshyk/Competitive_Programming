#include<bits/stdc++.h>

using namespace std;

long long int compute_gcd(long long int num1,long long int num2)
{
    if(num2==0)
        return num1;
    long long int rem;

    rem = remainder(num1,num2);
    if(rem<0){
        rem = rem*(-1);
    }
    compute_gcd(num2,rem);
}

/*
  long long lcm_naive(long int a,long long int b) {
  for (long l = 1; l <=  a * b; ++l)
    if (l % a == 0 && l % b == 0)
      return l;

  return  a * b;
}
*/

int main() {
  long long int a, b;
  std::cin >> a >> b;
  std::cout << a*b/(compute_gcd(a,b)) << std::endl;
  return 0;
}
