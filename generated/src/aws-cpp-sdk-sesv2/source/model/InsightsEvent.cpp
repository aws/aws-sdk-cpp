/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/InsightsEvent.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SESV2
{
namespace Model
{

InsightsEvent::InsightsEvent() : 
    m_timestampHasBeenSet(false),
    m_type(EventType::NOT_SET),
    m_typeHasBeenSet(false),
    m_detailsHasBeenSet(false)
{
}

InsightsEvent::InsightsEvent(JsonView jsonValue) : 
    m_timestampHasBeenSet(false),
    m_type(EventType::NOT_SET),
    m_typeHasBeenSet(false),
    m_detailsHasBeenSet(false)
{
  *this = jsonValue;
}

InsightsEvent& InsightsEvent::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Timestamp"))
  {
    m_timestamp = jsonValue.GetDouble("Timestamp");

    m_timestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = EventTypeMapper::GetEventTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Details"))
  {
    m_details = jsonValue.GetObject("Details");

    m_detailsHasBeenSet = true;
  }

  return *this;
}

JsonValue InsightsEvent::Jsonize() const
{
  JsonValue payload;

  if(m_timestampHasBeenSet)
  {
   payload.WithDouble("Timestamp", m_timestamp.SecondsWithMSPrecision());
  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", EventTypeMapper::GetNameForEventType(m_type));
  }

  if(m_detailsHasBeenSet)
  {
   payload.WithObject("Details", m_details.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SESV2
} // namespace Aws
