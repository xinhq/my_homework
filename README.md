**1** **实验的目的**

通过用C＋＋编写一个人员信息管理系统，强化模块化程序设计思想，能够将C＋＋程序设计中的结构体、链表、数组、函数及函数重载、文件等各种概念，灵活地运用到实际的程序设计中去。

**2** **实验要求**

具体要求如下：

（1）数据组织方面尽量使用：数组、结构体、链表、文件；

（2）程序结构方面做到模块化。

（3）程序须有一定的健壮性和必要的提示信息，考虑问题的多种可能和边界数据。

综合实验具体完成以下功能：

1）从文件中读取人员的信息存储于链表中；

2）设计查找函数：可按照指定字段查找志愿者信息；

3）设计增加函数：实现增加人员信息功能；

4）设计删除函数：实现删除某条信息功能；

5）设计输出函数能够按照要求将信息写入输出文件中。

6）菜单选项。

**3** **实验原理**

实验使用模块化的程序设计思想，使用数据、结构体、链表、文件进行数据组织，分模块完成各功能。

**4** **实验说明**

人员信息可用结构体存储：

struct person{

int ID;

char Name[20];

int Age;

char Sex;

char Lanuage[10];

double score;

person *next;

};

函数说明：

person * input(const char *fileName);//读取input文件并并创建链表

void input(const char *fileName,person *q);//读取input1文件

void input(const char *fileName,int&num);//读取menu文件或find文件

void output(person *head,const char *fileName);//将链表内容写入文件

person * find(person *head,intno);//查找Id为no的人员，并返回该结点前一结点便于删除函数调用

person* del(person *head,intno);//从链表中删除Id为no的人员，返回链首

person *append(person *head ,person *s);//插入一名人员至链尾，返回链首

主函数中设置菜单选项，1 查找  2 插入  3 删除

不同选项调用各功能函数，所有功能测试结果均需写入文件。

可根据实际情况自定义其他函数。

**注意事项：**

1 输入文件包括四个：input.txt -----存放所有人员信息

menu.txt------存放菜单选项，数字1--3选一 

find.txt------查找人员ID

input1.txt-----插入人员信息

2输出文件一个：out.txt-----调用各函数后的结果均写入该文件

**所有文件的内容如需分隔，用单个空格分隔。**

读取写入文件需包含

\#include <fstream>

using namespace std;

//创建文件流对象

ifstream file;

ofstream file1

file.open("input.txt",ios::in);//读方式打开文件inout.txt

file1.open("out.txt",ios::out);//写方式打开文件out.txt

person *q = new person;

//读取文件内容至q指向的人员结点

while(!file.eof())

{

file>>q->ID>>q->Name>>q->Age>>q->Sex>>q->Lanuage>>q->score;

}

//将q指向的结点信息写入file1文件

｛

file1<<q->ID<<" ";

file1<<q->Name<<" ";

file1<<q->Age<<" ";

file1<<q->Sex<<" ";

file1<<q->Lanuage<<" ";

file1<<q->score<<endl;

｝