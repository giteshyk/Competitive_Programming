#include<bits/stdc++.h>

using namespace std;

void spiral_matrix(vector<vector<int>> arr,int rows,int cols){
    int i,row_iter=0,col_iter=0;

    while(row_iter<rows && col_iter <cols){
        for(i=col_iter;i<cols;i++){
            cout<<arr[row_iter][i]<<" ";
        }
        row_iter++;

        for(i=row_iter;i<rows;i++){
            cout<<arr[i][cols-1]<<" ";
        }
        cols--;

        if(row_iter<rows){
            for(i = cols - 1;i>=col_iter;--i){
                cout<<arr[rows-1][i]<<" ";
            }
            rows--;
        }
        if(col_iter<cols){
            for(i=rows-1;i>=row_iter;--i){
                cout<<arr[i][col_iter]<<" ";
            }
            col_iter++;
        }
    }
}

int main(){

    int i=0,j=0;
    int rows,cols;

    vector<vector <int>> arr{{1,2,3},
                             {8,9,4},
                             {7,6,5}};

    rows = arr[0].size();
    cols = arr[0].size();

    cout<<"Regular Traversal :";

    for(int i=0;i<arr.size();i++){                              //Printing Regular Traversal
        for(int j=0;j<arr.size();j++)
            cout<<arr[i][j]<<" ";
    }

    cout<<"\n"<<"Spiral Traversal :";
    spiral_matrix(arr,rows,cols);                               //Spiral Traversal

return 0;
}
