// letterlist.cpp
#include <iostream>
#include <vector>
#include "letterlist.h"

Letterlist::Letterlist()
{
    // initialization for vector
	charAlpha = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H',
	             'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P',
	             'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X',
	             'Y', 'Z'};
}

void Letterlist::removeLetter(char toRemove)
{
    for(auto& tErase : charAlpha)
                    {
                        if(tErase == toRemove)
                            tErase = '_';
                    }
}

void Letterlist::displayLetters()
{
    for(auto& temp : charAlpha)
        std::cout << temp << " ";

    std::cout << std::endl;
}

bool Letterlist::hasBeenUsed(char charToCheck)
{
    for (auto& temp : charAlpha)
    {
     if(temp == charToCheck)
            return false;
    }
    return true;
}
