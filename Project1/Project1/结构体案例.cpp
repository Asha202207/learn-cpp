//#include<iostream>
//using namespace std;
//#include<ctime>
//
////学生的结构体
//struct student
//{
//	string sname;
//	int score;
//};
////老师的结构体
//struct teacher
//{
//	string tname;
//	student sArray[5];
//};
////给老师和学生赋值的函数
//void allocateSpace(teacher tArray[],int len)
//{
//	string nameSeed = "ABCDE";
//	//给老师开始赋值
//	for (int i = 0; i < len; i++)
//	{
//		tArray[i].tname = "Teacher_";
//		tArray[i].tname += nameSeed[i];
//        //通过循环给每名老师所带的学生赋值
//		for (int j = 0; j < 5; j++)
//		{
//			tArray[i].sArray[j].sname = "Student_";
//			tArray[i].sArray[j].sname += nameSeed[j];
//			int random = rand() % 61 + 40;//40~100
//			tArray[i].sArray[j].score = random;
//		}
//	}
//}
////打印所有信息
//void printInfo(teacher tArray[], int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		cout << "老师姓名：" << tArray[i].tname << endl;
//		for (int j = 0; j < 5; j++)
//		{
//			cout << "\t学生姓名：" << tArray[i].sArray[j].sname <<
//				" 考试分数：" << tArray[i].sArray[j].score << endl;
//		}
//	}
//}
//int main()
//{
//	//随机数种子
//	srand((unsigned int)time(NULL));
//	//1、创建三名老师的数组
//	struct teacher tArray[3];
//	//2、通过函数给三名老师的信息赋值，并给老师带的学生信息赋值
//	int len = sizeof(tArray) / sizeof(tArray[0]);
//	allocateSpace(tArray, len);
//	//3、打印所有老师及所带学生信息
//	printInfo(tArray, len);
//	system("pause");
//
//	return 0;
//}

#include<iostream>
using namespace std;
#include<string>
//1、设计英雄的结构体
struct hero
{
	string name;
	int age;
	string sex;
};
//冒泡排序 实现年龄的升序排列
void bubbleSort(hero heroArray[], int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - i - 1; j++)
		{
			//如果j 下标的元素年龄 大于 j+1下标的元素年龄，交换两个元素
			if (heroArray[j].age > heroArray[j + 1].age)
			{
				hero temp = heroArray[j];
				heroArray[j] = heroArray[j + 1];
				heroArray[j + 1] = temp;
			}
		}
	}
}
//打印排序后数组中的信息
void printHero(hero heroArray[], int len)
{
	cout << "排序后打印：" << endl;
	for (int i = 0; i < len; i++)
	{
		cout << "英雄的姓名：" << heroArray[i].name << "年龄：" << heroArray[i].age << "性别：" << heroArray[i].sex << endl;
	}
}
int main()
{
	//2、创建一个数组，存放5名英雄
	hero heroArray[5] =
	{
		{"刘备",23,"男"},
		{"关羽",22,"男"},
		{"张飞",20,"男"},
		{"赵云",21,"男"},
		{"貂蝉",19,"女"},
	};
	int len = sizeof(heroArray) / sizeof(heroArray[0]);
	cout << "排序前打印：" << endl;
	for (int i = 0; i < len; i++)
	{
	    cout << "英雄的姓名：" << heroArray[i].name << "年龄：" << heroArray[i].age << "性别：" << heroArray[i].sex << endl;
	}
	//3、对数组进行排序，按年龄升序排序
	bubbleSort(heroArray, len);
	//4、将排序后的结果打印输出
	printHero(heroArray, len);
	system("pause");

	return 0;
}