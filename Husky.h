#ifndef HUSKY_H
#define HUSKY_H

#include "Dog.h"

class Husky : public Dog {
    public:
        /** Default constructor */
        Husky(string dogName, int age, int weight);
        string displayDogBreed();
        /** Default destructor */
        virtual ~Husky();
    protected:
    private:
};

#endif // HUSKY_H
