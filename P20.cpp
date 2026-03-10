#include<iostream>
#include<fstream>
using namespace std;
int main(){

ifstream file ("student.txt");
string line;
cout << "student information is ....."<<endl;
while (getline(file,line))
{
    cout <<line <<endl;

}
file.close();
return 0;







}
