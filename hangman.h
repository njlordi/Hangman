// hangman.h
#ifndef HANGMAN_H_INCLUDED
#define HANGMAN_H_INCLUDED

class Hangman
{
public:
    Hangman();
    void addPart();
    void viewHangman();
    bool isAlive();

private:
    int parts;
};

#endif // HANGMAN_H_INCLUDED
