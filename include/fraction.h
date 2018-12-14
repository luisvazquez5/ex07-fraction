//
// Created by luis on 12/14/18.
//

#ifndef EX07_FRACTION_FRACTION_H
#define EX07_FRACTION_FRACTION_H

#include <cstdint>
namespace edu {
    namespace vcccd{
        namespace vc {
            namespace csv13 {
                class Fraction {

                public:
                    Fraction(int64_t numerator, int64_t denominator) {
                        this->numerator = numerator;
                        this->denominator = denominator;
                    }

                public:
                    int64_t getNumerator() const;

                    int64_t getDenominator() const;

                    double getRealValue() const;


                    void setNumerator(int64_t numerator);

                    void setDenominator(int64_t denominator);

                    void output();

                private:
                    int64_t numerator;
                    int64_t denominator;

                    int gcd(int64_t numerator, int64_t denominator);



                };
            }
        }
    }
}

#endif //EX07_FRACTION_FRACTION_H
