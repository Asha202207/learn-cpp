/*#include<iostream>
using namespace std;

//ð�������� ����1  ������׵�ַ  ����2  ���鳤��
void bubblesort(int*arr,int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - i - 1; j++)
		{
			//���j>j+1��ֵ  ��������
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}
//��ӡ����
void printArray(int* arr, int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << endl;
	}
}
int main()
{
	//1���ȴ���һ������
	int arr[10] = { 4,3,6,9,1,2,10,8,7,5 };
	int len = sizeof(arr) / sizeof(arr[0]);
	//2������һ������ʵ��ð������
	bubblesort(arr, len);
	//3����ӡ����������
	printArray(arr,len);
	system("pause");

	return 0;
}*/

#include<iostream>
using namespace std;

int main()
{

	for (int i = 1; i <= 9; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << i << "*" << j << "=" << i * j << " ";
			
		}
		cout << endl;
	}
	
	system("pause");

		return 0;
}