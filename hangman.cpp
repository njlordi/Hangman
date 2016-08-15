// hangman.cpp
#include <iostream>
#include "hangman.h"

Hangman::Hangman() : parts(0) {}

void Hangman::viewHangman()
{
    switch(parts)
    {
    case 1:
        std::cout << " --------\n"
                  << " |      |\n"
                  << " |      [ ]\n"
                  << " |     -----\n"
                  << " |\n"
                  << " |\n"
                  << " |\n"
                  << " |\n"
                  << " |\n"
                  << " |\n"
                  << std::endl;
        break;

    case 2:
        std::cout << " --------\n"
                  << " |      |\n"
                  << " |      [ ]\n"
                  << " |     -----\n"
                  << " |     (*_*)\n"
                  << " |\n"
                  << " |\n"
                  << " |\n"
                  << " |\n"
                  << " |\n"
                  << std::endl;
        break;
    case 3:
        std::cout << " --------\n"
                  << " |      |\n"
                  << " |      [ ]\n"
                  << " |     -----\n"
                  << " |     (*_*)\n"
                  << " |       |\n"
                  << " |       |\n"
                  << " |       |\n"
                  << " |\n"
                  << " |\n"
                  << std::endl;
        break;

    case 4:
        std::cout << " --------\n"
                  << " |      |\n"
                  << " |      [ ]\n"
                  << " |     -----\n"
                  << " |     (*_*)\n"
                  << " |       |\n"
                  << " |       |---\n"
                  << " |       |\n"
                  << " |\n"
                  << " |\n"
                  << std::endl;
        break;
    case 5:
        std::cout << " --------\n"
                  << " |      |\n"
                  << " |      [ ]\n"
                  << " |     -----\n"
                  << " |     (*_*)\n"
                  << " |       |\n"
                  << " |    ---|---\n"
                  << " |       |\n"
                  << " |\n"
                  << " |\n"
                  << std::endl;
        break;
    case 6:
        std::cout << " --------\n"
                  << " |      |\n"
                  << " |      [ ]\n"
                  << " |     -----\n"
                  << " |     (*_*)\n"
                  << " |       |\n"
                  << " |    ---|---\n"
                  << " |       |\n"
                  << " |        \\\n"
                  << " |\n"
                  << std::endl;
        break;
    case 7:
        std::cout << " --------\n"
                  << " |      |\n"
                  << " |      [ ]\n"
                  << " |     -----\n"
                  << " |     (*_*)\n"
                  << " |       |\n"
                  << " |    ---|---\n"
                  << " |       |\n"
                  << " |      \/ \\\n"
                  << " |\n"
                  << std::endl;
        break;
    case 8:
        std::cout << " --------\n"
                  << " |      |\n"
                  << " |      [ ]\n"
                  << " |     -----\n"
                  << " |     (*_*)\n"
                  << " |       |\n"
                  << " |    ---|---\n"
                  << " |       |\n"
                  << " |      \/ \\\n"
                  << " |\n"
                  << std::endl;
        break;
    default:
        std::cout << " --------\n"
                  << " |      |\n"
                  << " |\n"
                  << " |\n"
                  << " |\n"
                  << " |\n"
                  << " |\n"
                  << " |\n"
                  << " |\n"
                  << " |\n"
                  << std::endl;
        break;
    }
}

void Hangman::addPart()
{
    parts++;
}
