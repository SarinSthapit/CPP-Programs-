#include<iostream>

int main()
{
    int n, remainder, temp, sum = 0;
    std::cout << "Enter a number: ";
    std::cin >> n;
    
    temp = n;
    
    while(temp > 0)
    {
        remainder = temp%10;
        sum = (sum * 10) + remainder;
        temp = temp/10;
    }
    std::cout << std::endl;
    if(sum==n)
    {
        std::cout<<"It is a Palindrome Number.";
    }
    
    else
    {
        std::cout<<"It is not a Palindrome Number.";
    }
    
    return 0;
}
