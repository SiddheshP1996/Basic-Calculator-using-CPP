// Implementation of C++ code for Calculator using concept of classes

#include <iostream>
#include <math.h>
using namespace std;

class calculator
{
	float x, y;
	
	public:
		
		void res()
		{
			cout << "Enter a first number : " << endl;
			cin >> x;
			
			cout << "Enter a second number : " << endl;
			cin >> y;
		}
		
		float add()
		{
			return x + y;
		}
		
		float sub()
		{
			return x - y;
		}
		
		float mult()
		{
			return x * y;
		}
		
		float div()
		{
			
			if (y == 0)
			{
				cout << "Division by Zero" << endl;
				return INFINITY;
			}
			else
			{
				return x / y;
			}
		}
};

int main()
{
	int ch;
	calculator c;
	cout << "Enter 1 to Add" << "\nEnter 2 to Subtract" << "\nEnter 3 to Multiply" << "\nEnter 4 to Divide" << "\nEnter 0 To Exit";
            
    do
    {
        cout << "\nEnter Choice : ";
        cin >> ch;
        switch (ch)
        {
	        case 1:             
	            // result function invoked
	            c.res();             
	            // add function to calculate sum
	            cout << "Result : " << c.add() << endl;
	            break;
	            
	        case 2:             
	            // sub function to calculate difference
	            c.res();
	            cout << "Result : " << c.sub() << endl;
	            break;
	            
	        case 3:
	            c.res();             
	            // mul function to calculate product
	            cout << "Result : " << c.mult() << endl;
	            break;
	            
	        case 4:
	            c.res();             
	            // div function to calculate division
	            cout << "Result : " << c.div() << endl;
	            break;
	    }
	} while (ch >= 1 && ch <= 4);
     
    return 0;
}
