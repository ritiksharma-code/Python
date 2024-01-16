#include<iostream>
using namespace std;
class vehicle{
    private:
    void piston(){
        cout<<"4 Piston \n";}
        void name_who_made(){
            cout<<"Markus Libutte\n";}
        public:
        void company(){
            cout<<"GFG\n";
        }
        void model(){
            cout<<"Simple\n";
        }
        void colour(){
            cout<<"Red/black/white\n";
        }
        void cost(){
            cout<<"Rs 25000 to 90000\n";
        }
        void oil(){
            cout<<"Petrol\n";
        }
    
};
int main(){
    vehicle obj;
    obj.company();
    obj.model();
    obj.colour();
    obj.cost();
    obj.oil();
    return 0;
}