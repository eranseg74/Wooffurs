#ifndef GERMANSHEPHERD_H
#define GERMANSHEPHERD_H

#include "Dog.h"

class GermanShepherd : public Dog {
    public:
        /** Default constructor */
        GermanShepherd(string dogName, int age, int weight);
        string displayDogBreed();
        /** Default destructor */
        virtual ~GermanShepherd();
    protected:
    private:
};

#endif // GERMANSHEPHERD_H
