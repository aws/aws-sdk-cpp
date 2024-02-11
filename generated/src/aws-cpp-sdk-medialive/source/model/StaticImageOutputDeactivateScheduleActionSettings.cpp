/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/StaticImageOutputDeactivateScheduleActionSettings.h>
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

StaticImageOutputDeactivateScheduleActionSettings::StaticImageOutputDeactivateScheduleActionSettings() : 
    m_fadeOut(0),
    m_fadeOutHasBeenSet(false),
    m_layer(0),
    m_layerHasBeenSet(false),
    m_outputNamesHasBeenSet(false)
{
}

StaticImageOutputDeactivateScheduleActionSettings::StaticImageOutputDeactivateScheduleActionSettings(JsonView jsonValue) : 
    m_fadeOut(0),
    m_fadeOutHasBeenSet(false),
    m_layer(0),
    m_layerHasBeenSet(false),
    m_outputNamesHasBeenSet(false)
{
  *this = jsonValue;
}

StaticImageOutputDeactivateScheduleActionSettings& StaticImageOutputDeactivateScheduleActionSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("fadeOut"))
  {
    m_fadeOut = jsonValue.GetInteger("fadeOut");

    m_fadeOutHasBeenSet = true;
  }

  if(jsonValue.ValueExists("layer"))
  {
    m_layer = jsonValue.GetInteger("layer");

    m_layerHasBeenSet = true;
  }

  if(jsonValue.ValueExists("outputNames"))
  {
    Aws::Utils::Array<JsonView> outputNamesJsonList = jsonValue.GetArray("outputNames");
    for(unsigned outputNamesIndex = 0; outputNamesIndex < outputNamesJsonList.GetLength(); ++outputNamesIndex)
    {
      m_outputNames.push_back(outputNamesJsonList[outputNamesIndex].AsString());
    }
    m_outputNamesHasBeenSet = true;
  }

  return *this;
}

JsonValue StaticImageOutputDeactivateScheduleActionSettings::Jsonize() const
{
  JsonValue payload;

  if(m_fadeOutHasBeenSet)
  {
   payload.WithInteger("fadeOut", m_fadeOut);

  }

  if(m_layerHasBeenSet)
  {
   payload.WithInteger("layer", m_layer);

  }

  if(m_outputNamesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> outputNamesJsonList(m_outputNames.size());
   for(unsigned outputNamesIndex = 0; outputNamesIndex < outputNamesJsonList.GetLength(); ++outputNamesIndex)
   {
     outputNamesJsonList[outputNamesIndex].AsString(m_outputNames[outputNamesIndex]);
   }
   payload.WithArray("outputNames", std::move(outputNamesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
