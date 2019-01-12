#include <iostream>
#include <vector>
#include "clock_time.h"

using namespace std;

int main() {
    class Clock{
        protected:
            ClockTime _clockTime; 
            double _driftPerSecond;
            double _totalDrift;
        public:
            Clock(int hour, int minute, int second, double driftPerSecond):_clockTime(0, 0, 0, 1){
                _driftPerSecond = driftPerSecond;
            };
            void reset(){ _clockTime.reset(); }
            void tick(){
                _clockTime.increment();
                _totalDrift += _driftPerSecond;
            }
            virtual void displayTime() = 0;
    };
    class NaturalClock: public Clock{
        public: 
            NaturalClock(int hour, int minute, int second, double driftPerSecond):Clock(hour, minute, second, driftPerSecond){
            }
    };
    class SundialClock: public NaturalClock{
        public:
            SundialClock(int hour, int minute, int second):NaturalClock(hour, minute, second, 0.0) {
            }
            virtual void displayTime() {
               _clockTime.display();
               cout << ", total drift: " << _totalDrift; 
            }
    };
    class MechanicalClock: public Clock{
        public: 
            MechanicalClock(int hour, int minute, int second, double driftPerSecond): Clock(hour, minute, second, driftPerSecond){  
            }
    };
    class CuckooClock: public MechanicalClock{
        public:
            CuckooClock(int hour, int minute, int second): MechanicalClock(hour, minute, second, 0.0){
            }
            virtual void displayTime() {
                _clockTime.display();
                cout << ", total drift: " << _totalDrift; 
            }
    };
    class GrandFatherClock: public MechanicalClock{
        public:
            GrandFatherClock(int hour, int minute, int second):MechanicalClock(hour, minute, second, 0.000694444){
            }
            virtual void displayTime() {
                _clockTime.display();
                cout << ", total drift: " << _totalDrift; 
            }
    };
    class DigitalClock: public Clock{
        public: 
            DigitalClock(int hour, int minute, int second, double driftPerSecond): Clock(hour, minute, second, driftPerSecond){  
            }
    };
    class WristClock: public DigitalClock{
        public:
            WristClock(int hour, int minute, int second):DigitalClock(hour, minute, second, 0.000347222){
            }
            virtual void displayTime() {
                _clockTime.display();
                cout << ", total drift: " << _totalDrift; 
            }
    };
    class QuatumClock: public Clock{
        public: 
            QuatumClock(int hour, int minute, int second, double driftPerSecond): Clock(hour, minute, second, driftPerSecond){  
            }
    };
    class AtomicClock: public QuatumClock{
        public:
            AtomicClock(int hour, int minute, int second):QuatumClock(hour, minute, second, 0.000034722){
            }
            virtual void displayTime() {
                _clockTime.display();
                cout << ", total drift: " << _totalDrift; 
            }
    };

    vector<Clock*> clock;
    clock.push_back(new SundialClock(0, 0, 0));
    clock.push_back(new CuckooClock(0, 0, 0));
    clock.push_back(new GrandFatherClock(0, 0, 0));
    clock.push_back(new WristClock(0, 0, 0));
    clock.push_back(new AtomicClock(0, 0, 0));
    int ticktime;
    cin >> ticktime;
    for(int i = 0; i < clock.size(); i++) {
        clock[i]->reset();
    }
    cout << "Reported clock times after resetting:" << endl;
    cout << "SundialClock "; clock[0]->displayTime(); cout << endl;
    cout << "CuckooClock "; clock[1]->displayTime(); cout << endl;
    cout << "GrandFatherClock "; clock[2]->displayTime(); cout << endl;
    cout << "WristClock "; clock[3]->displayTime(); cout << endl;
    cout << "AtomicClock "; clock[4]->displayTime(); cout << endl;
    cout << endl;
    cout << "Running the clocks..." << endl;
    for(int i = 0; i < clock.size(); i++) {
        for(int j = 0; j < ticktime; j++) {
            clock[i]->tick();
        }
    }
    cout << endl;
    cout << "Reported clock times after running:" << endl;
    cout << "SundialClock "; clock[0]->displayTime(); cout << endl;
    cout << "CuckooClock "; clock[1]->displayTime(); cout << endl;
    cout << "GrandFatherClock "; clock[2]->displayTime(); cout << endl;
    cout << "WristClock "; clock[3]->displayTime(); cout << endl;
    cout << "AtomicClock "; clock[4]->displayTime(); cout << endl;
    
    for(int i = 0; i < clock.size(); i++) {
        delete clock[i];
    }
    return 0;
}
