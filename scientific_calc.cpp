#include<iostream>
#include<cstdlib>
#include<cmath>
using namespace std;

void addition();        //1
void subtraction();     //2
void multiplication();  //3
void division();        //4
void power();           //5
void square();          //6
void cube();            //7
void square_root();     //8
void fact();            //9

int main(){

    cout<<"Welcome to calculate in a scientific calculator created by me aka Aditi Kapoor";
    cout<<"\n*********** Enter a choice from below **********\n";
    cout<<"Enter number 1 for addition "<<endl;
    cout<<"Enter number 2 for subtraction "<<endl;
    cout<<"Enter number 3 for multiplication "<<endl;
    cout<<"Enter number 4 for division "<<endl;
    cout<<"Enter number 5 for power "<<endl;
    cout<<"Enter number 6 for square "<<endl;
    cout<<"Enter number 7 for cube "<<endl;
    cout<<"Enter number 8 for square root "<<endl;
    cout<<"Enter number 9 for fact "<<endl;
    cout<<"Enter number 0 for exit "<<endl;
    

    int choice;
    while(1){
        cout<<"Enter your choice: ";
    cin>>choice;
    
        switch(choice){
            case 1:
            addition();
            break;

            case 2:
            subtraction();
            break;

            case 3:
            multiplication();
            break;

            case 4:
            division();
            break;

            case 5:
            power();
            break;

            case 6:
            square();
            break;

            case 7:
            cube();
            break;

            case 8:
            square_root();
            break;

            case 9:
            fact();
            break;

            case 0:
            exit(0);
            break;

            default:
            cout<<"Enter valid choice";
            break;

        }
    }

    return 0;        
}

void addition(){
    int num1,num2;
    cout<<"Enter number1 and number 2: ";
    cin>>num1>>num2;
    cout<<"Sum of "<<num1<<" and "<<num2<<" is "<<num1+num2<<endl;
}

void subtraction(){
    int num1,num2;
    cout<<"Enter number1 and number 2: ";
    cin>>num1>>num2;
    cout<<"Subtraction of "<<num1<<" and "<<num2<<" is "<<num1-num2<<endl;            
}

void multiplication(){
    int num1,num2;
    cout<<"Enter number1 and number 2: ";
    cin>>num1>>num2;
    cout<<"Multiplication of "<<num1<<" and "<<num2<<" is "<<num1*num2<<endl;
}

void division(){
    int num1,num2;
    cout<<"Enter number1 and number 2: ";
    cin>>num1>>num2;
    if (num2 == 0) {
        cout << "Error! Division by zero is not allowed.\n";
        return;
    }            
    cout<<"Division of "<<num1<<" and "<<num2<<" is "<<(float)num1/(float)num2<<endl;
}

void power(){
    double num1,num2;
    cout<<"Enter base and exponent: ";
    cin>>num1>>num2;
    double power=pow(num1,num2);
    cout<<"base "<<num1<<" has exponent "<<num2<<" so "<<power<<endl;
}

void square(){
    double num1;
    cout<<"Enter number1 : ";
    cin>>num1;
    double power=pow(num1,2);
    cout<<"The square of "<<num1<<" is "<<power<<endl;
}

void cube(){
    double num1;
    cout<<"Enter number1: ";
    cin>>num1;
    double power=pow(num1,3);
    cout<<"The cube of "<<num1<<" is "<<power<<endl;
}

void fact(){
    int num,factorial=1;
    cout<<"Enter number to get its factorial: ";
    cin>>num;
    if (num < 0) {
        cout << "Error! Factorial of a negative number is not defined.\n";
        return;
    }  
    for(int i=1;i<=num;i++){
        factorial=factorial*i;
    }          
    cout<<"Factorial is: "<<factorial<<endl;
}

void square_root(){
    double num1;
    cout<<"Enter number: ";
    cin>>num1;
    double squareRoot=sqrt(num1);
    if (num1 < 0) {
        cout << "Error! Square root of a negative number is not defined.\n";
        return;
    }            
    cout<<"The square root of "<<num1<<" is "<<squareRoot<<endl;
}
