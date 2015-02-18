#include <iostream>
#include "../include/WirelessCommunication/XBeeDataFrameBuilder.h"

using namespace std;

int main()
{
  XBeeDataFrameBuilder* data;
  data = new XBeeDataFrameBuilder();
  
  cout << "Hello World" << endl;
  cout << data->echo() << endl;
  return 0;
}

