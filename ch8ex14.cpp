//Jenna Busch
//Chapter 8 Exercise 14 solution 

#include <iostream>
#include <math.h>
using namespace std;

//Can we declare a non-reference function argument const (e.g., void f(const int);)? 
//What might that mean? Why might we want to do that? Why don’t people do that often?

//Often people when coding declare an argument reference const so the argument cannot be changed
//throughout the function.

//In the textbook they explain this by saying, "the const is there to stop print() modifying its 
//argument by accident. Apart from the change tothe argument declaration, all is the same as
//before; the only change is that instead of operating on a copy"

//Pass-by-const-reference is a popular and useful tool in c++. The reason people might not do it often 
//in coding because normally when we pass objects or variables to a function we in fact do want them to
//be changed to fit our program. 

//for example:

int constExample(const int a, const int b)
{
    int product;
    product = a * b;
    return product;
}

int constExample2(const int a, const int b)
{
    int expo; 
    expo = pow(a,b); 
    return expo; 
}

int main()
{
    cout << constExample(6,3) << "\n";
    cout << constExample(4,2) << "\n";

    cout << constExample2(6,3) << "\n";
    cout << constExample2(2,3) << "\n";

}

//in these two functions i made if i had tried to alter a or b inside by saying a = _ or b = _
//it would generate an error to let me know they are const and should not be changed. 