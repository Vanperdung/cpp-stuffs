// Implements the dependency relationship in dependency-relationships.png by Cpp

class classCar
{
private:
    enumCarMake carMake;
    structTire carTires[4];
    classEngine carMotor;
    classPart carPartsList[100];
public:
    classCar();
    virtual ~classCar();
    void GetCarLog(classCarLoc& carLoc);
};

class classCarLoc
{
public:
    classCarLoc();
    ~classCarLoc();
};

// GetCarLog method of classCar uses the classCarLoc as a parameter.
// => classCarLoc is supplier, classCar is consumer.
// A change to classCarLoc can make the input parameter of GetCarLog change too.
// For example the carMake attribute takes value from carLoc, parameter changes => carLoc might change.
// And classCar is independent