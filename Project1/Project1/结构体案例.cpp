//#include<iostream>
//using namespace std;
//#include<ctime>
//
////ѧ���Ľṹ��
//struct student
//{
//	string sname;
//	int score;
//};
////��ʦ�Ľṹ��
//struct teacher
//{
//	string tname;
//	student sArray[5];
//};
////����ʦ��ѧ����ֵ�ĺ���
//void allocateSpace(teacher tArray[],int len)
//{
//	string nameSeed = "ABCDE";
//	//����ʦ��ʼ��ֵ
//	for (int i = 0; i < len; i++)
//	{
//		tArray[i].tname = "Teacher_";
//		tArray[i].tname += nameSeed[i];
//        //ͨ��ѭ����ÿ����ʦ������ѧ����ֵ
//		for (int j = 0; j < 5; j++)
//		{
//			tArray[i].sArray[j].sname = "Student_";
//			tArray[i].sArray[j].sname += nameSeed[j];
//			int random = rand() % 61 + 40;//40~100
//			tArray[i].sArray[j].score = random;
//		}
//	}
//}
////��ӡ������Ϣ
//void printInfo(teacher tArray[], int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		cout << "��ʦ������" << tArray[i].tname << endl;
//		for (int j = 0; j < 5; j++)
//		{
//			cout << "\tѧ��������" << tArray[i].sArray[j].sname <<
//				" ���Է�����" << tArray[i].sArray[j].score << endl;
//		}
//	}
//}
//int main()
//{
//	//���������
//	srand((unsigned int)time(NULL));
//	//1������������ʦ������
//	struct teacher tArray[3];
//	//2��ͨ��������������ʦ����Ϣ��ֵ��������ʦ����ѧ����Ϣ��ֵ
//	int len = sizeof(tArray) / sizeof(tArray[0]);
//	allocateSpace(tArray, len);
//	//3����ӡ������ʦ������ѧ����Ϣ
//	printInfo(tArray, len);
//	system("pause");
//
//	return 0;
//}

#include<iostream>
using namespace std;
#include<string>
//1�����Ӣ�۵Ľṹ��
struct hero
{
	string name;
	int age;
	string sex;
};
//ð������ ʵ���������������
void bubbleSort(hero heroArray[], int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - i - 1; j++)
		{
			//���j �±��Ԫ������ ���� j+1�±��Ԫ�����䣬��������Ԫ��
			if (heroArray[j].age > heroArray[j + 1].age)
			{
				hero temp = heroArray[j];
				heroArray[j] = heroArray[j + 1];
				heroArray[j + 1] = temp;
			}
		}
	}
}
//��ӡ����������е���Ϣ
void printHero(hero heroArray[], int len)
{
	cout << "������ӡ��" << endl;
	for (int i = 0; i < len; i++)
	{
		cout << "Ӣ�۵�������" << heroArray[i].name << "���䣺" << heroArray[i].age << "�Ա�" << heroArray[i].sex << endl;
	}
}
int main()
{
	//2������һ�����飬���5��Ӣ��
	hero heroArray[5] =
	{
		{"����",23,"��"},
		{"����",22,"��"},
		{"�ŷ�",20,"��"},
		{"����",21,"��"},
		{"����",19,"Ů"},
	};
	int len = sizeof(heroArray) / sizeof(heroArray[0]);
	cout << "����ǰ��ӡ��" << endl;
	for (int i = 0; i < len; i++)
	{
	    cout << "Ӣ�۵�������" << heroArray[i].name << "���䣺" << heroArray[i].age << "�Ա�" << heroArray[i].sex << endl;
	}
	//3��������������򣬰�������������
	bubbleSort(heroArray, len);
	//4���������Ľ����ӡ���
	printHero(heroArray, len);
	system("pause");

	return 0;
}