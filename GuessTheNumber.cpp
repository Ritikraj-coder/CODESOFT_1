#include<iostream>
#include<cstdlib>
#include<ctime>

int main() {

    std::srand(std::time(0));

    int randomNumber = std::rand() % 100 + 1;
    int usernumber = 0;

    std::cout << "this is the Guessing Game!" << std::endl;

    std::cout <<"the random number  is between 1 and 100." << std::endl;

    std::cout << "you have to guess what the random  number is?" << std::endl;

    while (true) {

        std::cout << "Enter your guess: ";

        std::cin >> usernumber;

        if (usernumber < randomNumber) {
            std::cout << "Your guess is too low." << std::endl;

        } 
        
        else if (usernumber > randomNumber) {
            std::cout << "Your guess is too high." << std::endl;
        }

         else {
            std::cout << "Congratulations! You guessed the correct number: " << randomNumber << std::endl;
            break;
        }
    }

    return 0;
}