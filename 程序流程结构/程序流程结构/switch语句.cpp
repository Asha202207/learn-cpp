/*#include<iostream>
using namespace std;

int main()
{

	//switch语句
	//给电影打分
	//10 ~ 9  经典
	//8 ~ 7   非常好
	//6 ~ 5   一般
	//5以下   烂片

	//1、提示用户给电影评分
	cout << "请给电影打分" << endl;
	//2、用户开始打分
	int score = 0;
	cin >> score;
	cout << "您打的分数为：" << score << endl;
	//3、根据用户打分来提示用户最后的结果
	switch (score)
	{
	case 10:
		cout << "您认为是经典电影" << endl;
		break;//退出当前分支
	case 9:
		cout << "您认为是经典电影" << endl;
		break;
	case 8:
		cout << "您认为电影非常好" << endl;
		break;
	case 7:
		cout << "您认为电影非常好" << endl;
		break;
	case 6:
		cout << "您认为电影一般" << endl;
		break;
	case 5:
		cout << "您认为电影一般" << endl;
		break;
	default:
		cout << "您认为这是烂片" << endl;
	}

	//if和switch区别
	//switch 缺点，判断时候只能是整型或者字符型，不可以是区间
	//switch 优点，结构清晰，执行效率高
	system("pause");

	return 0;
}*/


/*#include<iostream>
#include<ctime>//time系统时间头文件
using namespace std;

int main()
{
	//添加随机数种子 作用利用当前系统时间生成随机数，防止每次随机数都一样
	srand((unsigned int)time(NULL));
	//1、系统生产随机数
	int num = rand() % 100 + 1;//rand()%100 + 1 生成0 + 1~99 + 1的随机数
	cout << num << endl;
	//2、玩家进行猜测
	int val = 0;//玩家输入的数据
	int a = 5;
	while (a > 0)//
	{
		cin >> val;

		//3、判断玩家的猜测 
		

			if (val > num)
			{
				cout << "猜测过大" << endl; 
			}
			else if (val < num)
			{
				cout << "猜测过小" << endl;
			}


			else
			{
				cout << "恭喜您，猜对了" << endl;
				break;//猜对，退出循环，可以利用该关键字退出循环
			}
		a--;
		cout << "您的剩余次数：" << a << "次" << endl;
		if (a == 0)
		{
			cout << "很遗憾，您失败了" << endl;
			break;
			}
		
		
	}
		

	
	
    system("pause");

	return 0;
}*/


//#include<iostream>
//using namespace std;
//
//int main()
//{
//
//	//1、先打印所有三位数字
//	//2、从所有三位数字中找到水仙花数
//	int num = 100;
//
//	do
//	{
//		int a = 0;//个位
//		int b = 0;//十位
//		int c = 0;//百位
//
//		a = num % 10;//获取数字个位
//		b = num / 10 % 10;//获取数字十位
//		c = num / 100;//获取数字百位
//
//		if (a*a*a+b*b*b+c*c*c==num)
//		{ //如果是水仙花数，才打印
//			cout << num << endl;
//		}
//		num++;
//	} while (num < 1000);
//	system("pause");
//
//	return 0;
//}


//#include<iostream>
//using namespace std;
//
//int main()
//{
//	//利用嵌套循环实现星图
//	//打印一行星图
//	/*for (int j = 0; j < 10; j++)
//	{
//		for (int i = 0; i < 10; i++)
//		{
//			cout << "* ";
//		}
//		cout << endl;
//	}*/
//	/*int i = 0;
//		do
//		{
//			i++;
//			cout << "* " ;
//
//		} while (i < 10);*/
//	//乘法口径表
//	//打印行数
//	for (int i = 1; i <= 9; i++)
//	{
//		//cout << i << endl;
//		for (int j = 1; j <= i; j++)
//		{
//			cout << j << "*" << i << "=" << j*i << " ";
//		}
//		cout << endl;
//	}
//	system("pause");
//
//	return 0;
//}