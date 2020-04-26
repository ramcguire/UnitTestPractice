#include "Practice.h"
#include <string>

using std::string;
using std::tolower;

// Receive three integers and rearrange their values so that they are in
// descending order from greatest (first) to least (third)
void Practice::sortDescending(int & first, int & second, int & third)
{
  if( first < second )
  {
    int temp = first;
    first = second;
    second = temp;
  }
  if( second < third )
  {
    int temp = second;
    second = third;
    third = temp;
  }
  if( first < third )
  {
    int temp = first;
    first = third;
    third = temp;
  }
}

// Receive a string and return whether or not it is strictly a palindrome,
// where it is spelled the same backwards and forwards when considering every
// character in the string, but disregarding case ('x' is the same as 'X')
bool Practice::isPalindrome(string input)
{
 
  auto start = input.begin();
  for(auto end = input.rbegin(); end !=input.rend(); end++) {
    // advance either begin or rbegin past any spaces
    while(*start == ' ') {
      start++;
    }
    while(*end == ' ') {
      end++;
    }
    if (tolower(*end) != tolower(*start)) {
      return false;
    }
    start++;
  }
  return true;


//  for(unsigned int i=0; i < input.size(); i++)
//   {
//     if( input[i] < 'A' || input[i] > 'Z' )
//     {
//       //change lower case to upper case
//       input[i] = input[i] - ('a' - 'A');
//     }
//   }
  // for(int i=0; i < input.size()/2; i++)
  // {
    
  //   if( input[i] != input[input.size()-1-i] )
  //     return false;
  // }
  // return true;
}
