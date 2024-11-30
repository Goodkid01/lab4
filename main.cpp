#include <iostream>
#include <climits>
#include <cfloat>
#include <iomanip>
#include <cmath>


int main() 
{
    int a;
    int b;
    int c;
    std::cin>>a;
    std::cin>>b;
    std::cin>>c;
    int AB=a+b;

    if((AB/c*c==AB)&&(c/b*b==c))
    {
        std::cout<<((a+b)/c)-(c/b)<< std::endl;
    }
    if((AB/c*c==AB)&&(c/b*b!=c))
    {
        std::cout<<(((a+b)/c)+(b*c))<< std::endl;
    }
    else
    {
        std::cout<<a-b+c<<std::endl;

    }
    int err;
    std::cin>>err;
    switch(err)
    {
        case 0: std::cout<<"все хорошо";
            break;
        case 1: std::cout<<"ошибка чтения файла";
            break;
        case 2: std::cout<<"ошибка записи файла";
            break;
        case 3: std::cout<<"не все поля определены ";
            break;
        default : std::cout<<"нет такой ошибки";
            break;

    }
    int x;
    std::cin>>x;
    if(x==-1)
    {
        std::cout<<"Negative number"<<std::endl;
    }
    else
    {
        std::cout<<"Positive number"<<std::endl;
    }
}
