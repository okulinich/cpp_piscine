#include "Pony.hpp"

static void ponyOnTheHeap() {
    Pony *pony1 = new Pony;

    pony1->setAge(12);
    pony1->setName("Vergiliy");
    pony1->setStatus(0);

    std::cout << "Pony " << pony1->getName() << " with age ";
    std::cout << pony1->getAge() << " is now free (status == " << pony1->getStatus() << ")\n";

    delete pony1;
}

static void ponyOnTheStack() {
    Pony pony1;

    pony1.setAge(3);
    pony1.setName("Baby");
    pony1.setStatus(1);

    std::cout << "Pony " << pony1.getName() << " with age ";
    std::cout << pony1.getAge() << " is now slave (status == " << pony1.getStatus() << ")\n";
}

int main() {
    ponyOnTheHeap();
    ponyOnTheStack();

    return 0;
}
