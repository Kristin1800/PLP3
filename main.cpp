#include <iostream>
#include <string>
#include <list>
#include <array>
using namespace std;

//boolean function
bool isEven(int n) //This checks whether a given number is even or not
{
    if(n%2 == 0)
        return true; //By true we mean its even
    else
        return false; //By false we mean its odd
}


int main() {
//this is just a spacer so my answers look nicer
    string spc ="*************************";

    //an int data type, can simply cout it for it's contents
    int num = 1;

    //this is for my boolean, defining the user's answer as an integer
    int answ;

    //a char data type, simply cout for contents
    char a [5]{'c','h','a','r','\0'};

    //a string data type, simply defining what the contents of the string are, a simple cout will print it's contents
    string s = "I know what a string is";

    //a floating data type, can use decimals, simple cout will print its contents
    float ex = 83.5;

    //all my simple cout statements with according spacers
    cout<<spc<<endl;
    cout<<a<<endl;
    cout<<spc<<endl;
    cout<<s<<endl;
    cout<<spc<<endl;
    cout<<num<<endl;
    cout<<spc<<endl;
    cout<<ex<<endl;
    cout<<spc<<endl;

    //list data type, defining contents
    list<int>  mylist = {0, 1, 2, 3, 4};

    //array data type, defining length and then it's contents
    int array [3] = {1,2,3};
    int i;

    //for loop printing array
    for (i=0; i<3;i++)
    {cout<<" "<<array[i]<<endl;}
    cout<<spc<<endl;

    //for loop to print contents of list, can use auto since I imported list
    for (auto v : mylist)
        cout << v << "\n";
    cout<<spc<<endl;





//my boolean data type in actions, reports back a statement if conditions are met
    cout << "Enter a number: ";
    cin >> answ;
    if(isEven(answ)) //If true
        cout << "Number is even." << endl;
    else //If false
        cout << "Number is odd." << endl;
    cout<<spc<<endl;
    return 0;
}