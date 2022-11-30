/**
 * @file IotDataInt.h
 * @author Francisco Armenta (sistron@sistron.com.mx)
 * @brief sub clase para datos IoT de tipo numerico
 * @version 0.1
 * @date 2022-11-28
 *
 * @copyright Copyright (c) 2022 SITRN SISTEMAS ELECTRONICOS S DE RL DE CV
 *
 */
#ifndef IOTDATAINT_H_INCLUDED
#define IOTDATAINT_H_INCLUDED

#include <Arduino.h>
#include "IotData.h"

class IotDataInt : public IotData
{
private:
    /* data */
public:
    IotDataInt(String grupo, String topico);
    void setPayload(uint16_t value);
    void setPayload(uint32_t value);
};

#endif
// End of File