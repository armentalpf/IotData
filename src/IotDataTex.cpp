/**
 * @file IotDataTex.cpp
 * @author Francisco Armenta (sistron@sistron.com.mx)
 * @brief sub clase para datos IoT de tipo texto
 * @version 0.1
 * @date 2022-11-28
 *
 * @copyright Copyright (c) 2022 SITRN SISTEMAS ELECTRONICOS S DE RL DE CV
 *
 */
#include "IotDataText.h"

IotDataText::IotDataText(String grupo, String topico) : IotData(grupo, topico) {}

void IotDataText::setPayload(uint16_t *payload, size_t size)
{
    iotPayload = "";

    for (size_t i = 0; i < size; i++)
    {
        char highData = highByte(payload[i]);
        char lowData = lowByte(payload[i]);

        iotPayload += highData;
        iotPayload += lowData;
    }
}
// End of file