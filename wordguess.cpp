// wordguess.cpp
#include <iostream>
#include <cstdlib>
#include "hangman.h"
#include "wordlist.h"
#include "letterlist.h"

const int limitOfGuesses = 7;

void startGame()
{
    std::string getYN = "Y";
    while(getYN == "Y" || getYN == "y")
    {
        Hangman* joe = new Hangman();
        Letterlist* playerLetters = new Letterlist();
        Wordlist* myList = new Wordlist();

        bool isCorrect = "false";
        const std::string word1 = myList->getRandomWord();
        int userGuesses = limitOfGuesses;
        std::string wordInProgress = "";

        int lengthOfAnswer = word1.length();

        for(int a = 0; a < lengthOfAnswer; a++)
        {
            wordInProgress += "?";
        }

        std::string inputString = "";
        char cGuess = '?';

        while(wordInProgress != word1)
        {
            inputString = "";
            while(inputString.length() != 1 || (inputString[0] < 'A' || inputString[0] > 'Z' &&
                                                inputString[0] < 'a' || inputString[0] > 'z'))
            {
                joe->viewHangman();
                std::cout << wordInProgress << std::endl << std::endl;
                playerLetters->displayLetters();
                std::cout <<  "\nPlease guess a letter:";
                getline(std::cin, inputString);
            }

            cGuess = toupper(inputString[0]);
            isCorrect = false;

            for(int i = 0; i < word1.length(); i++)
            {
                if(cGuess == word1[i])
                {
                    system("CLS");
                    std::cout << "Yes there is a " << cGuess << "!" << std::endl;
                    wordInProgress[i] = word1[i];
                    playerLetters->removeLetter(word1[i]);
                    isCorrect = true;
                }
            }
            if(!isCorrect)
            {
                system("CLS");
                isCorrect = false;
                if(!playerLetters->hasBeenUsed(cGuess))
                {
                    joe->addPart();
                    userGuesses--;
                }
                std::cout << "Sorry there is no " << cGuess << "!" << std::endl;
                playerLetters->removeLetter(cGuess);
            }

            std::cout << wordInProgress << "\nNumber of guesses left:"
                      << userGuesses << std::endl;
            if(userGuesses == 0)
                break;
        }
        if(wordInProgress == word1)
            std::cout << "You win!!!" << std::endl;
        else
            std::cout << "You lose!" << "\nAnswer was:" << word1 << std::endl;

        delete joe;
        joe = NULL;
        delete playerLetters;
        playerLetters = NULL;
        delete myList;
        myList = NULL;
        std::cout << "\n\nWould you like to play again? [Y/N]" << std::endl;
        std::getline(std::cin, getYN);
    }
}
