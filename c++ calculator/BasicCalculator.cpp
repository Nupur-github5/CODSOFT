#include<iostream>
using namespace std;

class Calculator
{
    public:
    float num1, num2;


    void getData(){
        do {
            cout << "Enter two natural numbers for arithmetic operation" << endl;
            cout << "*********************************************" << endl;
            cout << "num1: ";
            cin >> num1;
            cout << "num2: ";
            cin >> num2;

            if (num1 <= 0 || num2 <= 0) {
                cout << "Numbers must be greater than 0. Please enter again..." << endl;
            }
        } while (num1 <= 0 || num2 <= 0);
    }

    void ArthOpera(){
        int choose;
        do {
            cout << "Choose an Arithmetic Operation :- " << endl;
            cout << "________________________________ " << endl;
            cout << "1. Addition" << endl;
            cout << "2. Subtraction" << endl;
            cout << "3. Multiplication" << endl;
            cout << "4. Division" << endl;
            cout << "Choose Operation number (1-4): ";
            cin >> choose;
            cout << endl;

            switch (choose)
            {
                case 1:
                    cout << "Addition of " << num1 << " and " << num2 << " = " << num1 + num2;
                    break;
                case 2:
                    cout << "Subtraction of " << num1 << " and " << num2 << " = " << num1 - num2;
                    break;
                case 3:
                    cout << "Multiplication of " << num1 << " and " << num2 << " = " << num1 * num2;
                    break;
                case 4:
                    if (num2 != 0)
                        cout << "Division of " << num1 << " and " << num2 << " = " << num1 / num2;
                    else
                        cout << "Division by zero is not allowed!";
                    break;
                default:
                    cout << "Invalid option! Please choose a valid operation (1-4)." << endl;
            }
        } while (choose < 1 || choose > 4); 

        cout << endl;
    }
};

int main(){
    Calculator calc;

    calc.getData();
    calc.ArthOpera();

    
    return 0;
}
