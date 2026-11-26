#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int secret = rand() % 100 + 1;
    int guess, tries = 0;

    cout << "Guess my number!\n";
    do {
        cout << "Guess: ";
        cin >> guess;
        tries++;
        if (guess > secret)
            cout << "Too high!\n";
        else if (guess < secret)
            cout << "Too low!\n";
    } while (guess != secret);

    cout << "You won in " << tries << " tries!\n";
    return 0;
}
