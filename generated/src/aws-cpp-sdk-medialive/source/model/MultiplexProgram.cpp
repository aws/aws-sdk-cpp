/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/MultiplexProgram.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaLive
{
namespace Model
{

MultiplexProgram::MultiplexProgram() : 
    m_channelIdHasBeenSet(false),
    m_multiplexProgramSettingsHasBeenSet(false),
    m_packetIdentifiersMapHasBeenSet(false),
    m_pipelineDetailsHasBeenSet(false),
    m_programNameHasBeenSet(false)
{
}

MultiplexProgram::MultiplexProgram(JsonView jsonValue) : 
    m_channelIdHasBeenSet(false),
    m_multiplexProgramSettingsHasBeenSet(false),
    m_packetIdentifiersMapHasBeenSet(false),
    m_pipelineDetailsHasBeenSet(false),
    m_programNameHasBeenSet(false)
{
  *this = jsonValue;
}

MultiplexProgram& MultiplexProgram::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("channelId"))
  {
    m_channelId = jsonValue.GetString("channelId");

    m_channelIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("multiplexProgramSettings"))
  {
    m_multiplexProgramSettings = jsonValue.GetObject("multiplexProgramSettings");

    m_multiplexProgramSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("packetIdentifiersMap"))
  {
    m_packetIdentifiersMap = jsonValue.GetObject("packetIdentifiersMap");

    m_packetIdentifiersMapHasBeenSet = true;
  }

  if(jsonValue.ValueExists("pipelineDetails"))
  {
    Aws::Utils::Array<JsonView> pipelineDetailsJsonList = jsonValue.GetArray("pipelineDetails");
    for(unsigned pipelineDetailsIndex = 0; pipelineDetailsIndex < pipelineDetailsJsonList.GetLength(); ++pipelineDetailsIndex)
    {
      m_pipelineDetails.push_back(pipelineDetailsJsonList[pipelineDetailsIndex].AsObject());
    }
    m_pipelineDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("programName"))
  {
    m_programName = jsonValue.GetString("programName");

    m_programNameHasBeenSet = true;
  }

  return *this;
}

JsonValue MultiplexProgram::Jsonize() const
{
  JsonValue payload;

  if(m_channelIdHasBeenSet)
  {
   payload.WithString("channelId", m_channelId);

  }

  if(m_multiplexProgramSettingsHasBeenSet)
  {
   payload.WithObject("multiplexProgramSettings", m_multiplexProgramSettings.Jsonize());

  }

  if(m_packetIdentifiersMapHasBeenSet)
  {
   payload.WithObject("packetIdentifiersMap", m_packetIdentifiersMap.Jsonize());

  }

  if(m_pipelineDetailsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> pipelineDetailsJsonList(m_pipelineDetails.size());
   for(unsigned pipelineDetailsIndex = 0; pipelineDetailsIndex < pipelineDetailsJsonList.GetLength(); ++pipelineDetailsIndex)
   {
     pipelineDetailsJsonList[pipelineDetailsIndex].AsObject(m_pipelineDetails[pipelineDetailsIndex].Jsonize());
   }
   payload.WithArray("pipelineDetails", std::move(pipelineDetailsJsonList));

  }

  if(m_programNameHasBeenSet)
  {
   payload.WithString("programName", m_programName);

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
