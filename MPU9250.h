#ifndef _MPU9250_H_
#define _MPU9250_H_

#include <mbed.h>

class MPU9250
{

private:
    /* data */
public:
    enum Ascale
    {
        AFS_2G = 0,
        AFS_4G,
        AFS_8G,
        AFS_16G
    };

    enum Gscale
    {
        GFS_250DPS = 0,
        GFS_500DPS,
        GFS_1000DPS,
        GFS_2000DPS
    };

    enum Mscale
    {
        MFS_14BITS = 0, // 0.6 mG per LSB
        MFS_16BITS      // 0.15 mG per LSB
    };

    MPU9250(/* args */);
    ~MPU9250();

    typedef struct
    {
        /* data */
    } mpu9250_info_t;
    mpu9250_info_t mi;
};

MPU9250::MPU9250(/* args */)
{
}

MPU9250::~MPU9250()
{
}

#endif