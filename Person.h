//
// Created by ajs41 on 10/1/2018.
//

#ifndef PERSONROLES_PERSON_H
#define PERSONROLES_PERSON_H

#include "PersonRole.h"

class Person {
public:
    explicit Person(std::string name);
    std::string getName() const;
    void setName(const std::string name);
    PersonRole &getRole() const;
    void setRole(const PersonRole &role);
    void listenTo(std::string message);
private:
    std::string m_name;
    PersonRole *m_role; //cannot create instance of interface class but can point to it
};


#endif //PERSONROLES_PERSON_H
