
#include <iostream>
#include <string>
#include <cstdlib>
#include <sstream>
using namespace std;
int main0() {
// To convert from string to float use atof function
// atof needs #include<cstdlib>
string s = "3x2+2x1+4x3=16" ;
float v;
v = atof(s.c_str());
cout<<v<<endl;
// To convert float-to string use ostringstream variable
// ostringstream needs #include<sstream>
// ostringstream variables are used in a similar way to cout
// Then get the string from the ostringstream using .str
float d = 1.55;
string str;
ostringstream ss;
ss << d;
str = ss.str();
cout<<str<<endl;
return 0;
}
