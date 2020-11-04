

#include "pch.h"										//这是作业2.34，从若干个5种颜色的球的中选取3个颜色不同的小球
#include <iostream>		
using namespace std;

int times = 0;											//这里定义整型times来表示所有的取法

int main()
{														//这里用嵌套的for语句循环结构来模拟取球的过程
	{
		for (int a = 1; a <= 5; a++)					//这里先从五个颜色的球中选一个颜色作为第一个颜色
			for (int i = 1; i <= 5 - a; i++)			//在选取过a种颜色的球作为第一个球之后只剩下i=（5-a）中颜色的球可选作第二个球
			{

				for (int j = 1; j <= 5 - a - i; j++)	//在选取过（a+i)种颜色作为第一第二个球之后只有j=（5-a-i）种取法
				{
					times++;							//每模拟一次取球过程，取法times就加1

				}
			}
		cout << times;									//这里输出所有的取法times
	}

}