/*
7. Reverse Integer
Easy

4323

6673

Add to List

Share
Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.

Assume the environment does not allow you to store 64-bit integers (signed or unsigned).

 

Example 1:

Input: x = 123
Output: 321
Example 2:

Input: x = -123
Output: -321


*/class Solution {
public:
    int reverse(int x) {
         int remainder;
        int rev=0;
        while(x!=0){
            remainder=x%10;
            x=x/10;
                        if (rev > INT_MAX/10 || (rev == INT_MAX / 10 && remainder > 7)) return 0;
            if (rev < INT_MIN/10 || (rev == INT_MIN / 10 && remainder < -8)) return 0;
            rev=(rev*10)+remainder;
            
        }
       
        
         return rev;
    }
   
};
