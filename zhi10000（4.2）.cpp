#include<iostream>
using namespace std;
int main()
{
	int a,i,f,k,s,j=0;
	cout<<"输入a数与b数，我们将求出a~b之间的所有质数及质数个数\na：";
	cin>>s;
	cout<<"b:";
	cin>>k;
	if(s<=2) s=2;
	for(a=s;a<=k-1;a++)
	{
		f=0;
		for(i=2;i*i<=a;i++)
		{
			if(a%i==0) f=1;
		}
		if(f==0)
		{
			cout<<a<<"  ";
			j++;
		}
	}
	cout<<"共"<<j<<"个"<<endl; 
	system("pause"); 
	return 0;
 }

