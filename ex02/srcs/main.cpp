#include "Array.hpp"

int main()
{
    Array<const char, 5> arr(5);
    try
    {
        for (int i = 0; i < 5; i++)
            std:: cout << arr[i] << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << arr.size() << std::endl;
    

    return 0;
}