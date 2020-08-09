#include <bits/stdc++.h>
using namespace std;
int que[100], n = 100, frnt = - 1, rear = - 1;

void Insert() {
    int val;

        if(rear >= n-1)
            cout<<"\n Queue is full";
        else{
            if(frnt == -1)
                frnt =0;

            rear += 1;
            cout<<"\n Enter the value \n";
            cin>>val;
            que[rear] = val;
        }
   }

void Delete() {
    if(frnt == -1 || frnt > rear)
        cout<<"\n Empty \n";
    else{
        cout<<que[frnt]<<" is deleted \n";
        frnt++;
    }
}
void Display() {
  if(frnt == -1)
    cout<<"\n Empty \n";
  else{
    for(int i = frnt; i<=rear ; i++){
        cout<<" "<<que[i];
    }
  }
}
int main() {
   int ch;
   cout<<"1) Insert element to queue"<<endl;
   cout<<"2) Delete element from queue"<<endl;
   cout<<"3) Display all the elements of queue"<<endl;
   cout<<"4) Exit"<<endl;
   do {
      cout<<"\n Enter your choice : "<<endl;
      cin>>ch;
      switch (ch) {
         case 1: Insert();
         break;
         case 2: Delete();
         break;
         case 3: Display();
         break;
         case 4: cout<<"Exit"<<endl;
         break;
         default: cout<<"Invalid choice"<<endl;
      }
   } while(ch!=4);
   return 0;
}
