#include "Human.hpp"

void Human::meleeAttack(std::string const & target) {
    std::cout << "maleeAttack at " << target << std::endl;
}

void Human::rangedAttack(std::string const & target) {
    std::cout << "rangedAttack at " << target << std::endl;
}

void Human::intimidatingShout(std::string const & target) {
    std::cout << "intimidatingShout at " << target << std::endl;
}

// // declare pointer to data member
//   int X::*ptiptr = &X::a;

//   // declare a pointer to member function
//   void (X::* ptfptr) (int) = &X::f;

// arr    //arr 
// arr [] //is an array (so index it)
// * arr [] //of pointers (so dereference them)
// (* arr [])() //to functions taking nothing (so call them with ())
// void (* arr [])() //returning void 

void Human::action(std::string const & action_name, std::string const & target) {
    //definition of a pointer to specific class member
    //void (Human::*ptrfoo) (std::string const &) = &Human::rangedAttack;
    int index = 0;
    //define type of *pointer to class member function*
    typedef void (Human::*MembersArray) (std::string const &);
    //array of pointers of defined type
    MembersArray membarr[3];

    membarr[0] = &Human::meleeAttack;
    membarr[1] = &Human::rangedAttack;
    membarr[2] = &Human::intimidatingShout;

    if(action_name.compare("meleeAttack") == 0)
        index = 0;
    else if(action_name.compare("rangedAttack") == 0)
        index = 1;
    else if(action_name.compare("intimidatingShout") == 0)
        index = 2;
    else {
        std::cerr << "unknown action!\n";
        return ;
    }

    (this->*membarr[index])(target);
}
