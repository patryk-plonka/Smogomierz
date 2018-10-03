#pragma once

extern bool DEVICENAME_AUTO;
extern char DEVICENAME[255];
extern bool DISPLAY_PM1;
extern char LANGUAGE[255];

extern char THP_MODEL[255];
extern char DUST_MODEL[255];

extern bool AIRMONITOR_ON;
extern int AIRMONITOR_TIME;
extern bool AIRMONITOR_GRAPH_ON;
extern float LATITUDE;
extern float LONGITUDE;
extern float MYALTITUDE;

extern bool THINGSPEAK_ON;
extern int THINGSPEAK_TIME;
extern bool THINGSPEAK_GRAPH_ON;
extern char THINGSPEAK_API_KEY[255];
extern int THINGSPEAK_CHANNEL_ID;

extern bool INFLUXDB_ON;
extern int INFLUXDB_TIME;
extern char INFLUXDB_HOST[255];
extern uint16_t INFLUXDB_PORT;

extern char DATABASE[255];
extern char DB_USER[255];
extern char DB_PASSWORD[255];

extern bool DEBUG;

extern char MODEL[255];
extern float calib1;
extern float calib2;
extern int selected_language;

const char SOFTWAREVERSION[40] = "2.4.7 build 23:40_3.10.2018";
const char HARDWAREVERSION[40] = "1.0 - ESP8266";
