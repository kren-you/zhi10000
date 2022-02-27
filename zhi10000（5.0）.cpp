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
	cout<<"请输入版本号【查看使用帮助 输入0，退出系统 输入-1】：";
	cin>>n;
	if(n==-1)
	{
		return 0;
	} 
	else
	{
		if(n==0)
		{
			cout<<"zhi10000系统-产品说明书（使用帮助）\n\nzhi10000系统是仅支持中文的质数演算系统，自2020年7月起研发，至今共有2.0，2.5，3.0，3.5，4.0，4.2，4.5，5.0八个版本问世。";
			cout<<"\n\n各版本简介\nzhi10000（1.0）：内测版，未面世\nzhi10000（2.0）：可以计算1至输入数据之间的质数（含1)";
			cout<<"\nzhi10000（2.5）：可以计算1至输入数据之间的质数（含1)，和1至输入数据之间的质数（含1)的个数";
			cout<<"\nzhi10000（3.0）：可以计算两个输入数据之间的质数（不含1)，和两个输入数据之间的质数（不含1)的个数\n";
			cout<<"zhi10000（3.5）：相比于以前版本提高了计算速度\n";
			cout<<"zhi10000（4.0）：相比于以前版本提高了计算速度\n";
			cout<<"zhi10000（4.2）：相比于以前版本，可以在屏幕上显示更多的质数了\n";
			cout<<"zhi10000（4.5）：系统中可以查看使用帮助了\n";
			cout<<"zhi10000（5.0）：可以体验以前版本的所有功能\n";
			goto stpoint;
		}
		else
		{
			if(n==1.0)
			{
				cout<<"该版本未正式发布......\n";
				goto stpoint; 
			} 
			else
			{ 
				if(n==2.0)
				{
					cout<<"输入：";
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
						cout<<"输入：";
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
						cout<<"共"<<j<<"个"<<endl;
						goto endpoint;
					} 
					else
					{ 
						if(n==3.0)
						{
							cout<<"输入：";
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
							cout<<"共"<<j<<"个"<<endl; 
							goto endpoint;
						} 
						else
						{ 
							if(n==3.5)
							{
								cout<<"输入：";
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
								cout<<"共"<<j<<"个"<<endl; 
								goto endpoint;
							} 
							else
							{ 
								if(n==4.0)
								{
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
											cout<<a<<endl;
											j++;
										}
									}
									cout<<"共"<<j<<"个"<<endl; 
									goto endpoint;
								} 
								else
								{ 
									if(n==4.2)
									{
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
										goto endpoint; 
									} 
									else
									{ 
										if(n==4.5)
										{
											cout<<"输入a数与b数，我们将求出a~b之间的所有质数及质数个数\n【查看使用帮助：请在a处输入'-1',退出程序：'-2'】\na：";
											while(1)
											{
												cin>>s;
												if(s==-1)
												{
													cout<<"zhi10000系统-产品说明书（使用帮助）\n\nzhi10000系统是仅支持中文的质数演算系统，自2020年7月起研发，至今共有2.0，2.5，3.0，3.5，4.0，4.2，4.5七个版本面世。";
													cout<<"\n\n各版本简介\nzhi10000（1.0）：内测版，未面世\nzhi10000（2.0）：可以计算1至输入数据之间的质数（含1)";
													cout<<"\nzhi10000（2.5）：可以计算1至输入数据之间的质数（含1)，和1至输入数据之间的质数（含1)的个数";
													cout<<"\nzhi10000（3.0）：可以计算两个输入数据之间的质数（不含1)，和两个输入数据之间的质数（不含1)的个数\n";
													cout<<"zhi10000（3.5）：相比于以前版本提高了计算速度\n";
													cout<<"zhi10000（4.0）：相比于以前版本提高了计算速度\n";
													cout<<"zhi10000（4.2）：相比于以前版本，可以在屏幕上显示更多的质数了\n";
													cout<<"zhi10000（4.5）：系统中可以查看使用帮助了\n";
													cout<<"输入a数与b数，我们将求出a~b之间的所有质数及质数个数\n【查看使用帮助：请在a处输入'-1',退出程序：'-2'】\na：";
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
											cout<<"b：";
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
												cout<<"无该 版本/功能\n\n"; goto stpoint;
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

