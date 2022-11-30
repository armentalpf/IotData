#include <Arduino.h>
#include <IotMessages.h>

#define SER_ADR 6
#define FL_ADR 9
#define NST_ADR 10
#define UNIT_ADR 11

IotDataText iotModel = IotDataText("config", "model");
IotDataText iotSerial = IotDataText("config", "serial");
IotDataInt iotFl = IotDataInt("config", "fl");
IotDataInt iotNstation = IotDataInt("config", "nstation");
IotDataText iotUnits = IotDataText("config", "units");
IotDataBool iotEnUv = IotDataBool("config", "enuv");
IotDataBool iotEnPout = IotDataBool("config", "enpout");
IotDataBool iotEnTemp = IotDataBool("config", "entemp");
IotDataBool iotEnFlow1 = IotDataBool("config", "enflujo1");
IotDataBool iotEnFlow2 = IotDataBool("config", "enflujo2");
IotDataInt iotFanHr = IotDataInt("station", "fanhm");
IotDataFloat iotPress = IotDataFloat("station", "pressure");
IotSubtopicBool iotFanAlarm = IotSubtopicBool("station", "alarm", "fanfail");

uint16_t data[64];

void printHeader(const char *message);

void setup()
{
  const char modelo[] = "Veco-2";
  const char serial[] = "E1-250";
  const char units[] = "CA";

  uint32_t fanHour = 999999;
  uint16_t pressure = 32767;

  iotMsg.begin(9600);

  data[0] = (modelo[0] << 8) + modelo[1];
  data[1] = (modelo[2] << 8) + modelo[3];
  data[2] = (modelo[4] << 8) + modelo[5];
  data[6] = (serial[0] << 8) + serial[1];
  data[7] = (serial[2] << 8) + serial[3];
  data[8] = (serial[4] << 8) + serial[5];
  data[9] = 9999;
  data[10] = 64;
  data[11] = (units[0] << 8) + units[1];

  iotModel.setPayload(data, 3);
  iotSerial.setPayload(&data[SER_ADR], 3);
  iotFl.setPayload(data[FL_ADR]);
  iotNstation.setPayload(data[NST_ADR]);
  iotUnits.setPayload(&data[UNIT_ADR], 1);
  iotEnUv.setPayload(1);
  iotEnTemp.setPayload(0);
  iotEnPout.setPayload(1);
  iotEnFlow1.setPayload(1);
  iotEnFlow2.setPayload(0);
  iotFanHr.setPayload(fanHour);
  iotPress.setPayload((pressure / 100.00));
  iotFanAlarm.setPayload(1);

  delay(500);

  printHeader("Model data");
  Serial.println(iotModel.getGroup());
  Serial.println(iotModel.getTopic());
  Serial.println(iotModel.getPayload());
  
  printHeader("Serial data");
  Serial.println(iotSerial.getGroup());
  Serial.println(iotSerial.getTopic());
  Serial.println(iotSerial.getPayload());

  printHeader("FL data");
  Serial.println(iotFl.getGroup());
  Serial.println(iotFl.getTopic());
  Serial.println(iotFl.getPayload());

  printHeader("Station number data");
  Serial.println(iotNstation.getGroup());
  Serial.println(iotNstation.getTopic());
  Serial.println(iotNstation.getPayload());

  printHeader("Units data");
  Serial.println(iotUnits.getGroup());
  Serial.println(iotUnits.getTopic());
  Serial.println(iotUnits.getPayload());

  printHeader("UV flag data");
  Serial.println(iotEnUv.getGroup());
  Serial.println(iotEnUv.getTopic());
  Serial.println(iotEnUv.getPayload());

  printHeader("Power out flag data");
  Serial.println(iotEnPout.getGroup());
  Serial.println(iotEnPout.getTopic());
  Serial.println(iotEnPout.getPayload());

  printHeader("Temperature flag data");
  Serial.println(iotEnTemp.getGroup());
  Serial.println(iotEnTemp.getTopic());
  Serial.println(iotEnTemp.getPayload());

  printHeader("Flow 1 flag data");
  Serial.println(iotEnFlow1.getGroup());
  Serial.println(iotEnFlow1.getTopic());
  Serial.println(iotEnFlow1.getPayload());

  printHeader("Flow 2 flag data");
  Serial.println(iotEnFlow2.getGroup());
  Serial.println(iotEnFlow2.getTopic());
  Serial.println(iotEnFlow2.getPayload());

  printHeader("Fan hourmeter data");
  Serial.println(iotFanHr.getGroup());
  Serial.println(iotFanHr.getTopic());
  Serial.println(iotFanHr.getPayload());

  printHeader("Pressure data");
  Serial.println(iotPress.getGroup());
  Serial.println(iotPress.getTopic());
  Serial.println(iotPress.getPayload());

  printHeader(" Fan fail alarm data");
  Serial.println(iotFanAlarm.getGroup());
  Serial.println(iotFanAlarm.getTopic());
  Serial.println(iotFanAlarm.getSubtopic());
  Serial.println(iotFanAlarm.getPayload());
}

void loop()
{
  // put your main code here, to run repeatedly:
}

void printHeader(const char *message)
{
  Serial.println("*********************");
  Serial.println(message);
  Serial.println("*********************");
}
// End of file
