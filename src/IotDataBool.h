/**
 * @file IotDataBool.h
 * @author Francisco Armenta (sistron@sistron.com.mx)
 * @brief sub clase para datos IoT de tipo booleano
 * @version 0.1
 * @date 2022-11-28
 *
 * @copyright Copyright (c) 2022 SITRN SISTEMAS ELECTRONICOS S DE RL DE CV
 *
 */
#ifndef IOTDATABOOL_H_INCLUDED
#define IOTDATABOOL_H_INCLUDED

#include <Arduino.h>
#include "IotData.h"

class IotDataBool : public IotData
{
private:
public:
    IotDataBool(String grupo, String topico);
    void setPayload(int value);
};

#endif
// End of File