// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from inttypes.djinni

#include "assorted_integers.hpp"  // my header


bool operator==(const AssortedIntegers& lhs, const AssortedIntegers& rhs) {
    return lhs.eight == rhs.eight &&
           lhs.sixteen == rhs.sixteen &&
           lhs.thirtytwo == rhs.thirtytwo &&
           lhs.sixtyfour == rhs.sixtyfour &&
           lhs.o_eight == rhs.o_eight &&
           lhs.o_sixteen == rhs.o_sixteen &&
           lhs.o_thirtytwo == rhs.o_thirtytwo &&
           lhs.o_sixtyfour == rhs.o_sixtyfour;
}

bool operator!=(const AssortedIntegers& lhs, const AssortedIntegers& rhs) {
    return !(lhs == rhs);
}
