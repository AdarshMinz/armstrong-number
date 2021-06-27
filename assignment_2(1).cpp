Assignment - 2
Choose the correct option
1) Local variables are stored in an area called ___________
a) Heap
b) Permanent storage area
c) Free memory
d) Stack

ANS: STACKS


2)Choose the correct option?
#include using namespace std;
class Base {};
class Derived: public Base {};
int main()
{
Base *bp = new Derived;
Derived *dp = new Base;
}
a. No Compiler Error
b.Compiler Error in line “Base *bp = new Derived;”
c. Compiler Error in line ” Derived *dp = new Base;”
d. Runtime Error

ANS: C


3)When the inheritance is private, the private methods in base class are __________ in the
derived class (in C++).
a. Inaccessible
b.. Accessible
c.. Protected
d. Public

ANS: A
 
4)Which of the following is true?
A. The number of times destructor is called depends on Number of objects created
B. Destructor is called only once
C. There can be more than one destructors in the class
D. Programmer have to always call destructor at the end of the program

ANS: B


5) State true or false
Type conversion is automatic whereas type casting is explicit
A. True
B. False

ANS: A


Short answer type question?
1. Explain about new and delete keywords with code

ANS:

a) new is used to allocate memory for a C++ class object, 
the object's constructor is called after the memory is allocated.

b)Delete is an operator that is used to destroy array and
 non-array(pointer) objects which are created by new expression.

EXAMPLE: 
#include <iostream>
using namespace std;

class Student {
    int age;

   public:
    Student() : age(12) {}

    void getAge() {
        cout << "Age = " << age << endl;
    }
};

int main() {

    Student* ptr = new Student();
    ptr->getAge();

    delete ptr;

    return 0;
}



2. What are constructors? Why they are required? Explain different types of constructors
with suitable example.

ANS: 
A constructor is a special type of function with no return type.
Name of constructor should be same as the name of the class. 
We define a method inside the class and constructor is also defined inside a class. 
it is called automatically when we create an object of a class. 

TYPES:
a)Default Constructor
b)Parameterized Constructor
c)Copy Constructor
d)Static Constructor
e)Private Constructor


3. Explain the difference b/w object oriented and procedural programming language in
detail.

ANS: 
a)Procedural Programming can be defined as a programming model which is derived from structured programming, based upon the concept of calling procedure. 
  It is also known as routines, subroutines or functions, simply consist of a series of computational steps to be carried out. 
  During a program’s execution, any given procedure might be called at any point, including by other procedures or itself.

b)Object oriented programming can be defined as a programming model which is based upon the concept of objects. 
  Objects contain data in the form of attributes and code in the form of methods. 
  In object oriented programming, computer programs are designed using the concept of objects that interact with real world. 
  Object oriented programming languages are various but the most popular ones are class-based, meaning that objects are instances of classes, which also determine their types.
