#include <iostream>

bool primeNumber(int num)
{
    int count = 0;
    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
            count++;
    }
    if (count == 2)
        return true;
    else
        return false;
}

int main()
{
    int num;
    std::cout << "Enter the number:" << std::endl;
    std::cin >> num;

    if (num < 1)
    {
        std::cout << "The prime number can`t be less than 1";
        return 0;
    }

    std::cout << "The number is prime ?" << std::endl;

    if (primeNumber(num))
        std::cout << "Yes";
    else
        std::cout << "No";
}
