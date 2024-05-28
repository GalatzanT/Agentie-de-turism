#ifndef LAB8_9_ERRORS_H
#define LAB8_9_ERRORS_H


#include <string>
#include <utility>
#include <utility>

using namespace std;

class Exception {
    string msg;
public:
    explicit Exception(string m) : msg{std::move(std::move(m))} {
    }

    string getMessage() {
        return msg;
    }
};
#endif //LAB8_9_ERRORS_H
