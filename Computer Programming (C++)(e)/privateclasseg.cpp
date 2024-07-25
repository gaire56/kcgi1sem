#include <iostream>
#include <vector>

using namespace std;

class Room {
    private:
    int length;
    int width;
    
    public:
    // Constructor
    Room(int l, int w): length(l), width(w){}

    //function the calculate the area
    int calculateArea(){
        return length * width;
    }
};

int main(){
    //Cereat a vector of room object
    std::vector<Room> classrooms;

    // add classrooms

    classrooms.push_back(Room(10, 12)); //classroom 1
    classrooms.push_back(Room(12, 8)); //classroom 2
    classrooms.push_back(Room(6, 4)); //classroom 3
    classrooms.push_back(Room(20, 42)); //classroom 4

    //Calculate and print the area of each classroom
    for(int i = 0; i < classrooms.size(); ++i){
        int area = classrooms[i].calculateArea();
        std::cout << "Area of Classroom " << i+1 << ": " << area << " square meters" << std::endl;
        /*cout<<"Area of classroom" << i+1 << ":" << area "square meters" ;*/
    }
    return 0;
}