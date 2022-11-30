/**
 * @file IotDataBool.cpp
 * @author Francisco Armenta (sistron@sistron.com.mx)
 * @brief sub clase para datos IoT de tipo booleano
 * @version 0.1
 * @date 2022-11-28
 *
 * @copyright Copyright (c) 2022 SITRN SISTEMAS ELECTRONICOS S DE RL DE CV
 *
 */
#include "IotDataBool.h"
#define IOT_ON "ON"
#define IOT_OFF "OFF"

IotDataBool::IotDataBool(String grupo, String topico) : IotData(grupo, topico)
{
}

void IotDataBool::setPayload(int value)
{
    if (value)
    {
        iotPayload = IOT_ON;
    }
    else
    {
        iotPayload = IOT_OFF;
    }
}
// End of file