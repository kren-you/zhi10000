#include<iostream>
#include<cstdio>
#include<cctype>
#include<cstring>
#include<cmath>
#include<cstdlib>
#include<fstream>
//#include<bits/stdc++.h>
using namespace std;
ifstream fin;
ofstream fout;
int main()
{
//	freopen(".in","r",stdin);
//	freopen(".out","w",stdout);
	float n;
	int a,i,f,k,s,j=0;
	bool flag=false;
	stpoint:;
	cout<<"������汾�š��鿴ʹ�ð��� ����0���˳�ϵͳ ����-1����";
	cin>>n;
	if(n==-1)
	{
		return 0;
	} 
	else
	{
		if(n==0)
		{
			cout<<"zhi10000ϵͳ-��Ʒ˵���飨ʹ�ð�����\n\nzhi10000ϵͳ�ǽ�֧�����ĵ���������ϵͳ����2020��7�����з���������2.0��2.5��3.0��3.5��4.0��4.2��4.5��5.0�˸��汾������";
			cout<<"\n\n���汾���\nzhi10000��1.0�����ڲ�棬δ����\nzhi10000��2.0�������Լ���1����������֮�����������1)";
			cout<<"\nzhi10000��2.5�������Լ���1����������֮�����������1)����1����������֮�����������1)�ĸ���";
			cout<<"\nzhi10000��3.0�������Լ���������������֮�������������1)����������������֮�������������1)�ĸ���\n";
			cout<<"zhi10000��3.5�����������ǰ�汾����˼����ٶ�\n";
			cout<<"zhi10000��4.0�����������ǰ�汾����˼����ٶ�\n";
			cout<<"zhi10000��4.2�����������ǰ�汾����������Ļ����ʾ�����������\n";
			cout<<"zhi10000��4.5����ϵͳ�п��Բ鿴ʹ�ð�����\n";
			cout<<"zhi10000��5.0��������������ǰ�汾�����й���\n";
			goto stpoint;
		}
		else
		{
			if(n==1.0)
			{
				cout<<"�ð汾δ��ʽ����......\n";
				goto stpoint; 
			} 
			else
			{ 
				if(n==2.0)
				{
					cout<<"���룺";
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
					goto endpoint;
				} 
				else
				{
					if(n==2.5)
					{
						cout<<"���룺";
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
								j++;
								
							}
						}
						cout<<"��"<<j<<"��"<<endl;
						goto endpoint;
					} 
					else
					{ 
						if(n==3.0)
						{
							cout<<"���룺";
							cin>>s>>k;
							if(s<=2) s=2;
							for(a=s;a<=k-1;a++)
							{
								f=0;
								for(i=2;i<=a-1;i++)
								{
									if(a%i==0) f=1;
								}
								if(f==0)
								{
									cout<<a<<endl;
									j++;
								}
							}
							cout<<"��"<<j<<"��"<<endl; 
							goto endpoint;
						} 
						else
						{ 
							if(n==3.5)
							{
								cout<<"���룺";
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
								cout<<"��"<<j<<"��"<<endl; 
								goto endpoint;
							} 
							else
							{ 
								if(n==4.0)
								{
									cout<<"����a����b�������ǽ����a~b֮���������������������\na��";
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
											cout<<a<<endl;
											j++;
										}
									}
									cout<<"��"<<j<<"��"<<endl; 
									goto endpoint;
								} 
								else
								{ 
									if(n==4.2)
									{
										cout<<"����a����b�������ǽ����a~b֮���������������������\na��";
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
										cout<<"��"<<j<<"��"<<endl;
										goto endpoint; 
									} 
									else
									{ 
										if(n==4.5)
										{
											cout<<"����a����b�������ǽ����a~b֮���������������������\n���鿴ʹ�ð���������a������'-1',�˳�����'-2'��\na��";
											while(1)
											{
												cin>>s;
												if(s==-1)
												{
													cout<<"zhi10000ϵͳ-��Ʒ˵���飨ʹ�ð�����\n\nzhi10000ϵͳ�ǽ�֧�����ĵ���������ϵͳ����2020��7�����з���������2.0��2.5��3.0��3.5��4.0��4.2��4.5�߸��汾������";
													cout<<"\n\n���汾���\nzhi10000��1.0�����ڲ�棬δ����\nzhi10000��2.0�������Լ���1����������֮�����������1)";
													cout<<"\nzhi10000��2.5�������Լ���1����������֮�����������1)����1����������֮�����������1)�ĸ���";
													cout<<"\nzhi10000��3.0�������Լ���������������֮�������������1)����������������֮�������������1)�ĸ���\n";
													cout<<"zhi10000��3.5�����������ǰ�汾����˼����ٶ�\n";
													cout<<"zhi10000��4.0�����������ǰ�汾����˼����ٶ�\n";
													cout<<"zhi10000��4.2�����������ǰ�汾����������Ļ����ʾ�����������\n";
													cout<<"zhi10000��4.5����ϵͳ�п��Բ鿴ʹ�ð�����\n";
													cout<<"����a����b�������ǽ����a~b֮���������������������\n���鿴ʹ�ð���������a������'-1',�˳�����'-2'��\na��";
												}
												else
												{
													if(s==-2)
													{
														return 0;
													}
													else
													{
														break;
													}
												}
											}
											cout<<"b��";
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
											cout<<"��"<<j<<"��"<<endl; 
											goto endpoint;
										} 
										else
										{ 
											if(n==5.0)
											{
												goto stpoint;
											}
											else 
											{ 
												cout<<"�޸� �汾/����\n\n"; goto stpoint;
											} 
										} 
									}
								} 
							} 
						}
					} 
				}
			} 
		} 
	} 
	endpoint:;
	system("pause");
	return 0;
}

