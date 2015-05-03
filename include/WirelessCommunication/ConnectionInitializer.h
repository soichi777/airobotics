#ifndef ConnectionInitializer_h
#define ConnectionInitializer_h

#include <iostream>
#include <stdio.h>   /* Standard input/output definitions */
#include <string.h>  /* String function definitions */
#include <unistd.h>  /* UNIX standard function definitions */
#include <fcntl.h>   /* File control definitions */
#include <errno.h>   /* Error number definitions */
#include <termios.h> /* POSIX terminal control definitions */

/**
 *
 *
 */
using namespace std;

class ConnectionInitializer
{
 private: 
  string serialPort;

 public:
  ConnectionInitializer();
  //the port name must be absolute path. i.e. "/dev/tty.usbserial-00002014"
  ConnectionInitializer(const string usbPortName);

  ~ConnectionInitializer();

  bool verify();
};

#endif
