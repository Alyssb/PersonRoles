//
// Created by ajs41 on 10/3/2018.
//

#ifndef PERSONROLES_TEACHERROLE_H
#define PERSONROLES_TEACHERROLE_H

#include "Person.h"
#include "PersonRole.h"

class TeacherRole : public PersonRole{
public:
    TeacherRole(const Person &person);
    std::string getRoleName() const override;
    void drink();
private:
    const Person &m_person;

};


#endif //PERSONROLES_TEACHERROLE_H
