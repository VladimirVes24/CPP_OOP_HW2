#include <iostream>

//Task 1 ================================================================================================================================

class Person
{
public:
    
    void setGender(std::string inputGender)
    {
        gender = inputGender;
    }

    void setName(std::string inputName)
    {
        name = inputName;
    }

    void setWeight(int inputWeight)
    {
        weight = inputWeight;
    }

    void setAge(int inputAge)
    {
        age = inputAge;
    }

    std::string getName()
    {
        return name;
    }

    std::string getGender()
    {
        return gender;
    }

    int getAge()
    {
        return age;
    }

    int getWeight()
    {
        return weight;
    }

private:
    std::string name, gender;
    int age = 0, weight = 0;
};

class Student : public Person
{
public:
    Student(std::string inputGender, std::string inputName, int inputWeight, int inputAge, int inputYear, int *counter)
    {
        this->setAge(inputAge);
        this->setGender(inputGender);
        this->setName(inputName);
        this->setWeight(inputWeight);
        this->setYear(inputYear);
        *counter = *counter + 1;

    }
    void setYear(int inputYear)
    {
        studyYear = inputYear;
    }

    void addYear()
    {
        studyYear++;
    }

private:
    int studyYear;
};

//Task 2 =====================================================================================================================

class Fruit
{
public:
    std::string getName()
    {
        return name;
    }

    std::string getColor()
    {
        return color;
    }

    void setName(std::string input)
    {
        name = input;
    }

    void setColor(std::string input)
    {
        color = input;
    }
private:
    std::string name, color;
};

class Apple : public Fruit
{
public:
    Apple(){}
    Apple(std::string input)
    {
        this->setName("apple");
        this->setColor(input);
    }
};

class Banana : public Fruit
{
public:
    Banana()
    {
        this->setName("banana");
        this->setColor("yellow");
    }
};

class GrannySmith : public Apple
{
public:
    GrannySmith()
    {
        this->setName("Granny Smith apple");
        this->setColor("green");
    }
};

int main()
{
    //Task 1 =========================================================================================================================
    int counter = 0;
    Student* firstStudent = new Student("Male", "John", 83, 18, 1, &counter);
    Student* secondStudent = new Student("Alex", "Female", 53, 18, 1, &counter);
    Student* thirdStudent = new Student("Mary", "Female", 68, 20, 3, &counter);
    std::cout << "Student 1: " << firstStudent->getName() << "\n" << "Total number of students: " << counter << "\n\n";

    delete firstStudent;
    delete secondStudent;
    delete thirdStudent;
    counter = 0;

    //Task 2 =========================================================================================================================
    
    Apple a("red");
    Banana b;
    GrannySmith c;

    std::cout << "My " << a.getName() << " is " << a.getColor() << ".\n";
    std::cout << "My " << b.getName() << " is " << b.getColor() << ".\n";
    std::cout << "My " << c.getName() << " is " << c.getColor() << ".\n";

    return 0;

}

