#include <iostream>

using namespace std;

int main()
{
    int a,b;
	char c;
	cin>>a>>c>>b;
	switch(c)
	{
		case '+':
			cout<<a<<c<<b<<"="<<a+b<<endl;
			break;
		case '-':
			cout<<a<<c<<b<<"="<<a-b<<endl;
			break;
		case '*':
			cout<<a<<c<<b<<"="<<a*b<<endl;
			break;
		case '/':
			cout<<a<<c<<b<<"="<<a/b<<endl;
			break;
		case '%':
			cout<<a<<c<<b<<"="<<a%b<<endl;
			break;
		default:
			cout<<"ERROR"<<endl;
	}
    return 0;
}
