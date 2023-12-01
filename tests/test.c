#include "unity.h"
#include "../src/main.c" // fichier contenant la fonction de comptage de voyelles

void test_count_vowels() {
    TEST_ASSERT_EQUAL_INT(2, count_vowels("Hello World"));
    TEST_ASSERT_EQUAL_INT(5, count_vowels("AEIOUaeiou"));
    TEST_ASSERT_EQUAL_INT(0, count_vowels(""));
}

int main() {
    UNITY_BEGIN();
    RUN_TEST(test_count_vowels);
    return UNITY_END();
}
