//
// Created by ajs41 on 10/1/2018.
//

#ifndef PERSONROLES_STUDENTROLE_H
#define PERSONROLES_STUDENTROLE_H

#include "PersonRole.h"
#include "Person.h"

class StudentRole : public PersonRole {
public:
    StudentRole();
    std::string getRoleName() const override;
    void procrastinate() const;
    void complainTo(const Person &person);
private:
    const Person &person;
    PersonRole *m_role;
};


#endif //PERSONROLES_STUDENTROLE_H
