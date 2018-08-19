#include <bits/stdc++.h>
using namespace std;

bool isOpeningBracket(char b) {
  if(b == '(' || b == '{' || b == '[')
  	return true;
  else 
   return false;
}
bool isClosingBracket(char b){
	if(b == ')' || b == '}' || b == ']')
  		return true;
  	else 
   		return false;
}

bool isMatchingBracket(char a, char b){
 if(a == '(' && b == ')')
   return true;
 if(a == '{' && b == '}')
   return true;
 if(a == '[' && b == ']')
   return true;
 return false;
}

bool validateParenthesis(char s[])
{
        stack<char> stk;
        // Complete code
        int length = strlen(s);
        for(int i=0; i<length; i++){
        	if(isOpeningBracket(s[i])){
             stk.push(s[i]);
            } else if(!stk.empty() && isClosingBracket(s[i])){                                       	if(isMatchingBracket(stk.top(), s[i])){
                   stk.pop();
                 } else {
                 	return false ; 
                 }
           }
                                                             
        }
  		// check if stack is empty or not.
  		if(!stk.empty()){
         return false;
        }else {
         return true;
        }
}
