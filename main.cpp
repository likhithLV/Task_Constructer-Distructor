#include <iostream>
#include <math.h>
using namespace std;

// Class calculator
class Calculator
{
   float a, b;
public:
   Calculator(){
   }
    // Function to take input
    // from user
    void result()
    {
        cout << "Enter First Number: ";
        cin >> a;
        cout << "Enter Second Number: ";
        cin >> b;
    }

    // Function to add two numbers
    float add()
    {
        return a + b;
    }

    // Function to subtract two numbers
    float sub()
    {
        return a - b;
    }

    // Function to multiply two numbers
    float mul()
    {
        return a * b;
    }

    // Function to divide two numbers
    float div()
    {
        if (b == 0)
        {
            cout << "Division By Zero" <<
                     endl;
            return INFINITY;
        }
        else
        {
            return a / b;
        }
    }
    float per()
    {
            return 100*a / b;

    }
    ~Calculator(){
    cout<< "Destructor called" ;
    }
};

// Driver code
int main()
{   char op;

    Calculator c;
  int i=1;
   while(i)
    {  system("cls");
        cout << "\n ----------------------- \n      Calculator    \n -----------------------" << endl;
       cout << "\n which operation do you want to perform: +, -,*,%,/  " <<endl;

        cout << "\nEnter Choice: ";
        cin >> op;
        switch (op)
        {
        case '+':

            // result function invoked
            c.result();

            // add function to calculate sum
            cout << "Result: " <<
                     c.add() << endl;
            break;
        case '-' :

            // sub function to calculate
            // difference
            c.result();
            cout << "Result: " <<
                     c.sub() << endl;
            break;
        case '*' :
            c.result();

            // mul function to calculate product
            cout << "Result: " <<
                     c.mul() << endl;
            break;
        case '/' :
            c.result();

            // div function to calculate division
            cout << "Result: " <<
                     c.div() << endl;
            break;
        case '%' :
            c.result();

            // percentage of a number in another
            cout << "Result: " <<
                     c.per() << endl;
            break;

        default :
            cout<< "\n Enter valid operator\n";
      }
      cout<< "\nTo perform another operation: 1 , \nEnter 0 To Exit:     " ;
     cin>> i;
    }

    return 0;
}
