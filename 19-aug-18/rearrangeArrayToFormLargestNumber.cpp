#include <bits/stdc++.h>
using namespace std;

bool compare(int x, int y){
 string a = to_string(x);
 string b = to_string(y);

 string ab = a+b;
 string ba = b+a;
  
 return ab.compare(ba) > 0;
}
void rearrangeArrayToFormLargestNumber(int a[], int n)
{
 sort(a, a+n, compare);
}

void main(){

cout <<"you are good!" ;
return 0;
}
