/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/proton/model/RepositorySyncEvent.h>
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

RepositorySyncEvent::RepositorySyncEvent() : 
    m_eventHasBeenSet(false),
    m_externalIdHasBeenSet(false),
    m_timeHasBeenSet(false),
    m_typeHasBeenSet(false)
{
}

RepositorySyncEvent::RepositorySyncEvent(JsonView jsonValue) : 
    m_eventHasBeenSet(false),
    m_externalIdHasBeenSet(false),
    m_timeHasBeenSet(false),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

RepositorySyncEvent& RepositorySyncEvent::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("event"))
  {
    m_event = jsonValue.GetString("event");

    m_eventHasBeenSet = true;
  }

  if(jsonValue.ValueExists("externalId"))
  {
    m_externalId = jsonValue.GetString("externalId");

    m_externalIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("time"))
  {
    m_time = jsonValue.GetDouble("time");

    m_timeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = jsonValue.GetString("type");

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue RepositorySyncEvent::Jsonize() const
{
  JsonValue payload;

  if(m_eventHasBeenSet)
  {
   payload.WithString("event", m_event);

  }

  if(m_externalIdHasBeenSet)
  {
   payload.WithString("externalId", m_externalId);

  }

  if(m_timeHasBeenSet)
  {
   payload.WithDouble("time", m_time.SecondsWithMSPrecision());
  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", m_type);

  }

  return payload;
}

} // namespace Model
} // namespace Proton
} // namespace Aws
