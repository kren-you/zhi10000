#include<iostream>
#include<ctime> 
using namespace std;
int main()
{
	int a,i,f,k,s,j=0;
	chpoint:;
	bool flag=true;
	cout<<"����a����b�������ǽ����a~b֮���������������������\n���鿴ʹ�ð���:����a������'-1',�˳�����:'-2'��ENGLISH:'-3'��\na��";
	while(1)
	{
		if(flag)
			cin>>s;	
		if(s==-1)
		{
			cout<<"zhi10000ϵͳ��֧�����ġ�Ӣ�ģ�6.0֮�󣩵���������ϵͳ����2020��7�����з���������2.0��2.5��3.0��3.5��4.0��4.2��4.5��5.0��6.0�Ÿ��汾������";
			cout<<"\n\n���汾���\nzhi10000��1.0�����ڲ�棬δ����\nzhi10000��2.0�������Լ���1����������֮�����������1)";
			cout<<"\nzhi10000��2.5�������Լ���1����������֮�����������1)����1����������֮�����������1)�ĸ���";
			cout<<"\nzhi10000��3.0�������Լ���������������֮�������������1)����������������֮�������������1)�ĸ���\n";
			cout<<"zhi10000��3.5�����������ǰ�汾����˼����ٶ�\n";
			cout<<"zhi10000��4.0�����������ǰ�汾����˼����ٶ�\n";
			cout<<"zhi10000��4.2�����������ǰ�汾����������Ļ����ʾ�����������\n";
			cout<<"zhi10000��4.5����ϵͳ�п��Բ鿴ʹ�ð�����\n";
			cout<<"zhi10000��5.0��������������ǰ�汾�����й���\n";
			cout<<"zhi10000��6.0����֧��Ӣ�İ�\n";
			cout<<"zhi10000��7.0�����������ǰ�汾����˼����ٶȣ�֧��Ӣ�İ棩\n";
			cout<<"zhi10000��7.2����������Ϻ󣬻���ʾ����ʱ�䣨֧��Ӣ�İ棩\n";
			cout<<"����a����b�������ǽ����a~b֮���������������������\n���鿴ʹ�ð���������a������'-1',�˳�����'-2'��ENGLISH:'-3'��\na��";
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
					cout<<"Enter A number and B number, we will find all prime numbers and how many prime numbers between A and B \n��view help: Please enter '- 1' at a, exit: '- 2',����:'-3'��\na��";
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
							cout<<"Enter A number and B number, we will find all prime numbers and how many prime numbers between A and B \n��view help: Please enter '- 1' at a, exit: '- 2',����:'-3'��\na��";
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
	cout<<"b��";
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
		cout<<"��"<<j<<"��"<<endl;
	else
		cout<<"There are "<<j<<" in total."<<endl;
	printf("����ʱ�䣺%f",(double)clock()/CLOCKS_PER_SEC);
	system("pause"); 
	return 0;
 }
