#include <iostream>
#include <string>

int main()
{
	int i = 2;
	std::string s1 = "aleph";
	std::string s2 = "alpha";
	std::string s;

	s1.swap(s2);
	s2.swap(s);
	s.swap(s2);

	std::cout << s2;
	
	return 0;
}