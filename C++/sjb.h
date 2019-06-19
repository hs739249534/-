#pragma once
#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;
class sjb
{
	int a,b,c;//a用来表示计算机随机，b表示用户输入，c来控制游戏
	int w,e,l;//分别用来记录赢，平，输的局数
	int s,j,bu;//分别用来记录用户出石头剪刀布的次数
public:
	sjb(void);
	~sjb(void);
	void play();
	void suiji();
	void youhua();
};

