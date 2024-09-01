Experiment 3

Aim:
To study and implement Operators in C++.

Theory:
In C++, operators are special symbols that perform operations on operands. They are categorized into various types based on their functionality:

Arithmetic Operators: Used to perform mathematical operations.

• + → Addition

• - → Subtraction

• * → Multiplication

• / → Division

• % → Modulus

• ++ → Increment

• -- → Decrement

Relational Operators: Used to compare two values.
• == → Equal to (this compares if the two are equal to each other and does not assign)

• != → Not equal to

• > → Greater than

• < → Less than

• >= → Greater than or equal to

• <= → Less than or equal to

Logical Operators: Used to combine conditional statements.
• && → Logical AND

• || → Logical OR

• ! → Logical NOT

Assignment Operators: Used to assign values to variables.

• = → Assignment

• += → Add and assign

• -= → Subtract and assign

• *= → Multiply and assign

• /= → Divide and assign

• %= → Modulus and assign

CODE:-
```
//Name - Swarna Prakash
//PRN - 23070123139


#include <iostream>
int main() {
    int a = 10;
    int b = 5;
    
    std::cout << "Arithmetic Operators:" << std::endl;
    std::cout << "a + b = " << a + b << std::endl;
    std::cout << "a - b = " << a - b << std::endl;
    std::cout << "a * b = " << a * b << std::endl;
    std::cout << "a / b = " << a / b << std::endl;
    std::cout << "a % b = " << a % b << std::endl;

    // Assignment Operators
    int c = a;
    c += b;
    std::cout << "\nAssignment Operators:" << std::endl;
    std::cout << "c after c += b: " << c << std::endl;
    c -= b;
    std::cout << "c after c -= b: " << c << std::endl;
    c *= b;
    std::cout << "c after c *= b: " << c << std::endl;
    c /= b;
    std::cout << "c after c /= b: " << c << std::endl;
    c %= b;
    std::cout << "c after c %= b: " << c << std::endl;

    // Comparison Operators
    std::cout << "\nComparison Operators:" << std::endl;
    std::cout << "a == b: " << (a == b) << std::endl;
    std::cout << "a != b: " << (a != b) << std::endl;
    std::cout << "a > b: " << (a > b) << std::endl;
    std::cout << "a < b: " << (a < b) << std::endl;
    std::cout << "a >= b: " << (a >= b) << std::endl;
    std::cout << "a <= b: " << (a <= b) << std::endl;    

    return 0;
}
```
OUTPUT:-

![Experiment 3 JPG](https://github.com/user-attachments/assets/2657fd0a-b5a9-4f4a-a2eb-b45eae9a86ba)

![Experiment 3 JPG(2)](https://github.com/user-attachments/assets/78f4faee-ea86-49c0-8565-e8a80d7447b8)


CONCLUSION- we learnt how to use operators in C++.
