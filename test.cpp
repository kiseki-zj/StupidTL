#include "allocator.h"
#include <vector>
#include <iostream>

int main() {
	std::vector<int, SpTL::allocator<int> > v;
	v.push_back(1);
	std::cout << v[0] << std::endl;
}
