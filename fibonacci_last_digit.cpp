#include <iostream>
using namespace std;

long long int get_fibonacci_last_digit_naive(long long int n) {
   long long int a = 0 , b = 1;
   long long int fib ;

    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    if (n == 2)
        return 1;

    for(long long int i=0;i<=n-2;i++)
    {
        fib = a + b;
        a=b;
        b=fib;
    }
    return fib%10;
}

int main() {
    long long int n;
    std::cin >> n;
    long long int last_digits[60];

    for(int i=0;i<60;i++)
    {
    last_digits[i] = get_fibonacci_last_digit_naive(i);
    }
    long long int ans ;
    ans = n%60;

    cout<<last_digits[ans];

 return 0;
}
