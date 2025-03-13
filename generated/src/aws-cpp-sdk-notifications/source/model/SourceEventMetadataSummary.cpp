/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/notifications/model/SourceEventMetadataSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Notifications
{
namespace Model
{

SourceEventMetadataSummary::SourceEventMetadataSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

SourceEventMetadataSummary& SourceEventMetadataSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("eventOriginRegion"))
  {
    m_eventOriginRegion = jsonValue.GetString("eventOriginRegion");
    m_eventOriginRegionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("source"))
  {
    m_source = jsonValue.GetString("source");
    m_sourceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("eventType"))
  {
    m_eventType = jsonValue.GetString("eventType");
    m_eventTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue SourceEventMetadataSummary::Jsonize() const
{
  JsonValue payload;

  if(m_eventOriginRegionHasBeenSet)
  {
   payload.WithString("eventOriginRegion", m_eventOriginRegion);

  }

  if(m_sourceHasBeenSet)
  {
   payload.WithString("source", m_source);

  }

  if(m_eventTypeHasBeenSet)
  {
   payload.WithString("eventType", m_eventType);

  }

  return payload;
}

} // namespace Model
} // namespace Notifications
} // namespace Aws
