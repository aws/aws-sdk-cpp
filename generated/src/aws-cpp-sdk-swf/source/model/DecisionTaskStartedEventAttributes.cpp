/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/swf/model/DecisionTaskStartedEventAttributes.h>
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

DecisionTaskStartedEventAttributes::DecisionTaskStartedEventAttributes() : 
    m_identityHasBeenSet(false),
    m_scheduledEventId(0),
    m_scheduledEventIdHasBeenSet(false)
{
}

DecisionTaskStartedEventAttributes::DecisionTaskStartedEventAttributes(JsonView jsonValue) : 
    m_identityHasBeenSet(false),
    m_scheduledEventId(0),
    m_scheduledEventIdHasBeenSet(false)
{
  *this = jsonValue;
}

DecisionTaskStartedEventAttributes& DecisionTaskStartedEventAttributes::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("identity"))
  {
    m_identity = jsonValue.GetString("identity");

    m_identityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("scheduledEventId"))
  {
    m_scheduledEventId = jsonValue.GetInt64("scheduledEventId");

    m_scheduledEventIdHasBeenSet = true;
  }

  return *this;
}

JsonValue DecisionTaskStartedEventAttributes::Jsonize() const
{
  JsonValue payload;

  if(m_identityHasBeenSet)
  {
   payload.WithString("identity", m_identity);

  }

  if(m_scheduledEventIdHasBeenSet)
  {
   payload.WithInt64("scheduledEventId", m_scheduledEventId);

  }

  return payload;
}

} // namespace Model
} // namespace SWF
} // namespace Aws
