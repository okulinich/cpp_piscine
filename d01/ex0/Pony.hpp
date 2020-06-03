#include <iostream>

class Pony {
    enum class Pony_status {
        STATUS_FREE,
        STATUS_SLAVE
    };
    private:
        std::string name;
        int age;
        Pony_status cur_status = Pony_status::STATUS_SLAVE;
    public:
        void setName(std::string name);
        void setAge(int age);
        void setStatus(int st);
        std::string getName();
        int getAge();
        int getStatus();
};
