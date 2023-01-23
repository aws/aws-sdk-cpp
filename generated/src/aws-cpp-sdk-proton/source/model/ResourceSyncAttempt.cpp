/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/proton/model/ResourceSyncAttempt.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Proton
{
namespace Model
{

ResourceSyncAttempt::ResourceSyncAttempt() : 
    m_eventsHasBeenSet(false),
    m_initialRevisionHasBeenSet(false),
    m_startedAtHasBeenSet(false),
    m_status(ResourceSyncStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_targetHasBeenSet(false),
    m_targetRevisionHasBeenSet(false)
{
}

ResourceSyncAttempt::ResourceSyncAttempt(JsonView jsonValue) : 
    m_eventsHasBeenSet(false),
    m_initialRevisionHasBeenSet(false),
    m_startedAtHasBeenSet(false),
    m_status(ResourceSyncStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_targetHasBeenSet(false),
    m_targetRevisionHasBeenSet(false)
{
  *this = jsonValue;
}

ResourceSyncAttempt& ResourceSyncAttempt::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("events"))
  {
    Aws::Utils::Array<JsonView> eventsJsonList = jsonValue.GetArray("events");
    for(unsigned eventsIndex = 0; eventsIndex < eventsJsonList.GetLength(); ++eventsIndex)
    {
      m_events.push_back(eventsJsonList[eventsIndex].AsObject());
    }
    m_eventsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("initialRevision"))
  {
    m_initialRevision = jsonValue.GetObject("initialRevision");

    m_initialRevisionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("startedAt"))
  {
    m_startedAt = jsonValue.GetDouble("startedAt");

    m_startedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = ResourceSyncStatusMapper::GetResourceSyncStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("target"))
  {
    m_target = jsonValue.GetString("target");

    m_targetHasBeenSet = true;
  }

  if(jsonValue.ValueExists("targetRevision"))
  {
    m_targetRevision = jsonValue.GetObject("targetRevision");

    m_targetRevisionHasBeenSet = true;
  }

  return *this;
}

JsonValue ResourceSyncAttempt::Jsonize() const
{
  JsonValue payload;

  if(m_eventsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> eventsJsonList(m_events.size());
   for(unsigned eventsIndex = 0; eventsIndex < eventsJsonList.GetLength(); ++eventsIndex)
   {
     eventsJsonList[eventsIndex].AsObject(m_events[eventsIndex].Jsonize());
   }
   payload.WithArray("events", std::move(eventsJsonList));

  }

  if(m_initialRevisionHasBeenSet)
  {
   payload.WithObject("initialRevision", m_initialRevision.Jsonize());

  }

  if(m_startedAtHasBeenSet)
  {
   payload.WithDouble("startedAt", m_startedAt.SecondsWithMSPrecision());
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", ResourceSyncStatusMapper::GetNameForResourceSyncStatus(m_status));
  }

  if(m_targetHasBeenSet)
  {
   payload.WithString("target", m_target);

  }

  if(m_targetRevisionHasBeenSet)
  {
   payload.WithObject("targetRevision", m_targetRevision.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Proton
} // namespace Aws
