#ifndef PRESACANARIO_H
#define PRESACANARIO_H

#include "Dog.h"

class PresaCanario : public Dog {
    public:
        /** Default constructor */
        PresaCanario(string dogName, int age, int weight);
        string displayDogBreed();
        /** Default destructor */
        virtual ~PresaCanario();
    protected:
    private:
};

#endif // PRESACANARIO_H
