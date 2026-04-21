#include<stdio.h>

// Prime Check :

int isPrime(int n) {
    if(n <= 1){
        return 0;
    }
    for(int i = 2; i * i <= n; i++){
        if(n % i == 0){
            return 0;
        }
    }
    return 1;
}

// Armstrong check :

int isArmstrong(int n){
    int temp = n;
    int digit = 0;
    int sum = 0;

    while( temp > 0 ){
        digit++;
        temp = temp  / 10;
    }

    temp = n;

    while(temp > 0){
        int remainder = temp % 10;
        int power = 1;

        for(int i = 0; i < digit ; i++){
            power = power * remainder;
        }

        sum = sum + power;
        temp = temp / 10;
    }

    return sum == n;
}

// Palindrome Check : -

int isPalindrome(int n){
    int rev = 0;
    int temp = n;

    while(temp > 0){
        rev = rev * 10 + temp % 10;
        temp = temp / 10;
    }

    return rev == n;
}

//Digit Count :

int countDigit(int n){
    int count = 0;
    while(n > 0){
        count++;
        n = n / 10;
    }
    return count;
}

// Factorial :

long faactorial(int n){
    if(n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);

}

int main(){
    int choice, n;

    printf("--- NUMBER ANALYZER TOOL ---\n");
    printf("1. Check Prime\n");
    printf("2. Check Armstrong\n");
    printf("3. check Palindrome\n");
    printf("4. Count Digits\n");
    printf("5. Factorial\n");
    printf("Enter Your Choice: ");
    scanf("%d",&choice);

    printf("ENTER NUMBERS: ");
    scanf("%d",&n);

    switch(choice){
        case 1: printf(isPrime(n) ? "Prime\n" : "Not Prime\n");
        break;

        case 2: printf(isArmstrong(n) ? "Armstrong\n" : "Not Armstrong\n" );
        break;

        case 3: printf(isPalindrome(n) ? "Palindrome\n" : "Not Palindrome\n");
        break;

        case 4: printf("Digits: %d\n", countDigit(n));
        break;

        case 5: printf("Factorial : %ld\n", factorial(n));
        break;

        default:
        printf("InValid Choice\n");

    }
    return 0;
}