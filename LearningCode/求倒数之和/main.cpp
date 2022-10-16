#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
    int n,i;
    double sum=0;
    cin>>n;
    for(i=0;i<n;i++){
		sum+=1.0/(i+1);
    }
    cout<<fixed<<setprecision(6)<<sum<<endl;
    return 0;
}
