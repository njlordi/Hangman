// letterlist.h
#ifndef LETTERLIST_H_INCLUDED
#define LETTERLIST_H_INCLUDED

#include <vector>

class Letterlist
{
public:
    Letterlist();
    void removeLetter(char);
    void displayLetters();
    bool hasBeenUsed(char);
private:
    std::vector<char>charAlpha;
};

#endif // LETTERLIST_H_INCLUDED
