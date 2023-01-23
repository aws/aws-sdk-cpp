/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/swf/model/MarkerRecordedEventAttributes.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SWF
{
namespace Model
{

MarkerRecordedEventAttributes::MarkerRecordedEventAttributes() : 
    m_markerNameHasBeenSet(false),
    m_detailsHasBeenSet(false),
    m_decisionTaskCompletedEventId(0),
    m_decisionTaskCompletedEventIdHasBeenSet(false)
{
}

MarkerRecordedEventAttributes::MarkerRecordedEventAttributes(JsonView jsonValue) : 
    m_markerNameHasBeenSet(false),
    m_detailsHasBeenSet(false),
    m_decisionTaskCompletedEventId(0),
    m_decisionTaskCompletedEventIdHasBeenSet(false)
{
  *this = jsonValue;
}

MarkerRecordedEventAttributes& MarkerRecordedEventAttributes::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("markerName"))
  {
    m_markerName = jsonValue.GetString("markerName");

    m_markerNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("details"))
  {
    m_details = jsonValue.GetString("details");

    m_detailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("decisionTaskCompletedEventId"))
  {
    m_decisionTaskCompletedEventId = jsonValue.GetInt64("decisionTaskCompletedEventId");

    m_decisionTaskCompletedEventIdHasBeenSet = true;
  }

  return *this;
}

JsonValue MarkerRecordedEventAttributes::Jsonize() const
{
  JsonValue payload;

  if(m_markerNameHasBeenSet)
  {
   payload.WithString("markerName", m_markerName);

  }

  if(m_detailsHasBeenSet)
  {
   payload.WithString("details", m_details);

  }

  if(m_decisionTaskCompletedEventIdHasBeenSet)
  {
   payload.WithInt64("decisionTaskCompletedEventId", m_decisionTaskCompletedEventId);

  }

  return payload;
}

} // namespace Model
} // namespace SWF
} // namespace Aws
