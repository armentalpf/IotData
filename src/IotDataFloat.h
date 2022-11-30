/**
 * @file IotDataFloat.h
 * @author Francisco Armenta (sistron@sistron.com.mx)
 * @brief Sub clase para datos IoT tipo flotante
 * @version 0.1
 * @date 2022-11-28
 *
 * @copyright Copyright (c) 2022 SITRN SISTEMAS ELECTRONICOS S DE RL DE CV
 *
 */
#ifndef IOTDATAFLOAT_H_INCLUDED
#define IOTDATAFLOAT_H_INCLUDED

#include <Arduino.h>
#include "IotData.h"

class IotDataFloat : public IotData
{
private:
public:
    IotDataFloat(String grupo, String topico);
    void setPayload(float value);
};

#endif
// End of File