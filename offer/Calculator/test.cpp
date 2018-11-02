#include "stdc++.h"



class A
{
private :
	int value;
public:
	A(int n) { value = n; }
	A(const	A & other) { value = other.value; }
	void Print() { cout << value << endl; }
};
//int main() {
//	cout << "ÎÒÊÇË­" << endl;
//	system("pause");
//	return 0;
//	
//}