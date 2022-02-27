#include<iostream>
using namespace std;
int main()
{
	int a,i,f,k;
	cout<<"ÊäÈë£º";
	cin>>k;
	for(a=1;a<=k-1;a++)
	{
		f=0;
		for(i=2;i<=a-1;i++)
		{
			if(a%i==0) f=1;
		}
		if(f==0)
		{
			cout<<a<<endl;
		}
	}
	system("pause"); 
	return 0;
 }

