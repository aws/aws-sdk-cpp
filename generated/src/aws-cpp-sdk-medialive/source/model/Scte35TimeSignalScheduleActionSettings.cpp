/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/Scte35TimeSignalScheduleActionSettings.h>
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

Scte35TimeSignalScheduleActionSettings::Scte35TimeSignalScheduleActionSettings() : 
    m_scte35DescriptorsHasBeenSet(false)
{
}

Scte35TimeSignalScheduleActionSettings::Scte35TimeSignalScheduleActionSettings(JsonView jsonValue) : 
    m_scte35DescriptorsHasBeenSet(false)
{
  *this = jsonValue;
}

Scte35TimeSignalScheduleActionSettings& Scte35TimeSignalScheduleActionSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("scte35Descriptors"))
  {
    Aws::Utils::Array<JsonView> scte35DescriptorsJsonList = jsonValue.GetArray("scte35Descriptors");
    for(unsigned scte35DescriptorsIndex = 0; scte35DescriptorsIndex < scte35DescriptorsJsonList.GetLength(); ++scte35DescriptorsIndex)
    {
      m_scte35Descriptors.push_back(scte35DescriptorsJsonList[scte35DescriptorsIndex].AsObject());
    }
    m_scte35DescriptorsHasBeenSet = true;
  }

  return *this;
}

JsonValue Scte35TimeSignalScheduleActionSettings::Jsonize() const
{
  JsonValue payload;

  if(m_scte35DescriptorsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> scte35DescriptorsJsonList(m_scte35Descriptors.size());
   for(unsigned scte35DescriptorsIndex = 0; scte35DescriptorsIndex < scte35DescriptorsJsonList.GetLength(); ++scte35DescriptorsIndex)
   {
     scte35DescriptorsJsonList[scte35DescriptorsIndex].AsObject(m_scte35Descriptors[scte35DescriptorsIndex].Jsonize());
   }
   payload.WithArray("scte35Descriptors", std::move(scte35DescriptorsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
