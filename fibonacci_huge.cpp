#include<bits/stdc++.h>
#include <iostream>

/* long long get_fibonacci_huge_naive(long long n, long long m) {
    unsigned long long int a = 0 , b = 1;
    unsigned long long int fib ;

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
    return fib%m;
}
*/

//First we get the length of Pisano Period

unsigned long long get_pisano_period(unsigned long long int m1) {
    unsigned long long int a = 0, b = 1, c = a + b;

    for (unsigned long long int i = 0; i < m1 * m1; i++)
    {
        c = (a + b) % m1;
        a = b;
        b = c;
        if (a == 0 && b == 1) return i + 1;               //A PISANO PERIOD ALWAYS STARTS WITH 01 , so occurrence of another 01 means period ended before it .
    }
}

long long fibonacci_huge(unsigned long long int n,unsigned long long int m) {
    unsigned long long int a = 0 , b = 1;
    unsigned long long int fib;
    unsigned long long int pisano_length ;                //USING PISANO PERIOD AS NUMBER MAY EXCEED 10^14
    unsigned long long int int_ans ;
    unsigned long long int ans ;
                        //INTERMEDIATE ANSWER

    pisano_length = get_pisano_period(m) ;
    unsigned long long int temp_fib[pisano_length];
//  std::cout<<"/n Pisano Length = "<<pisano_length<<"\n";
    int_ans = n % pisano_length ;  //FIBONACCI at int_ans is the answer
//  std::cout<<"/n Intermediate ans = "<<int_ans<<"\n";

    temp_fib[0] = a ;
    temp_fib[1] = b ;
    for(unsigned long long int i=2;i<=pisano_length-1;i++)
    {
        temp_fib[i] = a + b;
        a=b;
        b=temp_fib[i];
    }
    ans = temp_fib[int_ans];
    return ans%m ;
}


int main() {
    unsigned long long int n, m;
//  for(int i =0 ;i<5;i++){
    std::cin >> n >> m;
//  std::cout << get_fibonacci_huge_naive(n, m) << '\n';
    std::cout<<fibonacci_huge(n,m);
//  std::cout<<"\n";
//}
return 0;
}
