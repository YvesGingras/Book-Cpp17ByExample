#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;
int main() {
    cout << "Roll the dice!" << endl;

    srand(static_cast<unsigned int>(time(nullptr)));
    int dice = (rand() % 6) + 1;
    cout << "Dice: " << dice << endl;

    return 0;
}