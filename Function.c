// #include <stdio.h>
// void dost()
// {
//     printf("heloo frnds");
// }

// int main()

// {
//     dost();

//     return 0;
// }


prime number by function
#include <stdio.h>

int isPrime(int num) {
    if (num <= 1) return 0;

    for(int i = 2; i <= num/2; i++) {
        if(num % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    int n = 7;

    if(isPrime(n))
        printf("Prime Number");
    else
        printf("Not Prime");

    return 0;
}