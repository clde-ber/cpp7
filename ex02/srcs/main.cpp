#include "Array.hpp"

int main()
{
    Array<const unsigned char> arr(5);
    std::cout << "array size: " << arr.size() << std::endl;
    for (unsigned int i = 0; i < arr.size() * 2; i++)
    {
        try
        {
            std:: cout << arr[i] << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cout << e.what() << std::endl;
        }
    }
    Array<double> arr2(10);
    std::cout << "array size: " << arr2.size() << std::endl;
    for (unsigned int i = 0; i < arr2.size() * 2; i++)
    {
        try
        {
            arr2[i] = 0.004;
            std:: cout << arr2[i] << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cout << e.what() << std::endl;
        }
    }
    Array<float> arr3(3);
    std::cout << "array size: " << arr3.size() << std::endl;
    for (unsigned int i = 0; i < arr3.size(); i++)
    {
        try
        {
            arr3[i] = 0.05f;
            std:: cout << arr3[i] << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cout << e.what() << std::endl;
        }
    }
    Array<double> arr4(arr2);
    std::cout << "array size: " << arr4.size() << std::endl;
    for (unsigned int i = 0; i < arr4.size(); i++)
    {
        try
        {
            std:: cout << arr4[i] << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cout << e.what() << std::endl;
        }
    }
    Array<unsigned int> arr5(10);
    Array<unsigned int> arr6(15);
    Array<unsigned int> arr7(3);
    Array<unsigned int> arr8(3);
    Array<float> arr9(3);
    try
    {
        std::cout << "********** Trying to assign arrays of different size and same type **********" << std::endl;
        arr5 = arr6;
        std::cout << "**********    Trying to assign arrays of same size and same type   **********" << std::endl;
        arr8 = arr7;
        std::cout << "array size: " << arr8.size() << std::endl;
        for (unsigned int i = 0; i < arr8.size(); i++)
            std:: cout << arr8[i] << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    Array<const int>* newArray = 0;
    newArray = new Array<const int>();
    try
    {
        std::cout << "array size: " << newArray->size() << std::endl;
        std::cout << (*newArray)[0] << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    if (newArray)
        delete newArray;
    return 0;
}

// #include <iostream>
// #include <Array.hpp>

// #define MAX_VAL 750
// int main(int, char**)
// {
//     Array<int> numbers(MAX_VAL);
//     int* mirror = new int[MAX_VAL];
//     srand(time(NULL));
//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         const int value = rand();
//         numbers[i] = value;
//         mirror[i] = value;
//     }
//     //SCOPE
//     {
//         Array<int> tmp = numbers;
//         Array<int> test(tmp);
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         if (mirror[i] != numbers[i])
//         {
//             std::cout << "didn't save the same value!!" << std::endl;
//             return 1;
//         }
//     }
//     try
//     {
//         numbers[-2] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cout << e.what() << '\n';
//     }
//     try
//     {
//         numbers[MAX_VAL] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cout << e.what() << '\n';
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         numbers[i] = rand();
//     }
//     delete [] mirror;//
//     return 0;
// }