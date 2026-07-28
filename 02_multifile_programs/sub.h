#pragma once // alternate header guard to #ifndef #define #endif

double sub(double x , double y){
    return x - y ;
}

//#ifndef #define #endif depends on name tag (Identifier) of macro , but #pragma one depends on location of file
//if there exist a copy of the same file , and we #include both, then i will cause compile error if they consists of definition.