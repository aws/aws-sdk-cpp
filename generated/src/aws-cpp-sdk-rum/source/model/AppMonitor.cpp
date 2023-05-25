/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rum/model/AppMonitor.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudWatchRUM
{
namespace Model
{

AppMonitor::AppMonitor() : 
    m_appMonitorConfigurationHasBeenSet(false),
    m_createdHasBeenSet(false),
    m_customEventsHasBeenSet(false),
    m_dataStorageHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_idHasBeenSet(false),
    m_lastModifiedHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_state(StateEnum::NOT_SET),
    m_stateHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

AppMonitor::AppMonitor(JsonView jsonValue) : 
    m_appMonitorConfigurationHasBeenSet(false),
    m_createdHasBeenSet(false),
    m_customEventsHasBeenSet(false),
    m_dataStorageHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_idHasBeenSet(false),
    m_lastModifiedHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_state(StateEnum::NOT_SET),
    m_stateHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = jsonValue;
}

AppMonitor& AppMonitor::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AppMonitorConfiguration"))
  {
    m_appMonitorConfiguration = jsonValue.GetObject("AppMonitorConfiguration");

    m_appMonitorConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Created"))
  {
    m_created = jsonValue.GetString("Created");

    m_createdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CustomEvents"))
  {
    m_customEvents = jsonValue.GetObject("CustomEvents");

    m_customEventsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DataStorage"))
  {
    m_dataStorage = jsonValue.GetObject("DataStorage");

    m_dataStorageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Domain"))
  {
    m_domain = jsonValue.GetString("Domain");

    m_domainHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastModified"))
  {
    m_lastModified = jsonValue.GetString("LastModified");

    m_lastModifiedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("State"))
  {
    m_state = StateEnumMapper::GetStateEnumForName(jsonValue.GetString("State"));

    m_stateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("Tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }

  return *this;
}

JsonValue AppMonitor::Jsonize() const
{
  JsonValue payload;

  if(m_appMonitorConfigurationHasBeenSet)
  {
   payload.WithObject("AppMonitorConfiguration", m_appMonitorConfiguration.Jsonize());

  }

  if(m_createdHasBeenSet)
  {
   payload.WithString("Created", m_created);

  }

  if(m_customEventsHasBeenSet)
  {
   payload.WithObject("CustomEvents", m_customEvents.Jsonize());

  }

  if(m_dataStorageHasBeenSet)
  {
   payload.WithObject("DataStorage", m_dataStorage.Jsonize());

  }

  if(m_domainHasBeenSet)
  {
   payload.WithString("Domain", m_domain);

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_lastModifiedHasBeenSet)
  {
   payload.WithString("LastModified", m_lastModified);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("State", StateEnumMapper::GetNameForStateEnum(m_state));
  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("Tags", std::move(tagsJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace CloudWatchRUM
} // namespace Aws
