#include <gmp.h>
#include <iostream>
#include <stdio.h>

// CURVE: y^2 = x^3 + Ax^2 + x
// FIELD: p = 2^255 - 19
const u_int32_t CURVE_A = 486662;
// GMP can convert this to a large integer for us
const char* CURVE_P_HEX = "7FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFED";

void print(std::string s) {
    std::cout << s;
}

int main() {
    // Some integer declarations to test the library
    mpz_t a;
    mpz_init (a);
    mpz_set_ui(a, CURVE_A);
    print("Hello GMP!\n");
    print("A is: ");
    mpz_out_str(stdout, 10, a);
    print("\n");
    mpz_t p;
    mpz_init (p);
    mpz_set_str(p, CURVE_P_HEX, 16);
    print("P is: ");
    mpz_out_str(stdout, 10, p);
    print("\n");
    print("Isn't that neat?\n");
    return 0;
}