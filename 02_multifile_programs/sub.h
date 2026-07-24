#pragma once // alternate header guard to #ifdef #define #endif

double sub(double x , double y){
    return x - y ;
}


//#ifdef #define #endif depends on name tag of macro , but #pragma one depends on location of file , if there exist a copy of the same same file , and we #iclude both, then i will cause compile error if they consists of definition.