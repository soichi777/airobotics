#include <iostream>
#include "../include/WirelessCommunication/XBeeAPIFrameBuilder.h"

using namespace std;

int main()
{
  XBeeAPIFrameBuilder* builder;
  builder = new XBeeAPIFrameBuilder();

  //char command[] = "run";
  uint8_t *command;
  
  cout << "Hello World" << endl;
  cout << builder->build(command).GetFrameData() << endl;
  
  return 0;
}
