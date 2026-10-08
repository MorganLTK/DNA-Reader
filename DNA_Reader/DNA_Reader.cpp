#include <iostream>
#include "NucleoCounter.h"


int main()
{
    std::cout << "enter a DNA strand: ";
    std::string DNAStrand;//{ "AGCTTTTCATTCTGACTGCAACGGGCAATATGTCTCTGTGTGGATTAAAAAAAGAGTGTCTGATAGCAGC" };

    std::cin >> DNAStrand;

    std::map m = nucleocounter::GetDNACount(DNAStrand);
    for (auto p : m) {
        std::cout << p.first << ": " << p.second << '\n';
    }

    std::string strand1;// { "GAGCCTACTAACGGGAT" };
    std::string strand2;// { "CATCGTAATGACGGCCT" };

    do {
        std::cout << "Enter two DNA strands of the same length \n";
        std::cout << "enter the first DNA strand: \n";
        
        std::cin >> strand1;

        std::cout << "enter the second DNA strand: \n";
       
        std::cin >> strand2;
    } while (strand1.length() != strand2.length());

    
    

    std::cout << "Hamming Distance Between " << strand1 << " and " << strand1 << " is: " << nucleocounter::GetHammingDistance(strand1, strand2);
}

