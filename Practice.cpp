#include "Practice.h"
#include <string>
#include <algorithm>

using std::string;
using std::tolower;
using std::swap;

// Receive three integers and rearrange their values so that they are in
// descending order from greatest (first) to least (third)
void Practice::sortDescending(int & first, int & second, int & third)
{
  if( first < second )
  {
    swap(first, second);
  }
  if( second < third )
  {
    swap(second, third);
  }
  if( first < second )
  {
    swap(first, second);
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
    while(*start == ' ' || !isalnum(*start)) {
      start++;
    }
    while(*end == ' ' || !isalnum(*end)) {
      end++;
    }
    if (tolower(*end) != tolower(*start)) {
      return false;
    }
    start++;
  }
  return true;
}
