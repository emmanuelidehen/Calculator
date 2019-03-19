
//  main.cpp
//  Calculator

//  Created by Emmanuel Idehen on 1/15/19.
//  Copyright © 2019 Emmanuel Idehen. All rights reserved.
// This program takes in two numbers from the user and randomly select numbers and do some math opertaions on them.
/*
 Psuedo code
 
 
 create class calcultor
 declare varaibles
 do different operatioins on those numbers
 calculate addiction,
 calculate subtraction,
 calculate mutiplication,
 calcultate didvision,
 calculate super formular,
 chect if the number is even or odd
 
 */

#include <iostream>

using namespace std;


class Calculator{
    
public:
    //creating two numbers
    int number1;
    int number2;
   Calculator(){ //default constructor assigning random numbers from -7 to 7
        int min = -7;
        int max = 7;
        int range = max - min + 1;
        number1 = rand() % range + min;
        number2 = rand() % range + min;
    }
   //specific constructor assigning a and b as inputs from user.
  Calculator(int num1, int num2){
        number1 = num1;
        number2 = num2;
    }
    //addition function.
    int addition(){
        return (number1+number2);
    }
    //subtraction function
    int subtraction(){
        return abs(number1 - number2);
    }
    //multiplication function
    int multiplication(){
        return (number1*number2);
    }
    //division function
    int division(){
        if (number2 == 0){
            return number2/number1;
        }
        return (number1/number2);
    }
};
//function to check whether its a eve or odd number. Returns the respective string.
string even_or_odd(int x){
    if(x %2 == 0 ){
        return "Even";
    }
    else{
        return "Odd";
    }
}

int main()
{
  
    int num1 , num2;
    Calculator m1; // creating object from default constructor
    cout<<"number1 = "<<m1.number1<<endl<<"number2 = "<< m1.number2<<endl;
    cout<<"for Default constructor: "<<endl;
    cout<<"Addition of the two numbers: "<<m1.addition()<<endl;
    cout<<"Subtraction of the two numbers: "<<m1.subtraction()<<endl;
    cout<<"Multiplication of the two numbers: "<<m1.multiplication()<<endl;
    cout<<"Division of the two numbers: "<<m1.division()<<endl;
    cout<<endl<<endl<<"For specific Constructor: "<<endl;
    cout<<"Enter the first number(Number1):"<<endl;
    cin>>num1;
    cout<<"Enter the second number(Number2):"<<endl;
    cin>>num2;
    Calculator m2(num1,num2); //creating object from specific Constructor
    cout<<"Addition of the two numbers: "<<m2.addition()<<endl;
    cout<<"Subtraction of the two numbers: "<<m2.subtraction()<<endl;
    cout<<"Multiplication of the two numbers: "<<m2.multiplication()<<endl;
    cout<<"Division of the two numbers: "<<m2.division()<<endl;
    
    cout<<" SuperFormula:"<<endl;
    cout<<"SuperFormula for Default Constructor is:"<<endl;
    int result = (m1.subtraction() + m1.multiplication()) - (m1.division() * m1.addition()); //calling SuperFormula for m1.
    cout<<"the Result of SuperFormula is : "<<result<<" and is a "<<even_or_odd(abs(result))<<"Number"<<endl;
    cout<<" SuperFormula for specific Constructor:"<<endl;
    
    int result2 = (m2.subtraction() + m2.multiplication()) - (m2.division() * m2.addition()); //calling SuperFormula for m2.
    cout<<"the Result of SuperFormula is : "<<result2<<" and is a "<<even_or_odd(abs(result2))<<"Number"<<endl;
    return 0;
}
/*
 
 Test cases
 
 number1 = 0
 number2 = -3
 for Default constructor:
 Addition: -3
 Subtraction: 3
 Multiplication: 0
 Division: 0
 
 
 For specific Constructor:
 Enter the first number:
 5
 enter the second number:
 4
 Addition: 9
 Subtraction: 1
 Multiplication: 20
 Division: 1
 SuperFormula:
 SuperFormula for Default Constructor:
 the Result of SuperFormula is : 3 and is a OddNumber
 SuperFormula for specific Constructor:
 the Result of SuperFormula is : 12 and is a EvenNumber
 
 .............................................................
 
 Test case2
 ...........
 
 number1 = 0
 number2 = -3
 for Default constructor:
 Addition of the two numbers: -3
 Subtraction of the two numbers: 3
 Multiplication of the two numbers: 0
 Division of the two numbers: 0
 
 
 For specific Constructor:
 Enter the first number(Number1):
 3
 Enter the second number(Number2):
 9
 Addition of the two numbers: 12
 Subtraction of the two numbers: 6
 Multiplication of the two numbers: 27
 Division of the two numbers: 0
 SuperFormula:
 SuperFormula for Default Constructor is:
 the Result of SuperFormula is : 3 and is a OddNumber
 SuperFormula for specific Constructor:
 the Result of SuperFormula is : 33 and is a OddNumber
 Program ended with exit code: 0
 
 test case 3
 ..............
 
 number1 = 0
 number2 = -3
 for Default constructor:
 Addition of the two numbers: -3
 Subtraction of the two numbers: 3
 Multiplication of the two numbers: 0
 Division of the two numbers: 0
 
 
 For specific Constructor:
 Enter the first number(Number1):
 9
 Enter the second number(Number2):
 10
 Addition of the two numbers: 19
 Subtraction of the two numbers: 1
 Multiplication of the two numbers: 90
 Division of the two numbers: 0
 SuperFormula:
 SuperFormula for Default Constructor is:
 the Result of SuperFormula is : 3 and is a OddNumber
 SuperFormula for specific Constructor:
 the Result of SuperFormula is : 91 and is a OddNumber
 Program ended with exit code: 0
 */
