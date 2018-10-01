//
// Created by ajs41 on 10/1/2018.
//

#include <iostream>
#include "StudentRole.h"

using std::cout;
using std::endl;

StudentRole::StudentRole(const Person &person) : m_person{person}{

}

std::string StudentRole::getRoleName() const {
    return "Student";
}

void StudentRole::procrastinate() const {
    cout << "Leave me alone; I'm procrastinating" << endl;
}

void StudentRole::complainTo(const Person &person) {
    person.listenTo("I hate my teacher");
}
