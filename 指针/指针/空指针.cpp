//#include<iostream>
//using namespace std;
//
//int main()
//{
//	//空指针
//	//1、空指针用于给指针变量进行初始化
//	int* p = NULL;
//
//	//2、空指针是不可以进行访问的
//	//0~255之间的内存编号是系统占用的，因此不可以访问
//	//cout << *p << endl;
//	*p = 100;
//	cout << *p << endl;
//
//	//野指针
//	int* p = (int*)0x1100;
//	//访问野指针报错
//	//空指针和野指针都不是我们申请的空间，因此不要访问
//	cout << *p << endl;
//	system("pause");
//
//	return 0;
//}