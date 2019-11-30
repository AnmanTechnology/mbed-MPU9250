#ifndef _MPU9250_REGISTER_MAP_H_
#define _MPU9250_REGISTER_MAP_H_

#include <mbed.h>

// Register Map for Gyroscope and Accelerometer

#define MPU9250_SELF_TEST_X_GYRO 0x00
#define MPU9250_SELF_TEST_Y_GYRO 0x01
#define MPU9250_SELF_TEST_Z_GYRO 0x02

#define MPU9250_SELF_TEST_X_ACCEL 0x0D
#define MPU9250_SELF_TEST_Y_ACCEL 0x0E
#define MPU9250_SELF_TEST_Z_ACCEL 0x0F

#define MPU9250_XG_OFFSET_H 0x13 // User-defined trim values for gyroscope
#define MPU9250_XG_OFFSET_L 0x14
#define MPU9250_YG_OFFSET_H 0x15
#define MPU9250_YG_OFFSET_L 0x16
#define MPU9250_ZG_OFFSET_H 0x17
#define MPU9250_ZG_OFFSET_L 0x18
#define MPU9250_SMPLRT_DIV 0x19
#define MPU9250_CONFIG 0x1A
#define MPU9250_GYRO_CONFIG 0x1B
#define MPU9250_ACCEL_CONFIG 0x1C
#define MPU9250_ACCEL_CONFIG2 0x1D
#define MPU9250_LP_ACCEL_ODR 0x1E
#define MPU9250_WOM_THR 0x1F

typedef struct
{
    uint8_t XG_ST_DATA;
    uint8_t YG_ST_DATA;
    uint8_t ZG_ST_DATA;
    uint8_t XA_ST_DATA;
    uint8_t YA_ST_DATA;
    uint8_t ZA_ST_DATA;
    uint16_t X_OFFS_USR;
    uint16_t Y_OFFS_USR;
    uint16_t Z_OFFS_USR;
    uint8_t SMPLRT_DIV;
    union {
        /* data */
    } CONFIG;

} mpu9250_info_t;

#endif