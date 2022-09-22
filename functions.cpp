#include "easy.h"
#include <iostream>


void itc_name(){
    std::cout << "Stephan";
}

void itc_fio(){
    itc_name();
    std::cout << " Zhdanov Alexeevitch";
}

int itc_abs(int num){
    if (num < 0){
        return -num;
    }
    return num;
}
double itc_fabs(double num){
    if (num < 0){
        return -num;
    }
    return num;
}
int itc_revnbr(int num){
    if (num / 100 == 0){
        return num;
    }else{
        int w = num / 100 + (num % 10) * 100 + (10 * (num / 10) - 100 * (num / 100));
        return w;
    }
}

