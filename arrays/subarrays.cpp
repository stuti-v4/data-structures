#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[1000];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			for(int k=i;k<=j;k++){
				cout<<a[k]<<",";
			}
			cout<<endl;
		}
	}
	for(int i=0;i<n;i++)
	{
		cout<<" "<<a[i];
	}
	return 0;
	
}
