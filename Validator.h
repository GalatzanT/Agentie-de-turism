//
// Created by tudor on 17/05/2024.
//

#ifndef LAB8_9_VALIDATOR_H
#define LAB8_9_VALIDATOR_H


#include <string>

using namespace std;

class Validator {
public:
    static void validateOferta(const string &denumire, const string &destinatie, const string &tip, int pret);
};
#endif //LAB8_9_VALIDATOR_H
