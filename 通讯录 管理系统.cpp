#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<string>
using namespace std;

//创建联系人结构体
struct man
{
	//联系人姓名
	string name;

	//联系人电话
	string tel;

	//联系人年龄
	string age;

	//记录结构体中存储的联系人数量
	int size = 0;

};

//创建添加联系人函数
void add(man* arr)
{
	cout << "请输入姓名：" << endl;
	cin >> arr[arr->size].name;

	cout << "请输入年龄：" << endl;
	cin >> arr[arr->size].age;

	cout << "请输入电话号码：" << endl;
	cin >> arr[arr->size].tel;

	arr->size++;
	system("pause");
	system("cls");
	
}

//创建显示联系人函数
void show(man* arr)
{
	if (arr->size==0)
	{
		cout << "没人呢" << endl;
	}
	else
	{
		for (int i = 0; i < arr->size; i++)
		{
			cout << "姓名：" << arr[i].name << "\t"
				<< "年龄：" << arr[i].age << "\t"
				<< "电话号：" << arr[i].tel << endl;
		}
	}
	
	system("pause");
	system("cls");
}

//查找联系人所在的位置
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

//查找联系人
void serch(man* arr)
{	
	int a;
	cout << "请输入查找的联系人名字" << endl;	
	a = intserch(arr);

	if (a == -1)
	{
		cout << "查无此人" << endl;
		system("pause");
		system("cls");
	}
	else
	{
		cout << "姓名：" << arr[a].name << "\t"
			<< "年龄：" << arr[a].age << "\t"
			<< "电话号：" << arr[a].tel << endl;
		system("pause");
		system("cls");
	}



}

//删除联系人
void del(man* arr)
{
	cout << "请输入你要删除的联系人的名字:" << endl;
	int b = intserch(arr);

	if (b == -1)
	{
		cout << "查无此人" << endl;
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

//修改联系人
void reinput(man* arr)
{
	cout << "请输入你要修改的联系人的名字:" << endl;
	int a = intserch(arr);
	if (a==-1)
	{
		cout << "查无此人" << endl;
	}
	else
	{
		cout << "原信息：" << endl;
		cout << "姓名：" << arr[a].name << "\t"
			 << "年龄：" << arr[a].age << "\t"
			 << "电话号：" << arr[a].tel << endl;
		//修改
		cout << "请输入新的姓名：" << endl;
		cin >> arr[a].name;

		cout << "请输入新的年龄：" << endl;
		cin >> arr[a].age;

		cout << "请输入新的电话号码：" << endl;
		cin >> arr[a].tel;
	}
	system("pause");
	system("cls");
}

//清空联系人
void alldel(man* arr)
{
	arr->size = 0;
	cout << "清理完毕 期待您的下一次使用" << endl;
	system("pause");
	system("cls");
}

//主函数 实现通讯录管理功能
int main(void)
{
	man arry[100];

	while (true)
	{
		cout << "****************************" << endl;
		cout << "****** 1、添加联系人 *******" << endl;
		cout << "****** 2、显示联系人 *******" << endl;
		cout << "****** 3、删除联系人 *******" << endl;
		cout << "****** 4、查找联系人 *******" << endl;
		cout << "****** 5、修改联系人 *******" << endl;
		cout << "****** 6、清空联系人 *******" << endl;
		cout << "****** 0、退出联系人 *******" << endl;
		cout << "****************************" << endl;
		cout << "----------------------------" << endl;
		cout << endl;
		int a;
		cin >> a;

		switch (a)
		{
		//添加联系人
		case 1:
			add(arry);
			break;
		//显示联系人
		case 2:
			show(arry);
			break;
		//删除联系人
		case 3:
			del(arry);
			break;
		//查找联系人
		case 4:
			serch(arry);
			break;
		//修改联系人
		case 5:
			reinput(arry);
			break;
		case 6:
		//清除通讯录
			alldel(arry);
			break;
		//退出程序
		case 0:
			cout << "感谢您的使用，下次再见" << endl;
			system("pause");
			return 0;
		//循环
		default:
			cout << "输入错误 未找到该功能" << endl;
			system("pause");
			break;
		}
		system("cls");
	}
	system("pause");
	return 0;
}
