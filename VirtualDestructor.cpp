// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
using namespace std;
class A {
public:
	virtual void M1() { cout << "A.M1()" << endl; }
	void M2() { cout << "A.M2()" << endl; }
	A() { cout << "A constructed" << endl; }
	virtual ~A() { cout << "A destructed" << endl; }
};
class B :public A {
public:
	void M1() override { cout << "B.M1()" << endl; }
	void M2() { cout << "B.M2()" << endl; }
	virtual void M3() { cout << "B.M3()" << endl; }
	void M4() { cout << "B.M4" << endl; }
	B() { cout << "B constructed" << endl; }
	~B() { cout << "B destructed" << endl; }
};
class C :public B {
public:
	void M1() { cout << "C.M1()" << endl; }
	void M3() override { cout << "C.M3()" << endl; }
	void M4() { cout << "C.M4()" << endl; }
	C() { cout << "C constructed" << endl; }
	~C() { cout << "C destructed" << endl; }
};
// Virtual calls to be traced with the datatype of the object and not on the address of the object it holds
void allocate() {
	A* aPtr = new C();
	delete aPtr;
}
int main() {
	allocate();
}