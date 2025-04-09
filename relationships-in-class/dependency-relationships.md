# Dependency relationships

In Dependency relationships class diagrams, a dependency relationship indicates that a change to one class, the supplier, might cause a change in the other class, the consumer. The supplier is independent because a change in the consumer does not affect the supplier.

For example, a Cart class depends on a Product class because the Product class is used as a parameter for an add operation in the Cart class. In a class diagram, a dependency relationship points from the Cart class to the Product class. In other words, the Cart class is the consumer element, and the Product class is the supplier element. A change to the Product class may cause a change to the Cart class.

In class diagrams, dependency relationships in a C/C++ application connect two classes to indicate that there is a connection between the two classes, and that the connection is more temporary than an association relationship. A dependency relationship indicates that the consumer class does one of the following things:

### Temporarily using a supplier class that has global scope:

- The consumer class might use a global utility or a globally accessible service provided by the supplier class. The dependency here is temporary because the consumer class does not necessarily maintain or hold any reference to the supplier class long-term.

- Example: A Car class using a global Logger class to log an event while the Car is being created. The Car does not hold a reference to Logger, it only calls Logger temporarily.

### Temporarily using a supplier class as a parameter for one of its operations:

- The consumer class might pass an instance of the supplier class as a parameter in a method or constructor. The relationship exists only while the method or constructor is executing and does not persist after the method ends.

- Example: If a Garage class has a method repairCar(Car car), it is temporarily using the Car class as a parameter.

### Temporarily using a supplier class as a local variable for one of its operations:

- In this case, the consumer class uses the supplier class only for a short-lived purpose, such as within a single method, where the supplier class is instantiated as a local variable or temporary object.

- Example: If a CarOwner class uses a Car object in a temporary variable for some calculations or actions within a method, this is a dependency.

### Sending a message to a supplier class:

- The consumer class may send a message (method call) to the supplier class. This means that the consumer class relies on the supplier to provide a service or behavior at some point during execution, but again, this is a temporary interaction.

- Example: A Driver class might send a message like startEngine() to a Car class. Here, the Driver class depends on the Car class to perform this operation.
