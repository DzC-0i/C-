#include<iostream>

using namespace std;

int main(){
	int i,j,k,n;
	while(cin>>n){
		for(i=0;i<n;i++){
			for(k=0;k<n-i-1;k++)
					cout<<" ";
			for(j=0;j<i+1;j++)
				cout<<"*";
			for(;j-1>0;j--)
				cout<<"*";
			cout<<endl;
		}
		for(;i>1;i--){
			for(k=0;k<n-i+1;k++)
				cout<<" ";
			for(j=0;j<i-1;j++)
				cout<<"*";
			for(;j-1>0;j--)
				cout << '\n'<<"*";
			cout<<endl;
		}
	}
	return 0;
}
