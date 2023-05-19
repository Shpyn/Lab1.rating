#include <iostream>
#include "Assessment.h"
#include "Module.h"
#include "Test.h"
#include "Exam.h"
#include "Coursework.h"
#include "Mathematics.h"

int main() {
    // Создание объектов оценок для каждого предмета
    Mathematics* math = nullptr;
    Module* mathModule2 = nullptr;
    Test* mathTest = nullptr;
    Coursework* mathCoursework = nullptr;

    while (true) {
        int subject;

        std::cout << "Enter the subject\n";
        std::cout << "1 - Math\n2 - Physics\n3 - Chemistry\n4 - Engineering\n";
        std::cin >> subject;

        // Math 
        if (subject == 1) {
            int mathModule1Mark, mathModule2Mark, mathTestMark, mathCourseworkMark;
            int passtime;
            std::cout << "Math consists of module 1, module 2, coursework, and test\n";

            std::cout << "Enter marks for Math Module 1: ";
            std::cin >> mathModule1Mark;

            if (mathModule1Mark < 25) {
                std::cout << "Module not passed\n";
            }
            else {
                std::cout << "Passed in time?\n1 - yes\n0 - no\n";
                std::cin >> passtime;

                if (passtime == 0) {
                    math = new Mathematics(25);
                }
                else {
                    math = new Mathematics(mathModule1Mark);
                }
            }

            std::cout << "Enter marks for Math Module 2: ";
            std::cin >> mathModule2Mark;
            mathModule2 = new Module(mathModule2Mark);

            std::cout << "Passed in time?\n1 - yes\n0 - no\n";
            std::cin >> passtime;

            if (passtime == 0) {
                mathModule2 = new Module(25);
            }
            else {
                mathModule2 = new Module(mathModule2Mark);
            }

            std::cout << "Enter marks for Math Coursework: ";
            std::cin >> mathCourseworkMark;
            mathCoursework = new Coursework(mathCourseworkMark);

            std::cout << "Enter marks for Math Test: ";
            std::cin >> mathTestMark;
            mathTest = new Test(mathTestMark);

            int mathRating = math->calculateRating();
            std::cout << "Mathematics Rating: " << mathRating << std::endl;
        }
        // Physics
        else if (subject == 2) {
            // TODO: Реализовать код для Physics
        }
        // Chemistry
        else if (subject == 3) {
            // TODO: Реализовать код для Chemistry
        }
        // Engineering
        else if (subject == 4) {
            // TODO: Реализовать код для Engineering
        }
        else {
            break;
        }
    }

    // Освобождение памяти
    delete math;
    delete mathModule2;
    delete mathTest;
    delete mathCoursework;

    return 0;
}
