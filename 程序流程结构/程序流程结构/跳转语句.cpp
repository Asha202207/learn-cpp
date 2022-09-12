//#include<iostream>
//using namespace std;
//
//int main()
//{
//	//break的使用时机
//	//1、出现在switch语句中
//	//cout << "请选择副本难度" << endl;
//	//cout << "1、普通" << endl;
//	//cout << "2、中等" << endl;
//	//cout << "3、困难" << endl;
//
//	//int select = 0;//创建选择结果的变量
//	//cin >> select;//等待用户输入
//	//switch (select)
//	//{
//	//case 1:
//	//	cout << "您选择的是普通难度" << endl;
//	//	break;//退出switch语句
//	//case 2:
//	//	cout << "您选择的是中等难度" << endl;
//	//	break;
//	//case 3:
//	//	cout << "您选择的是困难难度" << endl;
//	//	break;
//	//default:
//	//	break;
//	//}
//
//	//2、出现在循环语句中
//	for (int i = 0; i < 10; i++)
//	{
//		for (int j = 0; j < 10; j++)
//		{
//			if (j == 5)
//			{
//				break;//退出循环
//			}
//			cout << "* " ;
//		}
//		cout << endl;
//	}
//	system("pause");
//
//	return 0;
//}


//#include<iostream>
//using namespace std;
//
//int main()
//{
//
//	//continue语句
//	for (int i = 0; i <= 100; i++)
//	{
//		//如果是奇数输出，偶数不输出
//		if (i % 2 == 0)//0 2 4 6 8 10
//		{
//			continue;//可以筛选条件，执行到此就不在向下执行，执行下一次循环
//		}
//		cout << i << endl;
//	}
//	system("pause");
//
//	return 0;
//}


#include<iostream>
using namespace std;

int main()
{
	// goto语句  标记后，执行到goto语句时，会跳转到标记的位置
	cout << "1、xxxx" << endl;
	cout << "2、xxxx" << endl;
	goto FLAG;//goto标记
	cout << "3、xxxx" << endl;
	cout << "4、xxxx" << endl;
    FLAG://标记
	cout << "5、xxxx" << endl;
	system("pause");

	return 0;
}  