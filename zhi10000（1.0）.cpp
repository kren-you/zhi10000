#include<iostream>
#include<cmath> 
using namespace std; 
int main()
{ 
	int zhi[10000]; //����һά���鴢��ָ�� 
	int ci;
	for(ci=0;ci<10000;ci++)
	{
		zhi[ci]=0;
	}
	cout<<zhi;
	int ans[10000];  //����һά���鴢��� 
	int zh=2;  //��������ݴ��������
	int ti;  //��������ݴ���Ŀ 
	int si;  //����һ����ʱ����
	int xi;
	int fi=1;
	int di;

	int zi;
	
	cout<<"����⣺";

	for(di=0;di<10000;di++)
	{
		zh++;
        for(zi=0;zi<di;zi++) 
		{
            if(zh%zhi[zi]!=0)  break;
		    if((zi=di-1)&&(zh%zhi[zi]!=0))  //����Ѿ�ѭ�����ȴ�������С1������ʱ������󲻿ɳ��� 
			{ 
			    zhi[fi]=zh;  //���������� 
				fi++;  //�±�����Լ� 
		    }
	    }
	}
	cin>>ti;  //������Ŀ 
    for(xi=0;xi<10000;xi++)
	{
		if(ti<zhi[xi])  //�����������ĿС 
		{
			ans[si]=zhi[xi];  //����� 
			si++;  //���±�����Լ� 
		} 
	}
	cout<<ans<<endl;  //����� 
	return 0;
} 

