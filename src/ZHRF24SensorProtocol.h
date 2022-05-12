#ifndef ZHRF24SENSORPROTOCOL_H
#define ZHRF24SENSORPROTOCOL_H

#define ALARM 1
#define DRY 0
#define OPEN 1
#define CLOSE 0

enum SensorType
{
    BME280 = 1,     // VCC_VOLTAGE, AIR_HUMIDITY, AIR_TEMPERATURE, AIR_PRESSURE, 0
    BMP280,         // VCC_VOLTAGE, AIR_TEMPERATURE, AIR_PRESSURE, 0, 0
    BME680,         // VCC_VOLTAGE, AIR_HUMIDITY, AIR_TEMPERATURE, AIR_PRESSURE, AIR_QUALITY
    TOUCH_SWITCH,   // VCC_VOLTAGE, 0, 0, 0, 0
    WATER_LEAKAGE,  // VCC_VOLTAGE, STATUS(ALARM/DRY), 0, 0, 0
    PLANT_HUMIDITY, // VCC_VOLTAGE, SOIL_HUMIDITY, 0, 0, 0
    OPEN_CLOSE      // VCC_VOLTAGE, STATUS(OPEN/CLOSE), 0, 0, 0
};

struct TransmittedData
{
    int16_t sensor_id{0};
    int16_t sensor_type{0};
    int16_t value_1{0};
    int16_t value_2{0};
    int16_t value_3{0};
    int16_t value_4{0};
    int16_t value_5{0};
};

#endif
