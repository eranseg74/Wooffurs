#ifndef PITBULL_H
#define PITBULL_H

#include "Dog.h"

class Pitbull : public Dog {
    public:
        /** Default constructor */
        Pitbull(string dogName, int age, int weight);
        string displayDogBreed();
        /** Default destructor */
        virtual ~Pitbull();
    protected:
    private:
};

#endif // PITBULL_H
