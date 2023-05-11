//#define DEBUG_SERIAL    
//#define DEBUG_MQTT       
#define useModulPower   

#define SERIAL_RATE     115200    // Serial speed for status info
#define MAX485_DE       5         // D1, DE pin on the TTL to RS485 converter
#define MAX485_RE_NEG   4         // D2, RE pin on the TTL to RS485 converter
#define MAX485_RX       14        // D5, RO pin on the TTL to RS485 converter
#define MAX485_TX       12        // D6, DI pin on the TTL to RS485 converter
#define STATUS_LED      2         // Status LED on the Wemos D1 mini (D4)
#define UPDATE_MODBUS   10        // 1: modbus device is read every second and data are anounced via mqtt
#define UPDATE_STATUS   300       // 10: status mqtt message is sent every 10 seconds
#define WIFICHECK       1         // 1: every second

// Update the below parameters for your project
// Also check NTP.h for some parameters as well
const char ssid[] = "xxxxxx";          // Wifi SSID
const char password[] = "xxxxxx";  // Wifi password
const char mqtt_server[] = "xxx.xxx.xxx.xxx";    // MQTT server
const int mqtt_server_port = 1883;             // MQTT server port, default is 1883
const char mqtt_user[] = "none";               // MQTT userid
const char mqtt_password[] = "none";        // MQTT password
const char clientID[] = "growatt1500";       // MQTT client ID
const char topicRoot[] = "growatt1500";      // MQTT root topic for the device, keep / at the end

// Comment the entire second below for dynamic IP (including the define)
// #define FIXEDIP   1
IPAddress local_IP(192, 168, 1, 205);     // Set your Static IP address
IPAddress gateway(192, 168, 1, 254);          // Set your Gateway IP address
IPAddress subnet(255, 255, 255, 0);
IPAddress primaryDNS(192, 168, 1, 254);   //optional
IPAddress secondaryDNS(8, 8, 4, 4); //optional
