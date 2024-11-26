// 4.15 pointer.cpp.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

int main()
{
	using namespace std;
	int updates = 6;
	int* p_updates;
	p_updates = &updates;
	cout << "valuesupdates    " << updates << endl;
	cout << "*p_updates" << *p_updates << endl;
	cout << &updates << endl;
	cout << p_updates << endl;
	*p_updates = *p_updates + 1;
	cout << updates << endl;


   
}

