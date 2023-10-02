#include <iostream>
using namespace std;


int OUR_ABSOLUTE(int n)
{
	if (n >= 0)
		return n;
	return -n;
}


int MAIN_ABSOLUTE_CALLING_FUNCTION_PRACTICE(int a, int b)
{
	a = OUR_ABSOLUTE(a);

	b = OUR_ABSOLUTE(b);

	if (a >= b)
		return a;
	return b;
}


int main()
{
	cout << MAIN_ABSOLUTE_CALLING_FUNCTION_PRACTICE(2, 5) << endl;
	cout << MAIN_ABSOLUTE_CALLING_FUNCTION_PRACTICE(2, -5) << endl;
}