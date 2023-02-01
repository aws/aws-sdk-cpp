/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/proton/model/RepositorySyncAttempt.h>
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

RepositorySyncAttempt::RepositorySyncAttempt() : 
    m_eventsHasBeenSet(false),
    m_startedAtHasBeenSet(false),
    m_status(RepositorySyncStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
}

RepositorySyncAttempt::RepositorySyncAttempt(JsonView jsonValue) : 
    m_eventsHasBeenSet(false),
    m_startedAtHasBeenSet(false),
    m_status(RepositorySyncStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

RepositorySyncAttempt& RepositorySyncAttempt::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("startedAt"))
  {
    m_startedAt = jsonValue.GetDouble("startedAt");

    m_startedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = RepositorySyncStatusMapper::GetRepositorySyncStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue RepositorySyncAttempt::Jsonize() const
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

  if(m_startedAtHasBeenSet)
  {
   payload.WithDouble("startedAt", m_startedAt.SecondsWithMSPrecision());
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", RepositorySyncStatusMapper::GetNameForRepositorySyncStatus(m_status));
  }

  return payload;
}

} // namespace Model
} // namespace Proton
} // namespace Aws
