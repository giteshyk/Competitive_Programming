#include<bits/stdc++.h>
using namespace std;

int stackk[100], n=100, top=-1;

void push(int val) {
   if(top > n-1)
    cout<<"\n Overflow \n";
   top++;
   stackk[top] = val;
}

void pop() {
    if(top <= -1)
        cout<<"\n Underflow \n";
    else{
        cout<< stackk[top];
        top--;
    }
}

void display() {
    if(top >=0){
        cout<<"\nElements are :\n";
        for(int i=0;i<=top;++i)
            cout<<" "<<stackk[top];
    }
}
int main() {
   int ch, val;
   cout<<"1) Push in stack"<<endl;
   cout<<"2) Pop from stack"<<endl;
   cout<<"3) Display stack"<<endl;
   cout<<"4) Exit"<<endl;
   do {
      cout<<"\n Enter choice: "<<endl;
      cin>>ch;
      switch(ch) {
         case 1: {
            cout<<"Enter value to be pushed:"<<endl;
            cin>>val;
            push(val);
            break;
         }
         case 2: {
            pop();
            break;
         }
         case 3: {
            display();
            break;
         }
         case 4: {
            cout<<"Exit"<<endl;
            break;
         }
         default: {
            cout<<"Invalid Choice"<<endl;
         }
      }
   }while(ch!=4);
   return 0;
}
