//#include<iostream>
//using namespace std;
//
//int main()
//{
//	//数组
//
//	/*
//	1、数据类型 数组名[数组长度]
//	2、数据类型 数组名[数组长度] = {值1，值2...}
//	3、数据类型 数组名[] = {值1，值2...}
//	*/
//
//	//1、数据类型 数组名[数组长度]
//	int arr[5];
//	//给数组中的元素进行赋值
//	//数组元素下标是从0开始索引的
//	arr[0] = 10;
//	arr[1] = 20;
//	arr[2] = 30;
//	arr[3] = 40;
//	arr[4] = 50;
//	//访问数组元素
//	cout << arr[0] << endl;
//	cout << arr[1] << endl;
//	cout << arr[2] << endl;
//	cout << arr[3] << endl;
//	cout << arr[4] << endl;
//
//	//2、数据类型 数组名[数组长度] = { 值1，值2... }
//	//如果在初始化数据时候，没有全部填写完，会用0来填补这种数
//	int arr2[5] = { 10,20,30,};
//	/*cout << arr2[0] << endl;
//	cout << arr2[1] << endl;
//	cout << arr2[2] << endl;
//	cout << arr2[3] << endl;
//	cout << arr2[4] << endl;*/
//	//利用循环 输出数组中的元素
//	/*for (int i = 0; i < 5; i++)
//	{
//		cout << arr2[i] << endl;
//	}*/
//
//	//3、数据类型 数组名[] = { 值1，值2... }
//	//定义数组的时候，必须有初始长度
//	int arr3[] = { 90,80,70,60,50,40,30,20,10 };
//	for (int i = 0; i < 9; i++)
//	{
//		cout << arr3[i] << endl;
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
//	//数组名用途
//	//1、可以通过数组名统计整个数组占用内存大小
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	cout << "整个数组占用内存空间为：" << sizeof(arr) << endl;
//	cout << "每个元素占用内存空间为：" << sizeof(arr[0]) << endl;
//	cout << "数组中元素的个数为：" << sizeof(arr)/sizeof(arr[0]) << endl;
//	//2、可以通过数组名查看数组首地址
//	cout << "数组的首地址为：" << (int)arr << endl;
//	cout << "数组中第一个元素的首地址为：" << (int)&arr[0] << endl;
//	cout << "数组中第二个元素的首地址为：" << (int)&arr[1] << endl;
//
//	//数组名是常量，不可以进行赋值的操作
//	//arr = 9;//错误
//	system("pause");
//
//	return 0;
//}


//#include<iostream>
//using namespace std;
//
//int main()
//{
//	//1、创建5只小猪体重的数组
//	int arr[5] = { 300,350,200,400,250 };
//	//2、从数组中找到最大值
//	int max = 0;
//	for (int i = 0; i < 5; i++)
//	{
//		//cout << arr[i] << endl;
//		//如果访问的数组中的元素比我认定的最大值还大，更新最大值
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//
//	//3、打印最大值
//	cout << "最重的小猪体重为：" << max << endl;
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
//	//实现数组元素设置
//
//	//1、创建数组
//	int arr[5] = { 1,3,2,5,4 };
//	cout << "数组逆置前：" << endl;
//	for (int i = 0; i < 5; i++)
//	{
//		cout << arr[i] << endl;
//	}
//	//2、实现逆置
//	//2.1记录起始下标的位置
//	//2.2记录结束下标的位置
//	//2.3起始下标与结束下标的元素互换
//	//2.4起始位置++ 结束位置--
//	//2.5循环执行2.1操作，直到起始位置>=结束位置
//	int start = 0;
//	int end = (sizeof(arr) / sizeof(arr[0]) - 1);//结束下标
//	while (start < end)
//	{
//		//实现元素互换
//		int temp = arr[start];
//		arr[start] = arr[end];
//		arr[end] = temp;
//		//下标更新
//		start++;
//		end--;
//	}
//    //3、打印逆置后的数组
//	cout << "数组元素逆置后：" << endl;
//	for (int i = 0; i < 5; i++)
//	{
//		cout << arr[i] << endl;
//	}
//
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
//	//利用冒泡排序实现升序序列
//	int arr[9] = { 4,2,8,0,5,7,1,3,9 };
//
//	cout << "排序前：" << endl;
//	for (int i = 0; i < 9; i++)
//	{
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//	//开始冒泡排序
//	//总共排序的论述为元素个数 - 1
//	for (int i = 0; i < 9 - 1; i++)
//	{
//		//内层循环对比 次数 = 元素个数 - 当前轮数 - 1
//		for (int j = 0; j < 9 - i - 1; j++)
//		{
//			//如果第一个数字比第二个数字大，实现交换这两个数字
//			if (arr[j] > arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//	//排序后结果
//	cout << "排序后：" << endl;
//	for (int i = 0; i < 9; i++)
//	{
//		cout << arr[i] <<" ";
//	}
//	cout << endl;
//	system("pause");
//
//	return 0;
//}