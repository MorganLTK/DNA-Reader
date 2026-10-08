#pragma once
#include <iostream>
#include <map>

//defining namespace for DNA counting function
namespace nucleocounter {
	std::map<char, int> GetDNACount(std::string DNAString);

	int GetHammingDistance(std::string strand1, std::string strand2);
}
