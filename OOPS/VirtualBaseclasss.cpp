#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
/*
                                        STUDENT
                                 (VIRTUAL BASE CLASS)
                                           .
                    ...............................................
                    .                                             .
                    V                                             V
                   TEST                                         SCORE
                    .                                             .
                    .                                             .
                    ...............................................
                                           .
                                           V
                                         RESULT 
*/
 
class student{
    protected:
    int roll_number;
    public:
    void set_number(int r){
        roll_number = r;
    }
    void print_number(void){
        cout<<"The roll number of student is "<<roll_number<<endl;
    }
};

class test : virtual public student{
    protected:
    float physics;
    float maths;
    public:
    void set_marks(float m1,float m2){
        physics = m1;
        maths = m2;
    } void print_marks(void){
        cout<<"The Marks in physics : "<<physics<<endl;
        cout<<"The Marks in Maths : "<<maths<<endl;
    }
};

class sports : virtual public student{
    protected:
    float score;
    public:
    void set_score(float sc){
        score = sc;
    }
    void print_score(void){
        cout<<"The score is :"<<score<<endl;
    }
};

class result : public test,public sports{
    private:
    float total;
    public:
    void display(void){
        total = maths + physics + score;
        print_number();
        print_marks();
        print_score();
        cout<<"Total marks are "<<total<<endl;
    }
};
int main(){
    result marcos;
    marcos.set_number(42000);
    marcos.set_marks(78.9,99.5);
    marcos.set_score(9);
    marcos.display();
    
    return 0;
}