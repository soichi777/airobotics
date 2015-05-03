#include "ConnectionInitializer.h"

ConnectionInitializer::ConnectionInitializer() {}

ConnectionInitializer::ConnectionInitializer(const string usbPortName)
{
  serialPort = usbPortName;

  int fd; //Descriptor for the port
  fd = open(serialPort.c_str(), O_RDWR | O_NOCTTY | O_NDELAY);

  if (fd == -1) {
    cout << "Unable to open port. \n";
  }
  else {
    cout << "Port opened.\n";
  }
  cout << "Descriptor in open:";
  cout << fd;
  cout << "\n";
}

ConnectionInitializer::~ConnectionInitializer() {}

bool ConnectionInitializer::verify()
{
  cout << "verifying the connection...";
  cout << "\n";

  /**
   * TODO
   */
}
