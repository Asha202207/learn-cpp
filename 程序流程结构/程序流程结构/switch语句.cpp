/*#include<iostream>
using namespace std;

int main()
{

	//switch���
	//����Ӱ���
	//10 ~ 9  ����
	//8 ~ 7   �ǳ���
	//6 ~ 5   һ��
	//5����   ��Ƭ

	//1����ʾ�û�����Ӱ����
	cout << "�����Ӱ���" << endl;
	//2���û���ʼ���
	int score = 0;
	cin >> score;
	cout << "����ķ���Ϊ��" << score << endl;
	//3�������û��������ʾ�û����Ľ��
	switch (score)
	{
	case 10:
		cout << "����Ϊ�Ǿ����Ӱ" << endl;
		break;//�˳���ǰ��֧
	case 9:
		cout << "����Ϊ�Ǿ����Ӱ" << endl;
		break;
	case 8:
		cout << "����Ϊ��Ӱ�ǳ���" << endl;
		break;
	case 7:
		cout << "����Ϊ��Ӱ�ǳ���" << endl;
		break;
	case 6:
		cout << "����Ϊ��Ӱһ��" << endl;
		break;
	case 5:
		cout << "����Ϊ��Ӱһ��" << endl;
		break;
	default:
		cout << "����Ϊ������Ƭ" << endl;
	}

	//if��switch����
	//switch ȱ�㣬�ж�ʱ��ֻ�������ͻ����ַ��ͣ�������������
	//switch �ŵ㣬�ṹ������ִ��Ч�ʸ�
	system("pause");

	return 0;
}*/


/*#include<iostream>
#include<ctime>//timeϵͳʱ��ͷ�ļ�
using namespace std;

int main()
{
	//������������ �������õ�ǰϵͳʱ���������������ֹÿ���������һ��
	srand((unsigned int)time(NULL));
	//1��ϵͳ���������
	int num = rand() % 100 + 1;//rand()%100 + 1 ����0 + 1~99 + 1�������
	cout << num << endl;
	//2����ҽ��в²�
	int val = 0;//������������
	int a = 5;
	while (a > 0)//
	{
		cin >> val;

		//3���ж���ҵĲ²� 
		

			if (val > num)
			{
				cout << "�²����" << endl; 
			}
			else if (val < num)
			{
				cout << "�²��С" << endl;
			}


			else
			{
				cout << "��ϲ�����¶���" << endl;
				break;//�¶ԣ��˳�ѭ�����������øùؼ����˳�ѭ��
			}
		a--;
		cout << "����ʣ�������" << a << "��" << endl;
		if (a == 0)
		{
			cout << "���ź�����ʧ����" << endl;
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
//	//1���ȴ�ӡ������λ����
//	//2����������λ�������ҵ�ˮ�ɻ���
//	int num = 100;
//
//	do
//	{
//		int a = 0;//��λ
//		int b = 0;//ʮλ
//		int c = 0;//��λ
//
//		a = num % 10;//��ȡ���ָ�λ
//		b = num / 10 % 10;//��ȡ����ʮλ
//		c = num / 100;//��ȡ���ְ�λ
//
//		if (a*a*a+b*b*b+c*c*c==num)
//		{ //�����ˮ�ɻ������Ŵ�ӡ
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
//	//����Ƕ��ѭ��ʵ����ͼ
//	//��ӡһ����ͼ
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
//	//�˷��ھ���
//	//��ӡ����
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