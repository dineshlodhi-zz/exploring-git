#include <iostream> 

using namespace std; 

#define X 1000

void printAllMatrixPathsHelper(int m[X][X], int r, int c, int i, int j, int path[], int pi){
  
  if(pi == r+c-1 && i==j){
	for(int k = 0; k < pi; k++)
      cout<< path[k] << " ";
    cout<<endl;
}
if(i<0 || i > r-1 || j<0 || j > c-1)
  return;

path[pi] = m[i][j];
printAllMatrixPathsHelper(m,r,c,i+1,j,path,pi+1);
printAllMatrixPathsHelper(m,r,c,i,j+1,path,pi+1);




}
void printAllMatrixPaths(int m[X][X], int r, int c) {
    
  int path[r+c];
  printAllMatrixPathsHelper(m, r, c, 0, 0, path, 0); 

}


int main(){
int m[X][X];

for(int i =0 ; i< 2; i++)
for(int j =0; j<2; j++)
m[i][j] = i+j;
printAllMatrixPaths(m, 2,2);

return 0;
}
