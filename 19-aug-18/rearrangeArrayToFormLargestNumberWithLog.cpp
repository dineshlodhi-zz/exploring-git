#include <bits/stdc++.h>
using namespace std;

bool compare(int x, int y){
  if(x==0)
    return false;
  if(y==0)
    return true;
 int dx = 1 + (int)log10(x);
 int dy = 1 + (int)log10(y);
 int xy = x * (int)pow(10, dy) + y;
 int yx = y * (int)pow(10,dx) + x;
 return xy - yx > 0 ;
}
void rearrangeArrayToFormLargestNumber(int a[], int n)
{
 sort(a, a+n, compare);
}

