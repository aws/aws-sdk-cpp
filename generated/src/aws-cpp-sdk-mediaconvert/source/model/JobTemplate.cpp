/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/JobTemplate.h>
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

JobTemplate::JobTemplate() : 
    m_accelerationSettingsHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_categoryHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_hopDestinationsHasBeenSet(false),
    m_lastUpdatedHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_priority(0),
    m_priorityHasBeenSet(false),
    m_queueHasBeenSet(false),
    m_settingsHasBeenSet(false),
    m_statusUpdateInterval(StatusUpdateInterval::NOT_SET),
    m_statusUpdateIntervalHasBeenSet(false),
    m_type(Type::NOT_SET),
    m_typeHasBeenSet(false)
{
}

JobTemplate::JobTemplate(JsonView jsonValue) : 
    m_accelerationSettingsHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_categoryHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_hopDestinationsHasBeenSet(false),
    m_lastUpdatedHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_priority(0),
    m_priorityHasBeenSet(false),
    m_queueHasBeenSet(false),
    m_settingsHasBeenSet(false),
    m_statusUpdateInterval(StatusUpdateInterval::NOT_SET),
    m_statusUpdateIntervalHasBeenSet(false),
    m_type(Type::NOT_SET),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

JobTemplate& JobTemplate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("accelerationSettings"))
  {
    m_accelerationSettings = jsonValue.GetObject("accelerationSettings");

    m_accelerationSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("category"))
  {
    m_category = jsonValue.GetString("category");

    m_categoryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("hopDestinations"))
  {
    Aws::Utils::Array<JsonView> hopDestinationsJsonList = jsonValue.GetArray("hopDestinations");
    for(unsigned hopDestinationsIndex = 0; hopDestinationsIndex < hopDestinationsJsonList.GetLength(); ++hopDestinationsIndex)
    {
      m_hopDestinations.push_back(hopDestinationsJsonList[hopDestinationsIndex].AsObject());
    }
    m_hopDestinationsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastUpdated"))
  {
    m_lastUpdated = jsonValue.GetDouble("lastUpdated");

    m_lastUpdatedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("priority"))
  {
    m_priority = jsonValue.GetInteger("priority");

    m_priorityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("queue"))
  {
    m_queue = jsonValue.GetString("queue");

    m_queueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("settings"))
  {
    m_settings = jsonValue.GetObject("settings");

    m_settingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("statusUpdateInterval"))
  {
    m_statusUpdateInterval = StatusUpdateIntervalMapper::GetStatusUpdateIntervalForName(jsonValue.GetString("statusUpdateInterval"));

    m_statusUpdateIntervalHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = TypeMapper::GetTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue JobTemplate::Jsonize() const
{
  JsonValue payload;

  if(m_accelerationSettingsHasBeenSet)
  {
   payload.WithObject("accelerationSettings", m_accelerationSettings.Jsonize());

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_categoryHasBeenSet)
  {
   payload.WithString("category", m_category);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_hopDestinationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> hopDestinationsJsonList(m_hopDestinations.size());
   for(unsigned hopDestinationsIndex = 0; hopDestinationsIndex < hopDestinationsJsonList.GetLength(); ++hopDestinationsIndex)
   {
     hopDestinationsJsonList[hopDestinationsIndex].AsObject(m_hopDestinations[hopDestinationsIndex].Jsonize());
   }
   payload.WithArray("hopDestinations", std::move(hopDestinationsJsonList));

  }

  if(m_lastUpdatedHasBeenSet)
  {
   payload.WithDouble("lastUpdated", m_lastUpdated.SecondsWithMSPrecision());
  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_priorityHasBeenSet)
  {
   payload.WithInteger("priority", m_priority);

  }

  if(m_queueHasBeenSet)
  {
   payload.WithString("queue", m_queue);

  }

  if(m_settingsHasBeenSet)
  {
   payload.WithObject("settings", m_settings.Jsonize());

  }

  if(m_statusUpdateIntervalHasBeenSet)
  {
   payload.WithString("statusUpdateInterval", StatusUpdateIntervalMapper::GetNameForStatusUpdateInterval(m_statusUpdateInterval));
  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", TypeMapper::GetNameForType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
