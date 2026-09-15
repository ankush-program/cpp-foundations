#include <cstdio>
#include <cmath>

int main(){
    int num = 0;
    printf("Enter a number: ");
    scanf("%d",&num);

    int dig = 0, n = num;
    for(int i =  1; n > 0; i++){
        n /= 10;
        dig++;
    }
    printf("No.of digits: %d\n",dig);

    n = num;
    int rev = 0, a;
    for (int i = 1; i <= dig; i++){
        a = (n%10)*pow(10.0, dig-i);
        n /= 10;
        rev += a;
    }
    printf("Reverse of the number is: %d",rev);

    return 0;
}