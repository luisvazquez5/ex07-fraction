//
// Created by luis on 12/14/18.
//
#include <iostream>
#include <cstdint>
#include <fraction.h>
#include <algorithm>
#include <numeric>

using namespace std;
namespace edu {
    namespace vcccd {
        namespace vc {
            namespace csv13 {
                int64_t Fraction::getNumerator() const {

                    return numerator;
                }


                int64_t Fraction::getDenominator() const {
                    return denominator;
                }

                void Fraction::setNumerator(int64_t numerator) {

                    this->numerator = abs(numerator);

                }


                void Fraction::setDenominator(int64_t denominator) {

                    this->denominator = abs(denominator);
                }

                double Fraction::getRealValue() const {
                    return 0;
                }

                int Fraction::gcd(int64_t numerator, int64_t denominator){
                    int64_t dividend = numerator >= denominator ? numerator : denominator;
                    int64_t divisor = numerator <= denominator ? numerator : denominator;
                    while(divisor != 0)
                    {
                        int64_t remainder = dividend % divisor;
                        dividend = divisor;
                        divisor = remainder;
                    }
                    return dividend;
                }

                void Fraction::output() {
                    if (denominator == 0 && numerator == 0) {
                        cout << "NAN";
                    } else if (denominator == 0) {
                        cout << "INF";
                    } else if (numerator == 0) {
                        cout << "0";
                    } else {
                        int gcdVal = gcd(numerator, denominator);
                        numerator = numerator / gcdVal;
                        denominator = denominator / gcdVal;
                        cout << numerator << " / " << denominator;
                    }
                };
            }}}}
