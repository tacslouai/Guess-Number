#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;

bool isRight = true;

int main()
{

	int secretNumber = rand() % 21;
	int playerNumber;
	int numberTries = 0;
	cout << "Welcome to the number guessing game! \nThe rules are simple: Guess an unknown number between 0 and 20 \nTake your best guess!" << endl;
	srand(time(nullptr));
	secretNumber = rand() % 21;
	do {
		cin >> playerNumber;
		numberTries++;

		if (playerNumber == secretNumber) {
			cout << "You win! Good job ;) \n You got it right in " << numberTries << " guesses" << endl;
			isRight = true;
		}

		else if (playerNumber > 20 || playerNumber < 0) {
			cout << "Please enter a valid response: " << endl;
			isRight = false;
		}

		else if (playerNumber != secretNumber) {
			cout << "You didn't guess right but you can try again" << endl;
			
			if (playerNumber < secretNumber) {
				cout << "Your guess is a little too low" << endl;
			}

			if (playerNumber > secretNumber) {
				cout << "Your guess is a little too high" << endl;
			}

			isRight = false;
		}


	} while (isRight == false);

	return 0;
}

