#include <iostream>
#include <map>
#include "NucleoCounter.h"


	std::map<char, int> nucleocounter::GetDNACount(std::string DNAString) {

		std::map<char, int> m{ {'A', 0},{'T', 0 },{'C', 0},{'G', 0} };

		//incrementing the respective count for each type of nucleotide in the DNA string
		for (char c : DNAString)
		{
			m[c]++;
		}

		return m;
	}

	int nucleocounter::GetHammingDistance(std::string strand1, std::string strand2) {

		int returnValue{ 0 };

		//looping through the first string and comparing each string to the other strand
		//if they are different characters, the hamming distance increases

		for (int i{ 0 }; i < strand1.length(); i++) {

			if (strand1[i] != strand2[i]) {				
				returnValue++;
			}

		}
		return returnValue;
	}

	
