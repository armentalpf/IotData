/**
 * @file IotDataText.h
 * @author Francisco Armenta (sistron@sistron.com.mx)
 * @brief sub clase para datos IoT de tipo texto
 * @version 0.1
 * @date 2022-11-28
 *
 * @copyright Copyright (c) 2022 SITRN SISTEMAS ELECTRONICOS S DE RL DE CV
 *
 */
#ifndef IOTDATATEXT_H_INCLUDED
#define IOTDATATEXT_H_INCLUDED

#include <Arduino.h>
#include "IotData.h"

class IotDataText : public IotData
{
private:
public:
    IotDataText(String grupo, String topico);
    void setPayload(uint16_t *payload, size_t size);
};

#endif
// End of File