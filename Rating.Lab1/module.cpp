#include "module.h"

Module::Module(int mark)
    : mark(mark) {}

bool Module::isPassed() const {
    return mark >= 25;
}

int Module::getMark() const {
    return mark;
}

