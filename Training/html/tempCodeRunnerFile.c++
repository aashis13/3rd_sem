bool isPrime(int num) {
    if (num <= 1) return false;
    if (num <= 3) return true;
    if (num % 2 == 0 || num % 3 == 0) return false;
    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) return false;
    }
    return true;
}

int nearestPrime(int num) {
    if (num <= 1) return 2;
    int lower = num - 1;
    int upper = num + 1;
    while (true) {
        if (isPrime(upper)) return upper;
        if (isPrime(lower)) return lower;
        upper++;
        lower--;
    }
}

int main() {
    int prime;
    std::cout << "Enter a prime number: ";
    std::cin >> prime;

    if (!isPrime(prime)) {
        std::cout << prime << " is not a prime number." << std::endl;
        return 1;
    }

    int nearest = nearestPrime(prime);
    std::cout << "The nearest prime number to " << prime << " is " << nearest << "." << std::endl;

    return 0;
}