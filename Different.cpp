#include <iostream>
using namespace std;

//Function to ptint natural numbers upto limit
int  naturalnumbers(int limit,int n){
     if(n>=limit){
        cout<<n;
        return 0;
     }
    cout<<n<<" ";
    return naturalnumbers(limit,n+1);
}

// Recursive function to calculate power
int power(int base, int exponent) {
    if (exponent == 0) {  
        return 1;
    }
    return base * power(base, exponent - 1);  // Recursive case
}

//Recursive function to calculate Number of digits in a Number
int count=0;
int digits(int n){
   if(n>0){
    count++;
   } else{
    return count;
   }
return digits(n/10);
}

//Recursive Function to calculate the factorail
long long int fact(int n){
   if(n==0||n==1){
    return 1;
   }
  return n* fact(n-1);
}
 


//Functions for transpoase of the Function
void Transpose(int arr1[][3],int n){
  cout<<"Tranpose of the Fucntion is : "<<endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j< 3; j++)
        {
          cout<<arr1[j][i]<<" ";
    }    
    cout<<endl;
}
}


// Reucursive fucntion for fabonacci series
int fabo(int n){
    if(n==0){
        return 0;
    }else if(n==1){
        return 1;
    }else{
        return fabo(n-1)*fabo(n-2);
}
}

//Recursive function to check whether a number is pirme or not
bool isPrimeRecursive(int num, int divisor = 2) {
    // Base cases:
    if (num <= 1) {
        return false; // Numbers less than or equal to 1 are not prime
    }
    if (num <= 3) {
        return true; // 2 and 3 are prime
    }
    if (num % divisor == 0) {
        return false; // Divisible by a number other than 1 and itself
    }
    if (divisor *divisor > num) {
        return true; // No divisors found up to the square root
    }

    // Recursive call to check divisibility with the next divisor
    return isPrimeRecursive(num, divisor + 1);
}

//bubbleSort for arrray
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
//Recursive Function to reverse an array
void reverseArray(int arr[], int start, int end) {
    if (start >= end)
        return;

    // Swap arr[start] and arr[end]
    swap(arr[start], arr[end]);

    // Recursively call the function for the remaining part of the array
    reverseArray(arr, start + 1, end - 1);
}

int calculateSecondaryDiagonalSum(int matrix[][100], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += matrix[i][n - i - 1]; // Access secondary diagonal element
    }
    return sum;
}


int reverseDigits(int num) {
    int reversed = 0;
    while (num > 0) {
        int lastDigit = num % 10;
        reversed = reversed * 10 + lastDigit;
        num /= 10;
    }
    return reversed;
}

//recursive Funcion to check wheter a number is palindrome or not 
int reverseDigits(int num) {
    int reversed = 0;
    while (num > 0) {
        int lastDigit = num % 10;
        reversed = reversed * 10 + lastDigit;
        num /= 10;
    }
    return reversed;
}

bool isPalindrome(int num) {
    return num == reverseDigits(num);
}
int main() {

    // cout<<power(2,3);
    cout<<fabo(5);
    for (int i = 0; i <5; i++)
    {
        cout<<fabo(i);
    }
    
    
    return 0;
}