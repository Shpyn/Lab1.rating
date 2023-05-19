#include "Test.h"
Test::Test(int mark)
    : mark(mark) {}

bool Test::isPassed() const {
    return mark >= 25;
}

int Test::getMark() const {
    return mark;
}

