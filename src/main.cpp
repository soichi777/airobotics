/*
Copyright (c) 2015 soichi

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
*/

/**
 * TODO namespace
 */
#include <iostream>
#include "ConnectionInitializer.h"
#include "XBeeAPIFrameBuilder.h"

using namespace std;

ConnectionInitializer init("/dev/tty.usbserial-00002014");

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

  /**
   * TODO 数字以外（"right"とか）を入れると無限ループ
   */
  do {
    selected = select();
    if (selected >= Right && selected < Invalid) {
      apf[selected]();
    }
  } while (selected != Invalid);
  
  XBeeAPIFrameBuilder* builder;
  builder = new XBeeAPIFrameBuilder();

  cout << builder->build(selected) << endl;
  
  return 0;
}
