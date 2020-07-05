#include <bits/stdc++.h>
#include <vector>

using std::vector;
using namespace std;

struct item {
    int value ;
    int weight ;
};

bool cmp(struct item a, struct item b){
    double r1 = (double)a.value/(double)a.weight ;
    double r2 = (double)b.value/(double)b.weight ;

    return r1>r2 ;
}

double get_optimal_value(int capacity,struct item arr[],int n) {
  double value = 0.0;

  std::sort(arr,arr + n,cmp) ;

/*
  cout<<"\n \n our problem sorted \n";
  for(int i = 0; i < n; i++){
    cout<<arr[i].value<< "  " ;
    cout<<arr[i].weight<< "\n" ;
  }
*/
  int cur_weight = 0.0 ;

  for(int i=0; i<n ;i++){
    if(cur_weight + arr[i].weight <= capacity){
        cur_weight += arr[i].weight ;
        value += arr[i].value ;
    }
    else{
        int remain = capacity - cur_weight;
        value += arr[i].value*((double)remain/arr[i].weight);
        break;
    }
  }

  return value;
}

int main() {
  int n;
  int capacity;
  std::cin >> n >> capacity;
  vector<int> values(n);
  vector<int> weights(n);
  for (int i = 0; i < n; i++) {
    std::cin >> values[i] >> weights[i];
  }
  item arr[n];

  for(int i = 0; i < n; i++){
    arr[i].value = values[i];
    arr[i].weight = weights[i];
  }


/*
  cout<<"\n \n our problem \n";
  for(int i = 0; i < n; i++){
    cout<<arr[i].value<< "  " ;
    cout<<arr[i].weight<< "\n" ;
  }
*/


  double optimal_value = get_optimal_value(capacity, arr ,n);

  std::cout.precision(10);
//cout<<"\n";
  std::cout << optimal_value << std::endl;
  return 0;
}
