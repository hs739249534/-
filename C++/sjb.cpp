#include "sjb.h"

sjb::sjb(void)
{
	w=0;e=0;l=0;
	s=j=bu=0;
}

sjb::~sjb(void)
{
}

void sjb::suiji()
{
		if(a==1)//计算机出石头
		{
			if(b>=1 && b<=3)
			{
				cout<<"计算机出的是：石头！\n";
				if(b==1)
				{
					cout<<"您出的是：石头\n";
					cout<<"平局！"<<endl;
					e++;s++;
				}
				if(b==2)
				{
					cout<<"您出的是：剪刀\n";
					cout<<"您输了！"<<endl;
					l++;j++;
				}
				if(b==3)
				{
					cout<<"您出的是：布\n";
					cout<<"您赢了！"<<endl;
					w++;bu++;
				}
			}
			else cout<<"输入错误！\n";
			
		}
		if(a==2)//计算机出剪刀
		{
			if(b>0 && b<4)
			{
				cout<<"计算机出的是：剪刀！\n";
				if(b==1)
				{
					cout<<"您出的是：石头\n";
					cout<<"您赢了！"<<endl;
					w++;s++;
				}
				if(b==2)
				{
					cout<<"您出的是：剪刀\n";
					cout<<"平局！"<<endl;
					e++;j++;
				}
				if(b==3)
				{
					cout<<"您出的是：布\n";
					cout<<"您输了！"<<endl;
					l++;bu++;
				}
			}
			else cout<<"输入错误！\n";
			
		}

		if(a==3)//计算机出布
		{
			if(b>0 && b<4)
			{
				cout<<"计算机出的是：布！\n";
				if(b==1)
				{
					cout<<"您出的是：石头\n";
					cout<<"您输了！"<<endl;
					l++;s++;
				}
				if(b==2)
				{
					cout<<"您出的是：剪刀\n";
					cout<<"您赢了！"<<endl;
					w++;j++;
				}
				if(b==3)
				{
					cout<<"您出的是：布\n";
					cout<<"平局！"<<endl;
					e++;bu++;
				}
			}
			else cout<<"输入错误！\n";
			
		}

}

void sjb::youhua()
{
	if(b==1)
	{
		cout<<"您出的是：石头\n";
		s++;
	}
	if(b==2)
	{
		cout<<"您出的是：剪刀\n";
		j++;
	}
	if(b==3)
	{
		cout<<"您出的是：布\n";
		bu++;
	}

	if(s>=j && s>=b) 
	{
		a=3;
		cout<<"计算机出的是：布！\n";
	}
	else if(j>=s && j>=b) 
	{
		a=1;
		cout<<"计算机出的是：石头！\n";
	}
	else if(b>=s && b>=j) 
	{
		a=2;
		cout<<"计算机出的是：剪刀！\n";
	}

	if(a==b) 
	{
		cout<<"平局！"<<endl;
		e++;
	}
	if((a==1&&b==3)||(a==2&&b==1)||(a==3&&b==2))
	{
		cout<<"您赢了！"<<endl;
		w++;
	}
	if((a==1&&b==2)||(a==2&&b==3)||(a==3&&b==1))
	{
		cout<<"您输了！"<<endl;
		l++;
	}
}

void sjb::play()
{
	cout<<"欢迎来到猜拳游戏!\n";
	cout<<"是否进入游戏？\n1:进入  0:退出"<<endl;
	cin>>c;
	
	if(c!=1 && c!=0) cout<<"输入错误！\n";
	while (c==1)
	{ 
		srand((unsigned)time(NULL));
		a=1+rand()%3;
		cout<<"游戏开始，请出手吧！"<<endl;
		cout<<"游戏设定：1:石头  2:剪子  3:布 "<<endl;
	    cin>>b;

		youhua();

		cout<<"您到现在为止已经玩了"<<(w+e+l)<<"局"<<endl;
		cout<<"赢了："<<w<<"局"<<endl;
		cout<<"输了："<<l<<"局"<<endl;
		cout<<"平了："<<e<<"局"<<endl;
		cout<<"是否继续该游戏？   1:继续  0:退出"<<endl;
		cin>>c;
		if(c!=1 && c!=0) cout<<"输入错误！\n";
	}
}