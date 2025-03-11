#include <vector>
#include <iostream>

using std::cout, std::endl;

int main(int argc, const char* argv[])
{
	std::vector<int> test;
	cout << test.size() << endl;
    cout << test.capacity() << endl;

	return 0;
}