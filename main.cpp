#include <iostream>
#include "Person.h"
#include "PersonRole.h"
#include "StudentRole.h"
#include "TeacherRole.h"

int main() {
    Person jim{};
    PersonRole *studentRole = new StudentRole{jim};
    PersonRole *teacherRole = new TeacherRole{jim};

    jim.addRole(studentRole);
    jim.addRole(teacherRole);

    std::cout << "roles played by jim:" std::endl;
    for (PersonRole* role : jim.getRoles()) {
        std::cout << role->getRoleName() << std::endl;
    }

    return EXIT_SUCCESS;
}