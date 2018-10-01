//
// Created by ajs41 on 10/1/2018.
//

#ifndef PERSONROLES_PERSONROLE_H
#define PERSONROLES_PERSONROLE_H

#include <string>

class PersonRole {
public:
    virtual std::string getRoleName() const = 0;
    virtual ~PersonRole() = default;
};


#endif //PERSONROLES_PERSONROLE_H
