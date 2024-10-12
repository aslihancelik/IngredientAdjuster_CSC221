// Programmer: Aslihan Celik
// Date: 10/12/2024
//
// IngredientAdjuster_CSC221.cpp:
// This program calculates and displays ingredient amounts for a cookie recipe based on user input.
// It adjusts the quantities for any number of cookies and formats the results to two decimal places.


#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

using namespace std;

int main()
{   //constants for multipliers of each ingredient to calculate the ingredients for the number of cookies specified
    const double SUGAR_MULTIPLIER = 1.5, BUTTER_MULTIPLIER = 1, FLOUR_MULTIPLIER = 2.75;

    const int NUMBER_OF_COOKIES = 48;

    double numberOfCookies;             // Number of cookies the user wants to make
    double ingredientMultiplier;        // Multiplier to scale ingredients based on user input

    string userInput; //to determine if the user want to exit or continue entering a different amount to get the ingredients adjusted

    do {
        cout << "Please enter the number of cookies you would like to make. \n";
        cin >> numberOfCookies;

        // Calculate the ingredient multiplier based on the number of cookies
        ingredientMultiplier = numberOfCookies / NUMBER_OF_COOKIES;

        // Calculate the amount of each ingredient needed
        double sugarNeeded = SUGAR_MULTIPLIER * ingredientMultiplier;
        double butterNeeded = BUTTER_MULTIPLIER * ingredientMultiplier;
        double flourNeeded = FLOUR_MULTIPLIER * ingredientMultiplier;

        // Display the amount of each ingredient needed
        cout << fixed << setprecision(2);
        cout << "For the number of cookies you entered you need the following amount of each ingredient:" << endl << endl;
        cout << setw(10) << sugarNeeded << left << setw(20) << (sugarNeeded != 1 ? " cups of sugar" : " cup of sugar") << endl;
        cout << right << setw(10) << butterNeeded << left << setw(20) << (butterNeeded != 1 ? " cups of butter" : " cup of butter") << endl;
        cout << right << setw(10) << flourNeeded << left << setw(20) << (flourNeeded != 1 ? " cups of flour" : " cup of flour") << endl << endl;

        cout << "Would you like to exit the program or get the recipe for different amount of cookies?" << endl;
        cout << "Type exit if you would like to exit or type continue if you would like to enter a different amount. Then hit enter." << endl << endl;
        // Read input
        cin >> userInput;
        if (userInput == "exit") {
            cout << "Exiting the program..." << endl;
            break; // Exit the loop
        }
        cin.clear();
    } while (true);
    return 0;

}