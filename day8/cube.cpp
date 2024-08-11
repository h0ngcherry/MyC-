#include<iostream>
using namespace std;
class cube{
private:
    int length;
    int width;
    int height;
public:
    void set_length(int l)
    {
        length=l;
    }
    void set_width(int w)
    {
        width=w;
    }
    void set_height(int h)
    {
        height=h;
    }
    int get_length()
    {
        return length;
    }
    int get_width()
    {
        return width;
    }
    int get_height()
    {
        return height;
    }
    int calArea(){
        return 2*(length*width+length*height+width*height);
    }
    int calV()
    {
        return length*width*height;
    }
    bool isSameCube(cube c)
    {
        if(length==c.get_length() && width==c.get_width() && height==c.get_height())
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
bool isSame(cube c1,cube c2)
{
    if(c1.get_length()==c2.get_length() && c1.get_width()==c2.get_width() && c1.get_height()==c2.get_height())
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    cube c1,c2;
    c1.set_length(5);
    c1.set_width(6);
    c1.set_height(7);

    c2.set_length(5);
    c2.set_width(6);
    c2.set_height(7);
    if(isSame(c1,c2))
    {
        cout<<"c1 and c2 are same"<<endl;
    }
    else
    {
        cout<<"c1 and c2 are not same"<<endl;
    }
    cout<<"c1 area is "<<c1.calArea()<<endl;
    cout<<"c1 volume is "<<c1.calV()<<endl;
    return 0;
}