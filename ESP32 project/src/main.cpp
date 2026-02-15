#include <Arduino.h>
#include <BasicLinearAlgebra.h>

using namespace BLA;

// put function declarations here:
int myFunction(int, int);

void setup() {
  // put your setup code here, to run once:
  BLA::Matrix<3, 3> A;
  Serial.begin(115200);


  BLA::Matrix<3> v;
  v.Fill(0);

    Serial.println(A);
}

void loop() {
  // put your main code here, to run repeatedly:

}

// put function definitions here:
int myFunction(int x, int y) {
  return x + y;

}
