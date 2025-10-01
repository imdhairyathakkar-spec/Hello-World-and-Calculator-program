//Dhairya Thakkar
//24070123037
//B3

#include <iostream> // Include the iostream library for input and output operations
using namespace std; // Use the standard namespace to avoid prefixing std:: before standard functions
int main() {
    cout << "Hello, World! \n"  ;
    float n,m,sum,sub,div,mul; // Declare variables for two numbers and their operations
    cout << "Enter first numbers: "; //input first number
    cin >> n ;
    cout << "Enter second number: ";//input second number
    cin >> m ;
    sum = n + m; 
    sub = n - m;
    div = n / m;
    mul = n * m;
    cout << "Addition of both numbers : " << sum << endl; // Display the results of the operations
    cout << "Subtraction of both numbers : " << sub << endl;
    cout << "Division of both numbers : " << div << endl;    
    cout << "Multiplication of both numbers : " << mul << endl;

return 0;
}

/* output:
Hello,World
Enter first number : 2
Enter second number : 2
Addition of both number : 4
Subtraction of both numbers : 0
Division of both numbers : 1
Multiplication of both numbers : 4
    */
