/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/panorama/model/ApplicationInstance.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Panorama
{
namespace Model
{

ApplicationInstance::ApplicationInstance() : 
    m_applicationInstanceIdHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_defaultRuntimeContextDeviceHasBeenSet(false),
    m_defaultRuntimeContextDeviceNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_healthStatus(ApplicationInstanceHealthStatus::NOT_SET),
    m_healthStatusHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_runtimeContextStatesHasBeenSet(false),
    m_status(ApplicationInstanceStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusDescriptionHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

ApplicationInstance::ApplicationInstance(JsonView jsonValue) : 
    m_applicationInstanceIdHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_defaultRuntimeContextDeviceHasBeenSet(false),
    m_defaultRuntimeContextDeviceNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_healthStatus(ApplicationInstanceHealthStatus::NOT_SET),
    m_healthStatusHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_runtimeContextStatesHasBeenSet(false),
    m_status(ApplicationInstanceStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusDescriptionHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = jsonValue;
}

ApplicationInstance& ApplicationInstance::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ApplicationInstanceId"))
  {
    m_applicationInstanceId = jsonValue.GetString("ApplicationInstanceId");

    m_applicationInstanceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedTime"))
  {
    m_createdTime = jsonValue.GetDouble("CreatedTime");

    m_createdTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DefaultRuntimeContextDevice"))
  {
    m_defaultRuntimeContextDevice = jsonValue.GetString("DefaultRuntimeContextDevice");

    m_defaultRuntimeContextDeviceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DefaultRuntimeContextDeviceName"))
  {
    m_defaultRuntimeContextDeviceName = jsonValue.GetString("DefaultRuntimeContextDeviceName");

    m_defaultRuntimeContextDeviceNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HealthStatus"))
  {
    m_healthStatus = ApplicationInstanceHealthStatusMapper::GetApplicationInstanceHealthStatusForName(jsonValue.GetString("HealthStatus"));

    m_healthStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RuntimeContextStates"))
  {
    Aws::Utils::Array<JsonView> runtimeContextStatesJsonList = jsonValue.GetArray("RuntimeContextStates");
    for(unsigned runtimeContextStatesIndex = 0; runtimeContextStatesIndex < runtimeContextStatesJsonList.GetLength(); ++runtimeContextStatesIndex)
    {
      m_runtimeContextStates.push_back(runtimeContextStatesJsonList[runtimeContextStatesIndex].AsObject());
    }
    m_runtimeContextStatesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = ApplicationInstanceStatusMapper::GetApplicationInstanceStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StatusDescription"))
  {
    m_statusDescription = jsonValue.GetString("StatusDescription");

    m_statusDescriptionHasBeenSet = true;
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

JsonValue ApplicationInstance::Jsonize() const
{
  JsonValue payload;

  if(m_applicationInstanceIdHasBeenSet)
  {
   payload.WithString("ApplicationInstanceId", m_applicationInstanceId);

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_createdTimeHasBeenSet)
  {
   payload.WithDouble("CreatedTime", m_createdTime.SecondsWithMSPrecision());
  }

  if(m_defaultRuntimeContextDeviceHasBeenSet)
  {
   payload.WithString("DefaultRuntimeContextDevice", m_defaultRuntimeContextDevice);

  }

  if(m_defaultRuntimeContextDeviceNameHasBeenSet)
  {
   payload.WithString("DefaultRuntimeContextDeviceName", m_defaultRuntimeContextDeviceName);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_healthStatusHasBeenSet)
  {
   payload.WithString("HealthStatus", ApplicationInstanceHealthStatusMapper::GetNameForApplicationInstanceHealthStatus(m_healthStatus));
  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_runtimeContextStatesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> runtimeContextStatesJsonList(m_runtimeContextStates.size());
   for(unsigned runtimeContextStatesIndex = 0; runtimeContextStatesIndex < runtimeContextStatesJsonList.GetLength(); ++runtimeContextStatesIndex)
   {
     runtimeContextStatesJsonList[runtimeContextStatesIndex].AsObject(m_runtimeContextStates[runtimeContextStatesIndex].Jsonize());
   }
   payload.WithArray("RuntimeContextStates", std::move(runtimeContextStatesJsonList));

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", ApplicationInstanceStatusMapper::GetNameForApplicationInstanceStatus(m_status));
  }

  if(m_statusDescriptionHasBeenSet)
  {
   payload.WithString("StatusDescription", m_statusDescription);

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
} // namespace Panorama
} // namespace Aws
