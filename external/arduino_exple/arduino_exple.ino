/* arduino example to switch on/off vATX
 * @see http://dinask.eu/hardware/vatx/
 */
 
// Pin 2 control the power supply
#define SWITCH 2

void setup() {
  // initialize the digital pin as an output.
  pinMode(SWITCH, OUTPUT);
  digitalWrite(SWITCH, LOW);   // turn the PSU off
}

void loop() {
  digitalWrite(SWITCH, HIGH);  // turn the PSU on
  delay (5000); // wait 5s
  digitalWrite(SWITCH, LOW);   // turn the PSU off
  // arduino is still running,
  // thanks to +5VSB
  delay (5000); // wait 5s
}

