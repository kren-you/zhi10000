#include<iostream>
#include<cmath> 
using namespace std; 
int main()
{ 
	int zhi[10000]; //定义一维数组储存指数 
	int ci;
	for(ci=0;ci<10000;ci++)
	{
		zhi[ci]=0;
	}
	cout<<zhi;
	int ans[10000];  //定义一维数组储存答案 
	int zh=2;  //定义变量暂存待定质数
	int ti;  //定义变量暂存题目 
	int si;  //定义一堆临时变量
	int xi;
	int fi=1;
	int di;

	int zi;
	
	cout<<"请出题：";

	for(di=0;di<10000;di++)
	{
		zh++;
        for(zi=0;zi<di;zi++) 
		{
            if(zh%zhi[zi]!=0)  break;
		    if((zi=di-1)&&(zh%zhi[zi]!=0))  //如果已经循环到比待定质数小1的质数时且相除后不可除尽 
			{ 
			    zhi[fi]=zh;  //存入质数库 
				fi++;  //下标变量自加 
		    }
	    }
	}
	cin>>ti;  //输入题目 
    for(xi=0;xi<10000;xi++)
	{
		if(ti<zhi[xi])  //如果质数比题目小 
		{
			ans[si]=zhi[xi];  //存入答案 
			si++;  //答案下标变量自加 
		} 
	}
	cout<<ans<<endl;  //输出答案 
	return 0;
} 

