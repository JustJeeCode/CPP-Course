#include <iostream>

namespace first{
	int x = 1;
}
namespace second{
	int x = 2;
}

int main() {
	/* Namespace = provides a solution for preventing name conflicts
	in large projects. Each entity needs a unique name. A namespace
	allows for identically name entities as long as the namespaces are
	different.
	*/
	using std::cout;
	using std::string;

	std::cout << x;
	std::cout << second::x;

	return 0;
}