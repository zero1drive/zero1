#include <iostream>
#include <cmath> 
using namespace std;


bool primeNum(int n) {
    if (n < 2) return false;
      for (int i = 2; i <= sqrt(n); i++) { // sqrt function suggested by ChatGPT
        if (n % i == 0) return false;
    }
    return true;
}
// long long data type suggested by ChatGPT
long long sum(int limit) {
  long long sum = 0;

    for (int i = 2; i < limit; i++) {
        if (primeNum(i)) {
            sum += i;
        }
    }

    return sum;
}

int main() {
    /* Test 
    cout << "Sum of primes below 10: " << sum(10) << endl;
    */
    // Main problem
    cout << "Sum of all the primes below 2 million: " << sum(2000000) << endl;

    return 0;
}