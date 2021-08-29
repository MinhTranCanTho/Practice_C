#include <iostream>
#include <memory>

using namespace std;

class A {
public:
	void show()
	{
		cout << "Hello, I'm Minh." << endl;
	}
};

int main()
{
	unique_ptr<A> p1(new A);
	p1->show();
	cout << p1.get() <<endl;
	
	/* unique_ptr<A> p2(p1)::error because It explicitily prevents copying. */
	unique_ptr<A> p2 = move(p1);
	p2->show();
	cout << p2.get() << endl;
	cout << p1.get() << endl;

	return 0;
}