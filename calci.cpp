#include<iostream>
using namespace std;
int main(){
	int a,b;
	cout<<"Enter 2 no:";
	cin>>a>>b;
	char ch;
	cout<<"Enter operator:";
	cin>>ch;
	switch(ch)
	{
		case '+':
			cout<<"Result:"<<(a+b);
			break;
		case '-':
			cout<<"Result:"<<(a-b);
			break;
		default:
			cout<<"Invalid";
	}
}
