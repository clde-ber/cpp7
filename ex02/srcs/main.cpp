#include "Array.hpp"
#include "Array.tpp"

int main()
{
    Array<const char, 5> arr(5);
    std::cout << "array size: " << arr.size() << std::endl;
    for (unsigned int i = 0; i < arr.size() * 2; i++)
    {
        try
        {
            std:: cout << arr[i] << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << std::endl;
        }
    }
    Array<const unsigned char, 10> arr2(10);
    std::cout << "array size: " << arr2.size() << std::endl;
    for (unsigned int i = 0; i < arr2.size() * 2; i++)
    {
        try
        {
            std:: cout << arr2[i] << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << std::endl;
        }
    }
    Array<const unsigned int, 3> arr3(3);
    std::cout << "array size: " << arr3.size() << std::endl;
    for (unsigned int i = 0; i < arr3.size(); i++)
    {
        try
        {
            std:: cout << arr3[i] << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << std::endl;
        }
    }
    Array<const unsigned char, 10> arr4(arr2);
    std::cout << "array size: " << arr4.size() << std::endl;
    for (unsigned int i = 0; i < arr4.size(); i++)
    {
        try
        {
            std:: cout << arr4[i] << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << std::endl;
        }
    }
    Array<unsigned int, 10> arr5(10);
    Array<unsigned int, 10> arr6(3);
    Array<unsigned int, 3> arr7(3);
    Array<unsigned int, 3> arr8(3);
    std::cout << "********** Trying to assign arrays of different size and same type **********" << std::endl;
    arr5 = arr6;
    std::cout << "**********    Trying to assign arrays of same size and same type   **********" << std::endl;
    arr8 = arr7;
    std::cout << "array size: " << arr8.size() << std::endl;
    for (unsigned int i = 0; i < arr8.size(); i++)
    {
        try
        {
            std:: cout << arr8[i] << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << std::endl;
        }
    }
    return 0;
}