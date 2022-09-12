//#include<iostream>
//using namespace std;
//
//struct student
//{
//	string name;
//	int age;
//	int score;
//};
//void printstudents(const student *s)
//{
//	//s->age = 100; 加入const后，有修改的操作就会报错
//	cout << "姓名：" << s->name << "年龄：" << s->age << "分数：" << s->score << endl;
//}
//int main()
//{
//	//创建结构体变量
//	struct student s = { "张三", 15, 70 };
//	//通过函数打印结构体变量信息
//	printstudents(&s);
//	system("pause");
//
//	return 0;
//}