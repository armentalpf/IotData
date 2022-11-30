/**
 * @file IotDataInt.cpp
 * @author Francisco Armenta (sistron@sistron.com.mx)
 * @brief sub clase para datos IoT de tipo numerico
 * @version 0.1
 * @date 2022-11-28
 *
 * @copyright Copyright (c) 2022 SITRN SISTEMAS ELECTRONICOS S DE RL DE CV
 *
 */
#include "IotDataInt.h"

IotDataInt::IotDataInt(String grupo, String topico) : IotData(grupo, topico)
{
}

void IotDataInt::setPayload(uint16_t value)
{
    iotPayload = String(value);
}

void IotDataInt::setPayload(uint32_t value)
{
    iotPayload = String(value);
}
// End of file