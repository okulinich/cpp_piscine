#include "Human.hpp"

int main() {
    Human bob;
    bob.action("meleeAttack", "bank");
    bob.action("rangedAttack", "London");
    bob.action("intimidatingShout", "tower");
    bob.action("kill everyone", "tower");
    
    return 0;
}
