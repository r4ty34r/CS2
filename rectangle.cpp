#include <iostream>
using namespace std;
// rectangle has a vertical height and horizontal width
// The class below is a rectangle. It has two private
// data members: height and width.
// TODO: Complete the class declaration and definition.
class rectangle 
{
    public:
// TODO: declare a default constructor that sets height & width to 1.
        rectangle(); 
    
// TODO: declare member function void add
// @param int height, int width
        void add(int h, int w);

// TODO: declare member function void set
// @param int height, int width
        void set(int h, int w);

// TODO: declare member function void draw
        void draw();
// TODO: define accessor for width (remember it must return int)
        int getWidth();
// TODO: define accessor for height
        int getHeight();
// TODO: define a function to tell if a rectangle is a square
        bool isSquare();

        private:
        int height;
        int width;
};


// TODO: Implement a default constructor to
// initialize height and width to 1.
rectangle::rectangle()
{
    height = 1;
    width = 1;
}


// TODO: Implement add to increment the length
        void rectangle::add(int h, int w)
        {
            height+=h;
            width+=w;
        }

// TODO: Implement set to overwrite the data members
void rectangle::set(int h, int w)
{
    height = h;
    width = w;
}


// TODO: Implement draw to draw a rectangle using '*' characters
void rectangle::draw()
{
    //print rectangle rows = height , columns = width 

    char symbol = '#';

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            cout << symbol;
        }
        cout << endl;
    }
    
}


// TODO: Don't forget to define getWidth and getHeight

        int rectangle::getHeight(){
            return height;
        }

        int rectangle::getWidth(){
            return width;
        }

// TODO: Implement isSquare to say if a rectangle is a square.
bool rectangle::isSquare(){
    bool isit = false;
    if (height == width)
    {
        isit = true;
    }
    return isit;
    
}


int main()
{
    // Declare 2 rectangles
    rectangle r1, r2;
    // Print unit rectangle
    cout << "unit rectangle" << endl;
    r1.draw();
    // Set, print dimensions and draw
    r1.set(4, 3);
    cout << "r1 is " << r1.getHeight() << " x " << r1.getWidth() << endl;
    r1.draw();
    // Assign, increment, print dimensions and draw
    r2 = r1;
    r2.add(3, 4);
    cout << "r2 is " << r2.getHeight() << " x " << r2.getWidth() << endl;
    r2.draw();

    if (r2.isSquare()){
        cout << "r2 is a square" << endl;
    } else{
        cout << "r2 is not a square" << endl;
    }

    return 0;
}
