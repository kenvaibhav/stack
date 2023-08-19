#include<iostream>
using namespace std;

template <typename t, typename v>
class Pair{
    t x;
    v y;
    public:
    void setX(t x){
        this -> x = x;
    }
    t getX(){
        return x;
    }
    void setY(v y){
        this -> y = y;
    }
    v getY(){
        return y;
    }
};
 
int main(){
    // *********** First we will check if t and v are int type variables *********
    // Pair<int , int> P1;
    // P1.setX(500);
    // P1.setY(200);
    // cout<<P1.getX()<<"  "<<P1.getY();
    //************* Now we will check if t=int , v= double type variables********
    // Pair <int,double> P2;
    // P2.setX(10);
    // P2.setY(10.522);
    // cout<<P2.getX()<<" "<<P2.getY();

    // ******Now we will use the class for 3 variables******** 
    Pair <Pair<int,float>, double> p3;
    p3.setY(500.154);
    Pair<int, float> p4;
    p4.setX(2);
    p4.setY(20.23);
    p3.setX(p4);
    cout<<p3.getX().getX()<<" "<<p3.getX().getY()<<" "<<p3.getY()<<endl;
    cout<<p4.getX()<<" "<<p4.getY();
    // In this way we can use the Pair Class of templates for more than 2 variables




}