/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/MultiplexSummary.h>
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

MultiplexSummary::MultiplexSummary() : 
    m_arnHasBeenSet(false),
    m_availabilityZonesHasBeenSet(false),
    m_idHasBeenSet(false),
    m_multiplexSettingsHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_pipelinesRunningCount(0),
    m_pipelinesRunningCountHasBeenSet(false),
    m_programCount(0),
    m_programCountHasBeenSet(false),
    m_state(MultiplexState::NOT_SET),
    m_stateHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

MultiplexSummary::MultiplexSummary(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_availabilityZonesHasBeenSet(false),
    m_idHasBeenSet(false),
    m_multiplexSettingsHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_pipelinesRunningCount(0),
    m_pipelinesRunningCountHasBeenSet(false),
    m_programCount(0),
    m_programCountHasBeenSet(false),
    m_state(MultiplexState::NOT_SET),
    m_stateHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = jsonValue;
}

MultiplexSummary& MultiplexSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("availabilityZones"))
  {
    Aws::Utils::Array<JsonView> availabilityZonesJsonList = jsonValue.GetArray("availabilityZones");
    for(unsigned availabilityZonesIndex = 0; availabilityZonesIndex < availabilityZonesJsonList.GetLength(); ++availabilityZonesIndex)
    {
      m_availabilityZones.push_back(availabilityZonesJsonList[availabilityZonesIndex].AsString());
    }
    m_availabilityZonesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("multiplexSettings"))
  {
    m_multiplexSettings = jsonValue.GetObject("multiplexSettings");

    m_multiplexSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("pipelinesRunningCount"))
  {
    m_pipelinesRunningCount = jsonValue.GetInteger("pipelinesRunningCount");

    m_pipelinesRunningCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("programCount"))
  {
    m_programCount = jsonValue.GetInteger("programCount");

    m_programCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("state"))
  {
    m_state = MultiplexStateMapper::GetMultiplexStateForName(jsonValue.GetString("state"));

    m_stateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }

  return *this;
}

JsonValue MultiplexSummary::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_availabilityZonesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> availabilityZonesJsonList(m_availabilityZones.size());
   for(unsigned availabilityZonesIndex = 0; availabilityZonesIndex < availabilityZonesJsonList.GetLength(); ++availabilityZonesIndex)
   {
     availabilityZonesJsonList[availabilityZonesIndex].AsString(m_availabilityZones[availabilityZonesIndex]);
   }
   payload.WithArray("availabilityZones", std::move(availabilityZonesJsonList));

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_multiplexSettingsHasBeenSet)
  {
   payload.WithObject("multiplexSettings", m_multiplexSettings.Jsonize());

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_pipelinesRunningCountHasBeenSet)
  {
   payload.WithInteger("pipelinesRunningCount", m_pipelinesRunningCount);

  }

  if(m_programCountHasBeenSet)
  {
   payload.WithInteger("programCount", m_programCount);

  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("state", MultiplexStateMapper::GetNameForMultiplexState(m_state));
  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("tags", std::move(tagsJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
