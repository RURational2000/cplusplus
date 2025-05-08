// Take my name and reverse it
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	string myname = "Steve";
	std::cout << "My name is " << myname << '\n';
	string namereversed;
	for (int x = myname.length() - 1; x >= 0; x--)
	{
		namereversed += myname[x];
	}

	// Print the reversed name
	std::cout << "Reversed, it is " << namereversed << '\n';

	// Now try it std::reverse
	std::reverse(namereversed.begin(), namereversed.end());

	// Print the reversed reversed name
	std::cout << "Using Reversed, the reversed name is now " << namereversed << '\n';

	return 0;
}	