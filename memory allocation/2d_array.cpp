#include<iostream>
using namespace std;
int main(){
    int **arr;
    int r,c;
    cin>>r>>c;
    arr=new int*[r];
    for(int i=0;i<r;i++){
        arr[i]=new int[c];
    }
    int val=0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            arr[i][j]=val++;
            cout<<arr[i][j];
        }
        cout<<endl;
    }
    return 0;
}