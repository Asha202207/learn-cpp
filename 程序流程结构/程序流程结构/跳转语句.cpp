//#include<iostream>
//using namespace std;
//
//int main()
//{
//	//break��ʹ��ʱ��
//	//1��������switch�����
//	//cout << "��ѡ�񸱱��Ѷ�" << endl;
//	//cout << "1����ͨ" << endl;
//	//cout << "2���е�" << endl;
//	//cout << "3������" << endl;
//
//	//int select = 0;//����ѡ�����ı���
//	//cin >> select;//�ȴ��û�����
//	//switch (select)
//	//{
//	//case 1:
//	//	cout << "��ѡ�������ͨ�Ѷ�" << endl;
//	//	break;//�˳�switch���
//	//case 2:
//	//	cout << "��ѡ������е��Ѷ�" << endl;
//	//	break;
//	//case 3:
//	//	cout << "��ѡ����������Ѷ�" << endl;
//	//	break;
//	//default:
//	//	break;
//	//}
//
//	//2��������ѭ�������
//	for (int i = 0; i < 10; i++)
//	{
//		for (int j = 0; j < 10; j++)
//		{
//			if (j == 5)
//			{
//				break;//�˳�ѭ��
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
//	//continue���
//	for (int i = 0; i <= 100; i++)
//	{
//		//��������������ż�������
//		if (i % 2 == 0)//0 2 4 6 8 10
//		{
//			continue;//����ɸѡ������ִ�е��˾Ͳ�������ִ�У�ִ����һ��ѭ��
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
	// goto���  ��Ǻ�ִ�е�goto���ʱ������ת����ǵ�λ��
	cout << "1��xxxx" << endl;
	cout << "2��xxxx" << endl;
	goto FLAG;//goto���
	cout << "3��xxxx" << endl;
	cout << "4��xxxx" << endl;
    FLAG://���
	cout << "5��xxxx" << endl;
	system("pause");

	return 0;
}  