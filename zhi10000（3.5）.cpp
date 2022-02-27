#include<iostream>
using namespace std;
int main()
{
	int a,i,f,k,s,j=0;
	cout<<"ÊäÈë£º";
	cin>>s>>k;
	if(s<=2) s=2;
	for(a=s;a<=k-1;a++)
	{
		f=0;
		for(i=2;i<=a/2;i++)
		{
			if(a%i==0) f=1;
		}
		if(f==0)
		{
			cout<<a<<endl;
			j++;
		}
	}
	cout<<"¹²"<<j<<"¸ö"<<endl; 
	system("pause"); 
	return 0;
 }

