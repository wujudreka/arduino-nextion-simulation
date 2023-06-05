//========================================time variables====================================
unsigned long previousMillisDataNextion = 0;
const long intervalDataNextion = 1000;
//========================================nextion variables====================================
#define RXD2 16
#define TXD2 17

void setup() {
  Serial.begin(9600);
  Serial2.begin(9600, SERIAL_8N1, RXD2, TXD2);  // NEXTION
}
void loop() {
  sendDataNextion();

}
void sendDataNextion() {
  String command;
  unsigned long currentMillis = millis();
  if (currentMillis - previousMillisDataNextion >= intervalDataNextion) {
    previousMillisDataNextion = currentMillis;
    command = "t0.txt=\"" + String(random(0,100)) + "\"";
    Serial2.print(command);
    endNextionCommand();
    command = "t1.txt=\"" + String(random(0,100)) + "\"";
    Serial2.print(command);
    endNextionCommand();
    command = "t2.txt=\"" + String(random(0,100)) + "\"";
    Serial2.print(command);
    endNextionCommand();
    command = "t3.txt=\"" + String(random(0,100)) + "\"";
    Serial2.print(command);
    endNextionCommand();
    command = "t4.txt=\"" + String(random(0,100)) + "\"";
    Serial2.print(command);
    endNextionCommand();
    command = "t5.txt=\"" + String(random(0,100)) + "\"";
    Serial2.print(command);
    endNextionCommand();
    command = "t6.txt=\"" + String(random(0,100)) + "\"";
    Serial2.print(command);
    endNextionCommand();
  }
}
void endNextionCommand()
{
  Serial2.write(0xff);
  Serial2.write(0xff);
  Serial2.write(0xff);
}
