// wordlist.h
#ifndef WORDLIST_H_INCLUDED
#define WORDLIST_H_INCLUDED
#include <vector>

class Wordlist
{
public:
    Wordlist();
    std::string getRandomWord();

private:
    std::vector <std::string> words;
};

#endif // WORDLIST_H_INCLUDED
