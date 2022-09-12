//#include<iostream>
//using namespace std;
//
//int main()
//{
//
//	//二维数组定义方式
//	/*
//	   1、数据类型 数组名[行数][列数]；
//	   2、数据类型 数组名[行数][列数] = {{数据1，数据2}，{数据3，数据4}}；
//	   3、数据类型 数组名[行数][列数] = {数据1，数据2，数据3，数据4}；
//	   4、数据类型 数组名[ ][列数] = {数据1，数据2，数据3，数据4}；
//	*/
//
//	//1、数据类型 数组名[行数][列数]；
//	int arr[2][3];
//	arr[0][0] = 1;
//	arr[0][1] = 2;
//	arr[0][2] = 3;
//	arr[1][0] = 4;
//	arr[1][1] = 5;
//	arr[1][2] = 6;
//	//外层循环打印行数，外层循环打印列数；
//	/*for (int i = 0; i < 2; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			cout << arr[i][j] << endl;
//		}
//	}*/
//	//2、数据类型 数组名[行数][列数] = { {数据1，数据2}，{数据3，数据4} }；
//	int arr2[2][3] = { {1,2,3},{4,5,6} };
//	/*for (int i = 0; i < 2; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			cout << arr2[i][j] << " ";
//		}
//		cout << endl;
//	}*/
//	//3、数据类型 数组名[行数][列数] = {数据1，数据2，数据3，数据4}；
//	int arr3[2][3] = {1,2,3,4,5,6 };
//	for (int i = 0; i < 2; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			cout << arr3[i][j] << " ";
//		}
//		cout << endl;
//	}
//	//4、数据类型 数组名[ ][列数] = {数据1，数据2，数据3，数据4}；
//	int arr4[ ][3] = { 1,2,3,4,5,6 };//可以不写行数，但必须写列数，系统可以自动计算几行几列
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
//	//二维数组名称用途
//
//	//1、可以查看占用内存空间大小
//	int arr[2][3] =
//	{
//		{1,2,3},
//		{4,5,6}
//	};
//	cout << "二维数组占用内存空间大小：" << sizeof(arr) << endl;
//	cout << "二维数组第一行占用的内存为：" << sizeof(arr[0]) << endl;
//	cout << "二维数组第个元素占用的内存为：" << sizeof(arr[0][0]) << endl;
//
//	cout << "二维数组的行数是多少：" << sizeof(arr) / sizeof(arr[0]) << endl;
//	cout << "二维数组的列数是多少：" << sizeof(arr[0]) / sizeof(arr[0][0]) << endl;
//	//2、可以查看二维数组的首地址
//	cout << "二维数组的首地址为：" << int(arr) << endl;
//	cout << "二维数组第一行的首地址为：" << int(arr[0]) << endl;
//	cout << "二维数组第二行的首地址为：" << int(arr[1]) << endl;
//	cout << "二维数组第一个元素的首地址为：" << (int)&arr[0][0] << endl;
//	cout << "二维数组第二个元素的首地址为：" << (int)&arr[0][1] << endl;
//	system("pause");
//
//	return 0;
//}


#include<iostream>
#include<string>
using namespace std;

int main()
{
	//1、创建二维数组，3行3列
	int score[3][3] =
	{
		{100,100,100},
	    {90,50,100},
	    {60,70,80}
	};
	//创建一维数组存放人名
	string names[3] = { "张三","李四","王五" };
	//2、统计每个人的总和分数
	for (int i = 0; i < 3; i++)
	{
		int sum = 0;
		for (int j = 0; j < 3; j++)
		{
			sum += score[i][j];
			cout << score[i][j] << " ";
		}
		cout << names[i] << "的个人的成绩为：" << sum << endl;
		cout << endl;
	}
	system("pause");

	return 0;
}