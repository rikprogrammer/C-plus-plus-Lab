#include <iostream>
int main()
{
  int num, temp = 0, rev = 0, rem;

  std::cout << "Enter any integer:- ";
  std::cin >> num;

  temp = num;

  while(temp != 0)
  {
    rem = temp % 10;
    rev = (rev * 10) + rem;
    temp = temp / 10;
  }
  
  if(rev == num)
    std::cout << "The entered number is Palindrome" << std:: endl;
  else
    std::cout << "The entered number is not Palindrome" << std:: endl;

  return 0;
}
