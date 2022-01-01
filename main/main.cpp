#include <iostream>
using namespace std;


//	双冒号作用域运算符
int atk = 1000;
void test01() {
	int atk = 2000;
	cout << "局部变量作用域:" << atk << endl;
	//  ::作用域运算符 当::前面没有作用域情况下，默认使用全局作用域
	cout << "全局变量作用域:" << ::atk << endl;
}


//	namespace命名空间
#include "game1.h"
void test02(){
	goAtk();
}



int main() {

	test01();	//双冒号作用域运算符
	test02();	//namespace命名空间
	
	return 0;
}