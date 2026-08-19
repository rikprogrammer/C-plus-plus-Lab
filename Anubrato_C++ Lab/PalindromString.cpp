#include <iostream>
int main()
{

    char str[100];
    
    std::cout << "Enter a string: ";
    std::cin >> str;
    
    int length = 0;
    while (str[length] != '\0')
	{
        length++;
    }
    
	int start = 0;
    int end = length - 1;
    bool isPalindrome = true;
    
    while (start < end)
	 {
        if (str[start] != str[end]) 
		{
            isPalindrome = false;
            break; 
        }
        start++;
        end--;
    }
    
    if (isPalindrome) 
	{
        std::cout << str << " is a palindrome." << std::endl;
    } else {
        std::cout << str << " is not a palindrome." << std::endl;
    }
    
    return 0;
}
