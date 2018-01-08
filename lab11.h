#include <vector>
#include <iostream>

using std::vector;
using std::ostream;

template <class X>
class stiva;

template <class T>
ostream& operator << (ostream&, const stiva<T>&);

template <class T>
class stiva
{
	vector<T> v;
	unsigned int sp;

public:
	bool empty();
	void push(const T&);
	T& top();
	void pop();
	friend ostream& operator << <>(ostream&, const stiva&);
};

template <class T>
ostream& operator << (ostream &dev, const stiva<T> &a)
{
	for (unsigned int i = 0; i < a.v.size(); i++){
		dev << a.v[i] << " ";
	}
	dev << "\n";

	return dev;
}