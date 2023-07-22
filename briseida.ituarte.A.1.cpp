#include <stdio.h>
#include <iostream>

int main()
{
    int años;
    std::cout <<"ingresa tus años:";
    std::cin >>años;
    
    if (años>=18){
        std::cout <<"listo para trabajar." << std::endl;
    }else if (años<12){
        std::cout <<"acaba tus estudios." << std::endl;    
    }else {
        std::cout <<"pocos años para trabajar" << std::endl;
    }
    
    return 0;
}