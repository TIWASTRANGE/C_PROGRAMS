#include <iostream> // declaring the standard input output library for basic funtionalities
#include <string> // declaring the  Standard <string> library
#include <istream>
using namespace std;
int main(){
int a=5; // initialising a value 5
float b(3.3); // initialising a value 3.3 using the constructor initialisation method. this method goes with int as well.
double (c);
string my_string = "hello world!"; // creating a string variable

cout<<my_string<<endl; // printing the output of the string variable

//since the string var (my_string) was declared with no initial value, its final value can be changed.
//this is same as all other basic data types.
my_string = "this is the second string";
cout<<my_string<<endl;
 my_string = "this is a wide character string";
 cout<<my_string<<endl;
 //operations in C++. note that all these operations are same as C programs oprations
 c = b + a;
 cout<<"C1 = ";
 cout<<c<<endl;

 c += b; // c=c+b
 cout<<"C2 = ";
 cout<<c <<endl;

 c *=b; // c=c*b
 cout<<"C3 = ";
 cout<<c <<endl;

 c /=a; // c=c/a
 cout<<"C4 = ";
 cout<<c<<endl;
 int x = sizeof(a);
 int y = sizeof(b);
int s = sizeof(my_string);
cout<<"the size of a string in bytes is ";
cout<<s<<endl;
cout<<"the size of an integer in bytes is ";
cout<<x<<endl;
cout<<"the size of a floating point value in bytes is ";
cout<<y<<endl;
int z;
b = int(c); //this is type casting, that is changing from one data type to another
cout<<b<<endl;
cout<<"enter a value: ";
cin >> z; //this allows the user to enter an input after it has been declared.
b= z*c;
cout<<"the output is ";
cout<<b<<endl;
cout<<"thank you"<<endl;
cout<<"    **    **     "<<endl;
cout<<"   ****  ****    " <<endl;
cout<<"  ************   " <<endl;
cout<<" **************  " <<endl;
cout<<"**************** "<<endl;
cout<<"**************** " <<endl;
cout<<" **************  " <<endl;
cout<<"  ************   " <<endl;
cout<<"   **********    " <<endl;
cout<<"    ********     " <<endl;
cout<<"     ******      " <<endl;
cout<<"      ****       " <<endl;
cout<<"       **        " <<endl;

return 0;

}
