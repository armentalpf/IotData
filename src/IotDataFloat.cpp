/**
 * @file IotDataFloat.cpp
 * @author Francisco Armenta (sistron@sistron.com.mx)
 * @brief Sub clase para datos IoT tipo flotante
 * @version 0.1
 * @date 2022-11-28
 *
 * @copyright Copyright (c) 2022 SITRN SISTEMAS ELECTRONICOS S DE RL DE CV
 *
 */
#include "IotDataFloat.h"

IotDataFloat::IotDataFloat(String grupo, String topico) : IotData(grupo, topico)
{
}

void IotDataFloat::setPayload(float value)
{
    iotPayload = String(value, 2);
}

// End of file