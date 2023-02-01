/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/OutputChannelMapping.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaConvert
{
namespace Model
{

OutputChannelMapping::OutputChannelMapping() : 
    m_inputChannelsHasBeenSet(false),
    m_inputChannelsFineTuneHasBeenSet(false)
{
}

OutputChannelMapping::OutputChannelMapping(JsonView jsonValue) : 
    m_inputChannelsHasBeenSet(false),
    m_inputChannelsFineTuneHasBeenSet(false)
{
  *this = jsonValue;
}

OutputChannelMapping& OutputChannelMapping::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("inputChannels"))
  {
    Aws::Utils::Array<JsonView> inputChannelsJsonList = jsonValue.GetArray("inputChannels");
    for(unsigned inputChannelsIndex = 0; inputChannelsIndex < inputChannelsJsonList.GetLength(); ++inputChannelsIndex)
    {
      m_inputChannels.push_back(inputChannelsJsonList[inputChannelsIndex].AsInteger());
    }
    m_inputChannelsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("inputChannelsFineTune"))
  {
    Aws::Utils::Array<JsonView> inputChannelsFineTuneJsonList = jsonValue.GetArray("inputChannelsFineTune");
    for(unsigned inputChannelsFineTuneIndex = 0; inputChannelsFineTuneIndex < inputChannelsFineTuneJsonList.GetLength(); ++inputChannelsFineTuneIndex)
    {
      m_inputChannelsFineTune.push_back(inputChannelsFineTuneJsonList[inputChannelsFineTuneIndex].AsDouble());
    }
    m_inputChannelsFineTuneHasBeenSet = true;
  }

  return *this;
}

JsonValue OutputChannelMapping::Jsonize() const
{
  JsonValue payload;

  if(m_inputChannelsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> inputChannelsJsonList(m_inputChannels.size());
   for(unsigned inputChannelsIndex = 0; inputChannelsIndex < inputChannelsJsonList.GetLength(); ++inputChannelsIndex)
   {
     inputChannelsJsonList[inputChannelsIndex].AsInteger(m_inputChannels[inputChannelsIndex]);
   }
   payload.WithArray("inputChannels", std::move(inputChannelsJsonList));

  }

  if(m_inputChannelsFineTuneHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> inputChannelsFineTuneJsonList(m_inputChannelsFineTune.size());
   for(unsigned inputChannelsFineTuneIndex = 0; inputChannelsFineTuneIndex < inputChannelsFineTuneJsonList.GetLength(); ++inputChannelsFineTuneIndex)
   {
     inputChannelsFineTuneJsonList[inputChannelsFineTuneIndex].AsDouble(m_inputChannelsFineTune[inputChannelsFineTuneIndex]);
   }
   payload.WithArray("inputChannelsFineTune", std::move(inputChannelsFineTuneJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
