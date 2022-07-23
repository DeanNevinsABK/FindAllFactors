#include <iostream>

using namespace std;

void FindAllFactors(int number);

int main()
{
    bool validInput{ false };

    while (!validInput)
    {
        cout << "Enter a positive integer and I will tell you all of its factors." << endl;
        int userInput;
        cin >> userInput;

        if (cin.fail() || userInput <= 0)
        {
            cin.clear();
            cin.ignore(99, '\n');
            cout << "That is not a positive integer! Try agin." << endl;
        }
        else
        {
            cout << "All the factors of " << userInput << " are: " << endl;
            FindAllFactors(userInput);
            validInput = true;
        }
    }

}

void FindAllFactors(int number)
{
    for (unsigned int i = 1; i <= number / 2; i++)
    {
        if (number % i == 0)
            cout << i << endl;
    }

    cout << number << endl;
}