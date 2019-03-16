#ifndef GREATDANE_H
#define GREATDANE_H

#include "Dog.h"

class GreatDane : public Dog {
    public:
        /** Default constructor */
        GreatDane(string dogName, int age, int weight);
        string displayDogBreed();
        /** Default destructor */
        virtual ~GreatDane();
    protected:
    private:
};

#endif // GREATDANE_H
