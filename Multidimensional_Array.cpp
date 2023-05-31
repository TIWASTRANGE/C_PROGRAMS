#include<iostream>
#include<istream>
int main ()
{

int jimmy [HEIGHT][WIDTH];
int n,m;
 for (n=0;n<HEIGHT;n++){
 for (m=0;m<WIDTH;m++)
 {
 jimmy[n][m]=(n+1)*(m+1);
 }
 }
 return 0;
}
