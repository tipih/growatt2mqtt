unsigned long uptime, seconds;
bool holdingregisters = true;
const char buildversion[]="v1.3.0Helge";

#define EE_START_ADDR 0x00 // start address of values stored in the eeprom
#define EE_INIT_STATE_SIZE 4
#define EE_INIT_PATTERN { 0xd5, 0xa9, 0xbe, 0xaf }
const uint8_t DefEEpromInit[EE_INIT_STATE_SIZE] = EE_INIT_PATTERN;

typedef struct
{
    uint8_t EEpromInit[EE_INIT_STATE_SIZE]; // paaternif EEprom is used
    uint16 modbus_update_sec;         // 1: modbus device is read every second and data are anounced via mqtt
    uint16 status_update_sec;         // 10: status mqtt message is sent every 10 seconds
    uint16 wificheck_sec;             // 1: every second
} configData_t;

configData_t  config;



