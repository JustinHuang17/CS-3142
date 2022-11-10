#include <iostream>
using namespace std;
class Rectangle{
    public :float length, width;
    void setlength(float x){
        length = x;
    }
    void setwidth(float x){
        width = x;
    }
    float perimeter(){
        return ((2*length)+(2*width));
    }
    float area(){
        return (length*width);
    }

    void show(){
        cout << "The length is "<<length << " and width is " << width << endl;
    }

    int sameArea(Rectangle Rec){

        if( (width*length) == (Rec.length * Rec.width))
            return 1;
        else
            return 0;
    }
};
int main(){

    Rectangle Rectangle1, Rectangle2;
    Rectangle1.setlength(5); Rectangle1.setwidth(2.5);
    Rectangle2.setlength(5); Rectangle2.setwidth(18.9);
    
    cout << "Rectangle1 "; Rectangle1.show(); 
    cout << "Perimeter is " << Rectangle1.perimeter()<< " and Area is "<< Rectangle1.area() <<endl;
    cout << "Rectangle2 "; Rectangle2.show();
    cout << "Perimeter is " << Rectangle2.perimeter()<< " and Area is "<< Rectangle2.area() <<endl;

    if(Rectangle1.sameArea(Rectangle2)==1)
        cout << "The 2 Rectangles have the same area" << endl;
    else
        cout << "The 2 Rectangles do not share the same area" << endl;
}