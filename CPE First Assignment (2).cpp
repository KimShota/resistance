/*-------------------------------------------------------------------------------------------*/
/* Name: Shota Matsumoto, Student Number: sm11745*/
/* Date: Feburary 24, 2024*/
/* Program: CPE First Assignment.cpp*/
/* Description: This program computes the total resistance in series and parallel connections*/
/* ------------------------------------------------------------------------------------------*/

#include <iostream>

using namespace std;

int main() {
    int mainChoice = 0;
    int numResis = 0;
    int resisValue = 0;

    //Insert do/while Repetition structure to evaluate the condition at the end
    do {
        //Print Main Menu and three choices and Read choice
        cout << "Main Menu" << endl;
        cout << "1) Calculate total resistance value" << endl;
        cout << "2) Help" << endl;
        cout << "3) Exit" << endl;
        cout << "Please enter your choice: ";
        cin >> mainChoice;

        //Make if statement. Here we deal with the case of choice 1. Print two connection types and Read choice
        if (mainChoice == 1) {
            cout << "Secondary Menu" << endl;
            cout << "1) Series" << endl;
            cout << "2) Parallel" << endl;
            cout << "Please select connection type: ";
            int secondaryChoice = 0; //declare and initialize variable as integer and equal to 0
            cin >> secondaryChoice;

            //Make if statment for the case of secnodary choice being either 1 or 2. Print the total number of resistors and read it
            if (secondaryChoice == 1 || secondaryChoice == 2) {
                cout << "Please enter the total number of resistors: ";
                cin >> numResis;

                //Declare and initialize variables
                int totalResistance = 0;
                double totalInverseResistance = 0.0;

                //Insert for looping structure. Declare and Initialize i which is a counter, Provide conditions to the counter, and post-increment 1 every round
                for (int i = 1; i <= numResis; ++i) {
                                    do {
                                        cout << "Please enter the value of resistor " << i << " (Omega): ";
                                        cin >> resisValue;
                                        if (resisValue < 0) {
                                            cout << "Your answer is invalid. Resistance value cannot be negative. Please try again." << endl;
                                        }
                                    } while (resisValue < 0);
                    
                    

                    //Make if statement in the case of secondaryChoice being 1 and Provide equation for series connection.
                    if (secondaryChoice == 1) {
                        totalResistance += resisValue;
                    }
                    //Install else to provide equation for parallel connection.
                    else {
                        totalInverseResistance += 1.0 / resisValue;
                    }
                }

                //Make if statement for the secondaryChoice being 1 and Print the total resistance value.
                if (secondaryChoice == 1) {
                    cout << "The total resistance value is: " << totalResistance << " (Omega)" << endl;
                }
                //Make else statement, Declare variable, and Provide equation to get the total resistance for parallel connection. Print the total resistance value.
                else {
                    double totalParallelResistance;
                    totalParallelResistance = 1.0 / totalInverseResistance;
                    cout << "The total resistance value is: " << totalParallelResistance << " (Omega)" << endl;
                }
            }
            
            //Make else statement for the case where the user inputs values other than 1 or 2. Print the input is valid.
            else {
                cout << "Your answer is invalid. Please try again." << endl;
            }
        }
        
        //Make else/if statement for the mainchoice being 2. Print the information about the program and re-display main menu.
        else if (mainChoice == 2) {
            cout << "This program allows you to calculate the total resistance value of a set of resistors." << endl;
            cout << "You can choose between calculating in series or parallel." << endl;
            cout << "Please follow the instructions provided in each menu." << endl;
        }
        
        //Make else/if statement for the choice being 3. This terminates the program.
        else if (mainChoice == 3) {
            cout << "Program is terminated. Bye!" << endl;
        }
        
        //Make else statement for values other than 1, 2, or 3. Allow users to input the value again from main menu.
        else {
            cout << "Your answer is invalid. Please try again." << endl;
        }
    } while (mainChoice != 3); //Provide the condition for do/while Repepition structure

    return 0;
}


