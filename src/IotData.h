/**
 * @file IotData.h
 * @author Francisco Armenta (sistron@sistron.com.mx)
 * @brief Define la super clase para datos IOT
 * @version 0.1
 * @date 2022-11-28
 *
 * @copyright Copyright (c) 2022 SITRN SISTEMAS ELECTRONICOS S DE RL DE CV
 *
 */
#ifndef IOTDATA_H_INCLUDED
#define IOTDATA_H_INCLUDED

#include <Arduino.h>

class IotData
{
protected:
    String iotGroup;
    String iotTopic;
    String iotPayload;

public:
    IotData(String group, String topic) : iotGroup(group), iotTopic(topic) {}
    String getGroup() { return iotGroup; }
    String getTopic() { return iotTopic; }
    String getPayload() { return iotPayload; }
};

#endif
// End of File