#include <iostream>
#include <cstdlib>

using namespace std;

class pet {
public:
	virtual string getDescription() const
	{
		return "This is Pet class";
	}

};

class Dog :public pet {
public:
	virtual string getDescription()const {
		return "This is Dog class";
	}
};

void describe(const pet &p)
{
	cout << p.getDescription() << endl;
}

int main()
{
	pet p;
	Dog d;
	describe(d);
	describe(p);

	return 0;
}