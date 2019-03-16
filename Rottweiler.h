#ifndef ROTTWEILER_H
#define ROTTWEILER_H

#include "Dog.h"

class Rottweiler : public Dog {
    public:
        /** Default constructor */
        Rottweiler(string dogName, int age, int weight);
        string displayDogBreed();
        /** Default destructor */
        virtual ~Rottweiler();
    protected:
    private:
};

#endif // ROTTWEILER_H
