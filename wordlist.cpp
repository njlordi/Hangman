// wordlist.cpp
#include <iostream>
#include <cstdlib>
#include <fstream>
#include <vector>
#include "time.h"
#include "wordlist.h"

Wordlist::Wordlist()
{
    std::string temp;
    std::ifstream inFile;
    inFile.open("dictionary.txt");

    while(inFile >> temp)
    {
        words.push_back(temp);
    }
    inFile.close();
}

std::string Wordlist::getRandomWord()
{
    srand(time(NULL));
    int myRandom = rand() % 35791 + 1;
    return words.at(myRandom);
}
