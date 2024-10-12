#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<string>
using namespace std;

//������ϵ�˽ṹ��
struct man
{
	//��ϵ������
	string name;

	//��ϵ�˵绰
	string tel;

	//��ϵ������
	string age;

	//��¼�ṹ���д洢����ϵ������
	int size = 0;

};

//���������ϵ�˺���
void add(man* arr)
{
	cout << "������������" << endl;
	cin >> arr[arr->size].name;

	cout << "���������䣺" << endl;
	cin >> arr[arr->size].age;

	cout << "������绰���룺" << endl;
	cin >> arr[arr->size].tel;

	arr->size++;
	system("pause");
	system("cls");
	
}

//������ʾ��ϵ�˺���
void show(man* arr)
{
	if (arr->size==0)
	{
		cout << "û����" << endl;
	}
	else
	{
		for (int i = 0; i < arr->size; i++)
		{
			cout << "������" << arr[i].name << "\t"
				<< "���䣺" << arr[i].age << "\t"
				<< "�绰�ţ�" << arr[i].tel << endl;
		}
	}
	
	system("pause");
	system("cls");
}

//������ϵ�����ڵ�λ��
int intserch(man* arr)
{
	string temp;
	cin >> temp;
	for (int i = 0; i < arr->size; i++)
	{
		//cout << arr->size;
		if (temp == arr[i].name)
		{
			return i;
		}
	}
	return -1;
}

//������ϵ��
void serch(man* arr)
{	
	int a;
	cout << "��������ҵ���ϵ������" << endl;	
	a = intserch(arr);

	if (a == -1)
	{
		cout << "���޴���" << endl;
		system("pause");
		system("cls");
	}
	else
	{
		cout << "������" << arr[a].name << "\t"
			<< "���䣺" << arr[a].age << "\t"
			<< "�绰�ţ�" << arr[a].tel << endl;
		system("pause");
		system("cls");
	}



}

//ɾ����ϵ��
void del(man* arr)
{
	cout << "��������Ҫɾ������ϵ�˵�����:" << endl;
	int b = intserch(arr);

	if (b == -1)
	{
		cout << "���޴���" << endl;
	}
	else
	{
		for (int i = b; i < arr->size - 1; i++)
		{
			arr[i] = arr[i + 1];
		}
	}
	arr->size--;
	system("pause");
	system("cls");
}

//�޸���ϵ��
void reinput(man* arr)
{
	cout << "��������Ҫ�޸ĵ���ϵ�˵�����:" << endl;
	int a = intserch(arr);
	if (a==-1)
	{
		cout << "���޴���" << endl;
	}
	else
	{
		cout << "ԭ��Ϣ��" << endl;
		cout << "������" << arr[a].name << "\t"
			 << "���䣺" << arr[a].age << "\t"
			 << "�绰�ţ�" << arr[a].tel << endl;
		//�޸�
		cout << "�������µ�������" << endl;
		cin >> arr[a].name;

		cout << "�������µ����䣺" << endl;
		cin >> arr[a].age;

		cout << "�������µĵ绰���룺" << endl;
		cin >> arr[a].tel;
	}
	system("pause");
	system("cls");
}

//�����ϵ��
void alldel(man* arr)
{
	arr->size = 0;
	cout << "������� �ڴ�������һ��ʹ��" << endl;
	system("pause");
	system("cls");
}

//������ ʵ��ͨѶ¼������
int main(void)
{
	man arry[100];

	while (true)
	{
		cout << "****************************" << endl;
		cout << "****** 1�������ϵ�� *******" << endl;
		cout << "****** 2����ʾ��ϵ�� *******" << endl;
		cout << "****** 3��ɾ����ϵ�� *******" << endl;
		cout << "****** 4��������ϵ�� *******" << endl;
		cout << "****** 5���޸���ϵ�� *******" << endl;
		cout << "****** 6�������ϵ�� *******" << endl;
		cout << "****** 0���˳���ϵ�� *******" << endl;
		cout << "****************************" << endl;
		cout << "----------------------------" << endl;
		cout << endl;
		int a;
		cin >> a;

		switch (a)
		{
		//�����ϵ��
		case 1:
			add(arry);
			break;
		//��ʾ��ϵ��
		case 2:
			show(arry);
			break;
		//ɾ����ϵ��
		case 3:
			del(arry);
			break;
		//������ϵ��
		case 4:
			serch(arry);
			break;
		//�޸���ϵ��
		case 5:
			reinput(arry);
			break;
		case 6:
		//���ͨѶ¼
			alldel(arry);
			break;
		//�˳�����
		case 0:
			cout << "��л����ʹ�ã��´��ټ�" << endl;
			system("pause");
			return 0;
		//ѭ��
		default:
			cout << "������� δ�ҵ��ù���" << endl;
			system("pause");
			break;
		}
		system("cls");
	}
	system("pause");
	return 0;
}
