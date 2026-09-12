#include <cstdio>
#include <ioqtream>

int main(){
    int a;
    long b;
    char c;
    float d;
    double e;
    scanf("%d %ld %c %f %lf",&a,&b,&c,&d,&e);
    printf("%d\n%ld\n%c\n%f\n%lf",a,b,c,d,e);

    bool f = true;
    std::cout << f ;    // cout outputs bool as 0,1 by default

    std::cout << std::boolalpha;    // To output true, false
    std::cout << f ;
    //similar for cin -- default input- 0,1
    //                -- std::cin>>boolaplha; for true, false as input

    //To change this bool configuration to again 0,1 , use std::noboolalpha

    return 0;
}
