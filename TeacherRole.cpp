//
// Created by ajs41 on 10/3/2018.
//

#include "TeacherRole.h"

#include <iostream>
#include "TeacherRole.h"

TeacherRole::TeacherRole(const Person &person) {

}

std::string TeacherRole::getRoleName() const {
    return "Teacher";
}

void TeacherRole::drink() {
    std::cout << "okay" << std::endl;
}
