#include <iostream>

void sample_ptr(int* ptr);
void ptr_to_ptr(int* ptr);

int main()
{
    int x = 5;
    std::cout << "Address of x : " << &x << std::endl;
    sample_ptr(&x);
    std::cout << "Value at x : " << x << std::endl; // should be 10

    ptr_to_ptr(&x);

    return 0;
}

void sample_ptr(int* ptr)
{
    std::cout << "----------- BEGIN >>> void parameterized_func(int* ptr) function --------------" << std::endl;
    std::cout << "Address of ptr : " << &ptr << std::endl;
    std::cout << "Value stored in ptr : " << ptr << std::endl;
    std::cout << "Value obtained by de-referencing the address stored in ptr : " << *ptr << std::endl;
    // change the value at the address pointed by the pointer a to 10
    *ptr = 10;
    std::cout << "----------- END <<< void parameterized_func(int* ptr) function --------------" << std::endl;
}

void ptr_to_ptr(int* ptr)
{
    std::cout << "----------- BEGIN >>> void ptr_to_ptr(int* ptr) function --------------" << std::endl;
    std::cout << "Address of ptr: " << &ptr << std::endl;
    std::cout << "Value stored in ptr: " << ptr << std::endl;
    std::cout << "Value obtained by de-referencing the address stored in ptr: " << *ptr << std::endl;

    // pointer to pointer(ptr)
    int** z = &ptr;

    std::cout << "Address of z: " << &z << std::endl;
    std::cout << "Value stored in z: " << z << std::endl;
    std::cout << "Value obtained by de-referencing the address stored in z: " << *z << std::endl; // should be value stored in ptr
    std::cout << "----------- END <<< void ptr_to_ptr(int* ptr) function --------------" << std::endl;
}