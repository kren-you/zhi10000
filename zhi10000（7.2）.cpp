#include<iostream>
#include<ctime> 
using namespace std;
int main()
{
	int a,i,f,k,s,j=0;
	chpoint:;
	bool flag=true;
	cout<<"输入a数与b数，我们将求出a~b之间的所有质数及质数个数\n【查看使用帮助:请在a处输入'-1',退出程序:'-2'，ENGLISH:'-3'】\na：";
	while(1)
	{
		if(flag)
			cin>>s;	
		if(s==-1)
		{
			cout<<"zhi10000系统是支持中文、英文（6.0之后）的质数演算系统，自2020年7月起研发，至今共有2.0，2.5，3.0，3.5，4.0，4.2，4.5，5.0，6.0九个版本问世。";
			cout<<"\n\n各版本简介\nzhi10000（1.0）：内测版，未面世\nzhi10000（2.0）：可以计算1至输入数据之间的质数（含1)";
			cout<<"\nzhi10000（2.5）：可以计算1至输入数据之间的质数（含1)，和1至输入数据之间的质数（含1)的个数";
			cout<<"\nzhi10000（3.0）：可以计算两个输入数据之间的质数（不含1)，和两个输入数据之间的质数（不含1)的个数\n";
			cout<<"zhi10000（3.5）：相比于以前版本提高了计算速度\n";
			cout<<"zhi10000（4.0）：相比于以前版本提高了计算速度\n";
			cout<<"zhi10000（4.2）：相比于以前版本，可以在屏幕上显示更多的质数了\n";
			cout<<"zhi10000（4.5）：系统中可以查看使用帮助了\n";
			cout<<"zhi10000（5.0）：可以体验以前版本的所有功能\n";
			cout<<"zhi10000（6.0）：支持英文版\n";
			cout<<"zhi10000（7.0）：相比于以前版本提高了计算速度（支持英文版）\n";
			cout<<"zhi10000（7.2）：计算完毕后，会显示运行时间（支持英文版）\n";
			cout<<"输入a数与b数，我们将求出a~b之间的所有质数及质数个数\n【查看使用帮助：请在a处输入'-1',退出程序：'-2'，ENGLISH:'-3'】\na：";
		}
		else
		{
			if(s==-2)
			{
				return 0;
			}
			else
			{
				if(s==-3)
				{
					flag=false;
					cout<<"Enter A number and B number, we will find all prime numbers and how many prime numbers between A and B \n【view help: Please enter '- 1' at a, exit: '- 2',中文:'-3'】\na：";
					while(1)
					{
						cin>>s;
						if(s==-1)
						{
							cout<<"Zhi10000 system is a prime number calculus system that supports Chinese and English (after 6.0). It has been developed since July 2020. So far, nine versions of 2.0, 2.5, 3.0, 3.5, 4.0, 4.2, 4.5, 5.0 and 6.0 have been published.";
							cout<<"\n\nIntroduction to each version\nzhi10000 (1.0): beta version, not available\nzhi10000 (2.0): can calculate the prime number between 1 and input data (including number 1)";
							cout<<"\nZhi10000 (2.5): you can calculate the number of prime numbers (including 1) between 1 and input data, and the number of prime numbers (including 1) between 1 and input data";
							cout<<"\nZhi10000 (3.0): you can calculate the number of prime numbers (excluding 1) between two input data and the number of prime numbers (excluding 1) between two input data\n";
							cout<<"Zhi10000 (3.5): faster than previous versions\n";
							cout<<"Zhi10000 (4.0): faster than previous versions\n";
							cout<<"Zhi10000 (4.2): compared with the previous version, it can display more prime numbers on the screen\n";
							cout<<"Zhi10000 (4.5): product functions can be displayed in the system\n";
							cout<<"Zhi10000 (5.0): you can experience all the functions of previous versions\n";
							cout<<"Zhi10000 (6.0): support English version\n";
							cout<<"Zhi10000 (7.0): faster than previous versions ( support English version ) \n";
							cout<<"Zhi10000 (7.2):  ( support English version ) \n";
							cout<<"Enter A number and B number, we will find all prime numbers and how many prime numbers between A and B \n【view help: Please enter '- 1' at a, exit: '- 2',中文:'-3'】\na：";
						}
						else
						{
							if(s==-2)
							{
								return 0;
							}
							else
							{
								if(s==-3)
								{
									flag=true;
									goto chpoint;
								}
								else
								{
									break;
								}
							}
						}
					}
				}
				else
				{
					break;
				}
			}
		}
	}
	cout<<"b：";
	cin>>k;
	if(s<=2) s=3;
	if(k>2) j++;
	if(s%2==0) s++;
	for(a=s;a<=k-1;a+=2)
	{
		f=0;
		if(a%2==0) 
		{
			f=1;
			goto go1p;	
		}
		for(i=3;i*i<=a;i+=2)
		{
			if(a%i==0) f=1;
		}
		go1p:;
		if(f==0)
		{
			cout<<a<<"  ";
			j++;
		}
	}
	if(flag)
		cout<<"共"<<j<<"个"<<endl;
	else
		cout<<"There are "<<j<<" in total."<<endl;
	printf("运行时间：%f",(double)clock()/CLOCKS_PER_SEC);
	system("pause"); 
	return 0;
 }
