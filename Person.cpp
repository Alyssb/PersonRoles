//
// Created by ajs41 on 10/1/2018.
//

#include "Person.h"

Person::Person(std::string name) : m_name{name}, m_role{nullptr} {

}

std::string Person::getName() const {
    return m_name;
}

PersonRole & Person::getRole() const {
    return *m_role;
}

void Person::setName(const std::string name) {
    m_name = name;
}

void Person::setRole(const PersonRole &role) {
    delete m_role;
    *m_role = role; //the object being pointed to by this pointer is this object
}

void Person::listenTo(std::string message) {

}
