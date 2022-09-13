//-��װ������ʾ�ý��� �� void showMenu()
//-��main�����е��÷�װ�õĺ���

#include<iostream>
using namespace std;
#include<string>
#define MAX 1000

//�����ϵ�˵Ľṹ��
struct Person
{
	//����
	string m_Name;
	//�Ա�    1��  2Ů
	int m_Sex;
	//����
	int m_Age;
	//�绰
	string m_phone;
	//סַ
	string m_Addr;
};
//���ͨѶ¼�Ľṹ��
struct Addressbooks
{
	//ͨѶ¼�б������ϵ������
	struct Person personArray[MAX];
	//ͨѶ¼�е�ǰ��¼��ϵ�˸���
	int m_Size;
};

//1�������ϵ��
void addPerson(Addressbooks* abs)
{
	//�ж�ͨѶ¼�Ƿ�������������˾Ͳ������
	if (abs->m_Size == MAX)
	{
		cout << "ͨѶ¼�������޷���ӣ�" << endl;
		return;
	}
	else
	{
		//��Ӿ�����ϵ��

		//����
		string name;
		cout << "����������" << endl;
		cin >> name;
		abs->personArray[abs->m_Size].m_Name = name;
		//�Ա�
		cout << "�������Ա�" << endl;
		cout << "1 --- ��" << endl;
		cout << "2 --- Ů" << endl;
		while (true)
		{
			int sex = 0;
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->personArray[abs->m_Size].m_Sex = sex;
				break;
			}
			cout << "������������������" << endl;
		}
		//����
		int age;
		cout << "����������" << endl;
		cin >> age;
		abs->personArray[abs->m_Size].m_Age = age;
		//�绰
		cout << "��������ϵ�绰" << endl;
		string phone;
		cin >> phone;
		abs->personArray[abs->m_Size].m_phone = phone;
		//סַ
		cout << "�������ͥסַ" << endl;
		string address;
		cin >> address;
		abs->personArray[abs->m_Size].m_Addr = address;
		//����ͨѶ¼
		abs->m_Size++;
		cout << "��ӳɹ�" << endl;
		
		system("pause"); //�밴���������
		system("cls"); //����
	}
}

//2����ʾ������ϵ��
void showPerson(Addressbooks* abs)
{
	//�ж�ͨѶ¼�������Ƿ�Ϊ0�����Ϊ0����ʾ��¼Ϊ��
	//�����Ϊ0����ʾ��¼����ϵ����Ϣ
	if (abs->m_Size == 0)
	{
		cout << "��ǰ��¼Ϊ��" << endl;
	}
	else
	{
		for (int i = 0; i < abs->m_Size; i++)
		{
			cout << "������" << abs->personArray[i].m_Name << "\t";
			cout << "�Ա�" << (abs->personArray[i].m_Sex == 1 ? "��" : "Ů") << "\t";
			cout << "���䣺" << abs->personArray[i].m_Age << "\t";
			cout << "��ϵ�绰��" << abs->personArray[i].m_phone << "\t";
			cout << "��ͥסַ��" << abs->personArray[i].m_Addr << endl;
		}
	}

	system("pause"); //�����������
	system("cls"); //����
}

//�����ϵ���Ƿ���ڣ�������ڣ�������ϵ�����������еľ���λ�ã������ڷ���-1
//����1 ͨѶ¼ ����2 �Ա�����
int isExist(Addressbooks* abs, string name)
{
	for (int i = 0; i < abs->m_Size; i++)
	{
		//�ҵ��û������������
		if (abs->personArray[i].m_Name == name)
		{
			return i;  //�ҵ��ˣ�����������������±���
		}
	}
	return -1; //�������������û���ҵ�������-1

}

//3��ɾ��ָ������ϵ��
void deletePerson(Addressbooks* abs)
{
	cout << "��������Ҫɾ������ϵ��" << endl;
	string name;
	cin >> name;
	//ret == -1  δ�鵽
	//ret != -1  �鵽��
	int ret = isExist(abs, name);
	if (ret != -1)
	{
		 //���ҵ����ˣ�Ҫ����ɾ������
		for (int i = ret; i < abs->m_Size; i++)
		{
			//����ǰ��
			abs->personArray[i] = abs->personArray[i + 1];
		}
		abs->m_Size--;//����ͨѶ¼�е���Ա��
		cout << "ɾ���ɹ�" << endl;
	}
	else
	{
		cout << "���޴���" << endl;
	}
	system("pause");
	system("cls");
}

//4������ָ������ϵ����Ϣ
void findPerson(Addressbooks* abs)
{
	cout << "��������Ҫ���ҵ���ϵ��" << endl;
	string name;
	cin >> name;
	//�ж�ָ������ϵ���Ƿ����ͨѶ¼��
	int ret = isExist(abs, name);
	if (ret != -1) //�ҵ���ϵ��
	{
		cout << "������" << abs->personArray[ret].m_Name << "\t";
		cout << "�Ա�" << abs->personArray[ret].m_Sex << "\t";
		cout << "���䣺" << abs->personArray[ret].m_Age << "\t";
		cout << "�绰���룺" << abs->personArray[ret].m_phone << "\t";
		cout << "��ͥסַ��" << abs->personArray[ret].m_Addr << "\t";
	}
	else //δ�ҵ���ϵ��
	{
		cout << "���޴���" << endl;
	}
	system("pause");
	system("cls");
}

//5���޸�ָ������ϵ����Ϣ
void modifyPerson(Addressbooks* abs)
{
	cout << "��������Ҫ�޸ĵ���ϵ��" << endl;
	string name;
	cin >> name;
	int ret = isExist(abs, name);
	if (ret != -1) //�ҵ�ָ����ϵ��
	{
		//����
		string name;
		cout << "������������" << endl;
		cin >> name;
		abs->personArray[ret].m_Name = name;
		//�Ա�
		cout << "�������Ա�" << endl; 
		cout << "1 --- �У�" << endl;
		cout << "2 --- Ů��" << endl;
		while (true)
		{
			int sex = 0;
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->personArray[ret].m_Sex = sex;
				break;
			}
			cout << "������������������" << endl;
		}
		//����
		int age = 0;
		cout << "���������䣺" << endl;
		cin >> age;
		abs->personArray[ret].m_Age = age;
		//�绰����
		string phone;
		cout << "������绰���룺" << endl;
		cin >> phone;
		abs->personArray[ret].m_phone = phone;
		//��ͥסַ
		string address;
		cout << "�������ͥסַ��" << endl;
		cin >> address;
		abs->personArray[ret].m_Addr = address;

		cout << "�޸ĳɹ�" << endl;
	}
	else
	{
		cout << "���޴���" << endl;
	}
	system("pause");
	system("cls");
}

//6��������е���ϵ��
void clearPerson(Addressbooks* abs)
{
	cout << "���Ƿ�Ҫ���" << endl;
	cout << "1 --- ȷ����գ�" << endl;
	cout << "2 --- ����գ�" << endl;
	while (true)
	{
		int a = 0;
		cin >> a;
		if (a == 1)
		{
			abs->m_Size = 0; //����ǰ��¼��ϵ��������Ϊ0�����߼���ղ���
			cout << "ͨѶ¼�����" << endl;
			break;
		}
		else if (a == 2)
		{
			cout << "��ѡ����ͣ�����������" << endl;
			break;
		}
		cout << "������������������" << endl;
	}
	system("pause");
	system("cls");
}

//�˵�����
void showMenu()
{
	cout << "***************************" << endl;
	cout << "*****  1�������ϵ��  *****" << endl;
	cout << "*****  2����ʾ��ϵ��  *****" << endl;
	cout << "*****  3��ɾ����ϵ��  *****" << endl;
	cout << "*****  4��������ϵ��  *****" << endl;
	cout << "*****  5���޸���ϵ��  *****" << endl;
	cout << "*****  6�������ϵ��  *****" << endl;
	cout << "*****  0���˳�ͨѶ¼  *****" << endl;
	cout << "***************************" << endl;
}

int main()
{
	//����ͨѶ¼�ṹ�����
	Addressbooks abs;
	//��ʼ��ͨѶ¼�е�ǰ��Ա����
	abs.m_Size = 0;

	int select = 0;//�����û�ѡ������ı���
	while(true)
	{
		//�˵��ĵ���
		showMenu();

		cin >> select;
		switch (select)
		{
		case 1:  //1�������ϵ��
			addPerson(&abs); //���õ�ַ���ݣ���������ʵ��
			break;
		case 2:  //2����ʾ��ϵ��
			showPerson(&abs);
			break;
		case 3:  //3��ɾ����ϵ��
		/*{
			cout << "������ɾ������ϵ��������" << endl;
			string name;
			cin >> name;
			if (isExist(&abs, name) == -1)
			{
				cout << "���޴���" << endl;
			}
			else
			{
				cout << "�ҵ�����" << endl;
			}
			break;
		}*/
			deletePerson(&abs);
		case 4:  //4��������ϵ��
			findPerson(&abs);
			break;
		case 5:  //5���޸���ϵ��
			modifyPerson(&abs);
			break;
		case 6:  //6�������ϵ��
			clearPerson(&abs);
			break;
		case 0:  //0���˳���ϵ��
			cout << "��ӭ�´�ʹ��" << endl;
			system("pause");
			return 0;
			break;
		default:
			break;
		}
	}
	system("pause");

	return 0;
}