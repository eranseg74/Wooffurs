#ifndef DOBERMAN_H
#define DOBERMAN_H

#include "Dog.h"

class Doberman : public Dog {
    public:
        /** Default constructor */
        Doberman(string dogName, int age, int weight);
        string displayDogBreed();
        /** Default destructor */
        virtual ~Doberman();
    protected:
    private:
};

#endif // DOBERMAN_H
