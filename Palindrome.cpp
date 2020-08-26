#include <iostream>

bool isPalindrome(const std::string &str)
{
   if (str.empty())
      return false;
   int i =0;
   int j = str.length() -1;
   
   while( i< j)
   {
      if (std::toupper(str[i++]) != std::toupper(str[j--]))
        return false;
   }
   return true;
 }
 
 int main()
 {
    //  check for palindrome on sample string
    std::string s = "Step on no pets";
    if(isPalindrome(s))
       std::cout << "given string is palindrome" <<std::endl;
    else
       std::cout << "given string is not palindrome" <<std::endl;
       
    return 0 ;
 }
