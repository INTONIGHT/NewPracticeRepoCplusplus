#include <iostream>
using namespace std;
class Stove{
    private:
        int temperature = 0;
    public:
        int getTemperature(){
            return temperature;
        }
        void setTemperature(int temperature){
            this->temperature = temperature;
        }

};
int main(){
    Stove stove;
    cout << stove.getTemperature() << "\n";
    return 0;
}