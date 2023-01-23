/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/AudioChannelMapping.h>
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

AudioChannelMapping::AudioChannelMapping() : 
    m_inputChannelLevelsHasBeenSet(false),
    m_outputChannel(0),
    m_outputChannelHasBeenSet(false)
{
}

AudioChannelMapping::AudioChannelMapping(JsonView jsonValue) : 
    m_inputChannelLevelsHasBeenSet(false),
    m_outputChannel(0),
    m_outputChannelHasBeenSet(false)
{
  *this = jsonValue;
}

AudioChannelMapping& AudioChannelMapping::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("inputChannelLevels"))
  {
    Aws::Utils::Array<JsonView> inputChannelLevelsJsonList = jsonValue.GetArray("inputChannelLevels");
    for(unsigned inputChannelLevelsIndex = 0; inputChannelLevelsIndex < inputChannelLevelsJsonList.GetLength(); ++inputChannelLevelsIndex)
    {
      m_inputChannelLevels.push_back(inputChannelLevelsJsonList[inputChannelLevelsIndex].AsObject());
    }
    m_inputChannelLevelsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("outputChannel"))
  {
    m_outputChannel = jsonValue.GetInteger("outputChannel");

    m_outputChannelHasBeenSet = true;
  }

  return *this;
}

JsonValue AudioChannelMapping::Jsonize() const
{
  JsonValue payload;

  if(m_inputChannelLevelsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> inputChannelLevelsJsonList(m_inputChannelLevels.size());
   for(unsigned inputChannelLevelsIndex = 0; inputChannelLevelsIndex < inputChannelLevelsJsonList.GetLength(); ++inputChannelLevelsIndex)
   {
     inputChannelLevelsJsonList[inputChannelLevelsIndex].AsObject(m_inputChannelLevels[inputChannelLevelsIndex].Jsonize());
   }
   payload.WithArray("inputChannelLevels", std::move(inputChannelLevelsJsonList));

  }

  if(m_outputChannelHasBeenSet)
  {
   payload.WithInteger("outputChannel", m_outputChannel);

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
