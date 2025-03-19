/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/ProbeResult.h>
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

ProbeResult::ProbeResult(JsonView jsonValue)
{
  *this = jsonValue;
}

ProbeResult& ProbeResult::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("container"))
  {
    m_container = jsonValue.GetObject("container");
    m_containerHasBeenSet = true;
  }
  if(jsonValue.ValueExists("metadata"))
  {
    m_metadata = jsonValue.GetObject("metadata");
    m_metadataHasBeenSet = true;
  }
  if(jsonValue.ValueExists("trackMappings"))
  {
    Aws::Utils::Array<JsonView> trackMappingsJsonList = jsonValue.GetArray("trackMappings");
    for(unsigned trackMappingsIndex = 0; trackMappingsIndex < trackMappingsJsonList.GetLength(); ++trackMappingsIndex)
    {
      m_trackMappings.push_back(trackMappingsJsonList[trackMappingsIndex].AsObject());
    }
    m_trackMappingsHasBeenSet = true;
  }
  return *this;
}

JsonValue ProbeResult::Jsonize() const
{
  JsonValue payload;

  if(m_containerHasBeenSet)
  {
   payload.WithObject("container", m_container.Jsonize());

  }

  if(m_metadataHasBeenSet)
  {
   payload.WithObject("metadata", m_metadata.Jsonize());

  }

  if(m_trackMappingsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> trackMappingsJsonList(m_trackMappings.size());
   for(unsigned trackMappingsIndex = 0; trackMappingsIndex < trackMappingsJsonList.GetLength(); ++trackMappingsIndex)
   {
     trackMappingsJsonList[trackMappingsIndex].AsObject(m_trackMappings[trackMappingsIndex].Jsonize());
   }
   payload.WithArray("trackMappings", std::move(trackMappingsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
