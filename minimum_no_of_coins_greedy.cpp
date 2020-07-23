#include<bits/stdc++.h>

using namespace std;

int get_change(long long int num ) {
  int coins[3] = {10,5,1};
  int c = 0;
  long long int n = 0;

  while(num>0)
  {
      if(c==3)
        break;
      if(num-coins[c]>-1){
        num = num - coins[c];
        n = n + 1;
      }
      if(num-coins[c]<=-1){
        c+=1;
      }
  }
  return n;
}

int main() {
  long long int num;
  std::cin >> num;
  std::cout << get_change(num) << '\n';
}
