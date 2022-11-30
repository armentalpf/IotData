/**
 * @file IotSubtopicBool.h
 * @author Francisco Armenta (sistron@sistron.com.mx)
 * @brief Sub clase de dato IoT tipo booleano con subtopico
 * @version 0.1
 * @date 2022-11-28
 *
 * @copyright Copyright (c) 2022 SITRN SISTEMAS ELECTRONICOS S DE RL DE CV
 *
 */
#ifndef IOTSUBTOPICBOOL_H_INCLUDED
#define IOTSUBTOPICBOOL_H_INCLUDED

#include <Arduino.h>
#include "IotDataBool.h"

class IotSubtopicBool : public IotDataBool
{
private:
    String iotSubtopic;

public:
    IotSubtopicBool(String grupo, String topico, String subtopico);
    String getSubtopic() { return iotSubtopic; }
};

IotSubtopicBool::IotSubtopicBool(String grupo, String topico, String subtopico) : IotDataBool(grupo, topico)
{
    iotSubtopic = subtopico;
}

#endif
// End of File