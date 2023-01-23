/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconnect/model/MediaStreamSourceConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaConnect
{
namespace Model
{

MediaStreamSourceConfiguration::MediaStreamSourceConfiguration() : 
    m_encodingName(EncodingName::NOT_SET),
    m_encodingNameHasBeenSet(false),
    m_inputConfigurationsHasBeenSet(false),
    m_mediaStreamNameHasBeenSet(false)
{
}

MediaStreamSourceConfiguration::MediaStreamSourceConfiguration(JsonView jsonValue) : 
    m_encodingName(EncodingName::NOT_SET),
    m_encodingNameHasBeenSet(false),
    m_inputConfigurationsHasBeenSet(false),
    m_mediaStreamNameHasBeenSet(false)
{
  *this = jsonValue;
}

MediaStreamSourceConfiguration& MediaStreamSourceConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("encodingName"))
  {
    m_encodingName = EncodingNameMapper::GetEncodingNameForName(jsonValue.GetString("encodingName"));

    m_encodingNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("inputConfigurations"))
  {
    Aws::Utils::Array<JsonView> inputConfigurationsJsonList = jsonValue.GetArray("inputConfigurations");
    for(unsigned inputConfigurationsIndex = 0; inputConfigurationsIndex < inputConfigurationsJsonList.GetLength(); ++inputConfigurationsIndex)
    {
      m_inputConfigurations.push_back(inputConfigurationsJsonList[inputConfigurationsIndex].AsObject());
    }
    m_inputConfigurationsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("mediaStreamName"))
  {
    m_mediaStreamName = jsonValue.GetString("mediaStreamName");

    m_mediaStreamNameHasBeenSet = true;
  }

  return *this;
}

JsonValue MediaStreamSourceConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_encodingNameHasBeenSet)
  {
   payload.WithString("encodingName", EncodingNameMapper::GetNameForEncodingName(m_encodingName));
  }

  if(m_inputConfigurationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> inputConfigurationsJsonList(m_inputConfigurations.size());
   for(unsigned inputConfigurationsIndex = 0; inputConfigurationsIndex < inputConfigurationsJsonList.GetLength(); ++inputConfigurationsIndex)
   {
     inputConfigurationsJsonList[inputConfigurationsIndex].AsObject(m_inputConfigurations[inputConfigurationsIndex].Jsonize());
   }
   payload.WithArray("inputConfigurations", std::move(inputConfigurationsJsonList));

  }

  if(m_mediaStreamNameHasBeenSet)
  {
   payload.WithString("mediaStreamName", m_mediaStreamName);

  }

  return payload;
}

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
