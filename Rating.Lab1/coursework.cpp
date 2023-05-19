#include "coursework.h"

Coursework::Coursework(int mark)
    : mark(mark) {}

bool Coursework::isPassed() const {
    return mark >= 25;
}

int Coursework::getMark() const {
    return mark;
}

