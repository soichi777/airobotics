/**
 * TODO namespace
 */
#include <iostream>
#include "../include/WirelessCommunication/XBeeAPIFrameBuilder.h"

using namespace std;

enum Command {Right, Left, Proceed, Run, Invalid};

void right()
{
  cout << "rotating clockwisely\n";
}

void left()
{
  cout << "rotating counter-clockwisely\n";
}

void proceed()
{
  cout << "moving forward\n";
}

void run()
{
  cout << "executing a sequence of commands\n";
}

Command select()
{
  int tmp;
  do {
    cout << "(0)right, (1)left, (2)proceed, (3)run, (4)end\n";
    cin >> tmp;
  } while (tmp < Right || tmp > Invalid);
  return static_cast<Command>(tmp);
}

int main()
{
  typedef void (*CommandFP)();
  Command selected;
  CommandFP apf[] = {right, left, proceed, run};

  do {
    selected = select();
    if (selected >= Right && selected < Invalid) {
      apf[selected]();
    }
  } while (selected != Invalid);
  
  // XBeeAPIFrameBuilder* builder;
  // builder = new XBeeAPIFrameBuilder();
  // cout << builder->build(command).GetFrameData() << endl;
  
  return 0;
}
