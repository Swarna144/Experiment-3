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

/* Output 
Arithmetic Operators:
a + b = 15
a - b = 5
a * b = 50
a / b = 2
a % b = 0

Assignment Operators:
c after c += b: 15
c after c -= b: 10
c after c *= b: 50
c after c /= b: 10
c after c %= b: 0

Comparison Operators:
a == b: 0
a != b: 1
a > b: 1
a < b: 0
a >= b: 1
a <= b: 0 */