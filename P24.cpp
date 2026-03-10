#include<iostream>
using namespace std;
class Reactangle
{
public:
    int width ;
    int lenght;


    void display()
    {
        cout << "lenght:" <<lenght <<endl;
        cout << "Width: " <<width <<endl;
        cout << "Area of the rect:" << (lenght*width) <<endl;
        cout << "Perimeter of the react:" << (2* (lenght+width)) <<endl;







    }



};
int main()
{

    Reactangle react;
    react.lenght=6;
    react.width=5;
    react.display();
    return 0;







}
