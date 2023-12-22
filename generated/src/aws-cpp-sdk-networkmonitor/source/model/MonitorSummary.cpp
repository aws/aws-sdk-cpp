/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkmonitor/model/MonitorSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace NetworkMonitor
{
namespace Model
{

MonitorSummary::MonitorSummary() : 
    m_monitorArnHasBeenSet(false),
    m_monitorNameHasBeenSet(false),
    m_state(MonitorState::NOT_SET),
    m_stateHasBeenSet(false),
    m_aggregationPeriod(0),
    m_aggregationPeriodHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

MonitorSummary::MonitorSummary(JsonView jsonValue) : 
    m_monitorArnHasBeenSet(false),
    m_monitorNameHasBeenSet(false),
    m_state(MonitorState::NOT_SET),
    m_stateHasBeenSet(false),
    m_aggregationPeriod(0),
    m_aggregationPeriodHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = jsonValue;
}

MonitorSummary& MonitorSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("monitorArn"))
  {
    m_monitorArn = jsonValue.GetString("monitorArn");

    m_monitorArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("monitorName"))
  {
    m_monitorName = jsonValue.GetString("monitorName");

    m_monitorNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("state"))
  {
    m_state = MonitorStateMapper::GetMonitorStateForName(jsonValue.GetString("state"));

    m_stateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("aggregationPeriod"))
  {
    m_aggregationPeriod = jsonValue.GetInt64("aggregationPeriod");

    m_aggregationPeriodHasBeenSet = true;
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

JsonValue MonitorSummary::Jsonize() const
{
  JsonValue payload;

  if(m_monitorArnHasBeenSet)
  {
   payload.WithString("monitorArn", m_monitorArn);

  }

  if(m_monitorNameHasBeenSet)
  {
   payload.WithString("monitorName", m_monitorName);

  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("state", MonitorStateMapper::GetNameForMonitorState(m_state));
  }

  if(m_aggregationPeriodHasBeenSet)
  {
   payload.WithInt64("aggregationPeriod", m_aggregationPeriod);

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
} // namespace NetworkMonitor
} // namespace Aws
