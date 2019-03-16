#ifndef AKITA_H
#define AKITA_H

#include "Dog.h"

class Akita : public Dog {
    public:
        /** Default constructor */
        Akita(string dogName, int age, int weight);
        float getBasePremium();
        string displayDogBreed();
        /** Default destructor */
        virtual ~Akita();
    protected:
    private:
};

#endif // AKITA_H
