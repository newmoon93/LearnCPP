#include <iostream>
#include "doodle.h"

using namespace std;

struct TV {
private:
  bool powerOn;
  int channel;
  int volume;

public:
  void on() {
    powerOn = true;
    cout << "TV on" << endl;
  }
  void off() {
    powerOn = false;
    cout << "TV off" << endl;
  }
  void setChannel(int cnl) {
    if (cnl >= 0 && cnl <= 100) {
      channel = cnl;
      cout << "channel : " << cnl << endl;
    }
  }
  void setVolume(int vol) {
    if (vol >= 0 && vol <= 100) {
      volume = vol;
      cout << "volume : " << vol << endl;
    }
  }
};

int doodle_54() {
  TV lg;
  lg.on();
  lg.setChannel(10);
  lg.setVolume(50);
}