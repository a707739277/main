#include <iostream>
using namespace std;


//	˫ð�������������
int atk = 1000;
void test01() {
	int atk = 2000;
	cout << "�ֲ�����������:" << atk << endl;
	//  ::����������� ��::ǰ��û������������£�Ĭ��ʹ��ȫ��������
	cout << "ȫ�ֱ���������:" << ::atk << endl;
}


//	namespace�����ռ�
#include "game1.h"
void test02(){
	goAtk();
}



int main() {

	test01();	//˫ð�������������
	test02();	//namespace�����ռ�
	
	return 0;
}