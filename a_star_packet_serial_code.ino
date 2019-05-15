// Include the RoboClaw Arduino library
#include "RoboClaw.h"

// Create the RoboClaw object, passing it the hardware serial pointer
RoboClaw roboclaw(&Serial1, 10000);

void setup() {
  // Start serial communication
  roboclaw.begin(38400);
}

void loop() {
 // Call command on RoboClaw object, in this case turning motor 1 in the forward direction at full speed
  roboclaw.ForwardM1(0x80, 127);
  delay(2000);
  roboclaw.ForwardM1(0x80, 0);
  delay(2000);
}
