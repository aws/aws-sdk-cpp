/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/notifications/model/SourceEventMetadata.h>
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

SourceEventMetadata::SourceEventMetadata(JsonView jsonValue)
{
  *this = jsonValue;
}

SourceEventMetadata& SourceEventMetadata::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("eventTypeVersion"))
  {
    m_eventTypeVersion = jsonValue.GetString("eventTypeVersion");
    m_eventTypeVersionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("sourceEventId"))
  {
    m_sourceEventId = jsonValue.GetString("sourceEventId");
    m_sourceEventIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("eventOriginRegion"))
  {
    m_eventOriginRegion = jsonValue.GetString("eventOriginRegion");
    m_eventOriginRegionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("relatedAccount"))
  {
    m_relatedAccount = jsonValue.GetString("relatedAccount");
    m_relatedAccountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("source"))
  {
    m_source = jsonValue.GetString("source");
    m_sourceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("eventOccurrenceTime"))
  {
    m_eventOccurrenceTime = jsonValue.GetString("eventOccurrenceTime");
    m_eventOccurrenceTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("eventType"))
  {
    m_eventType = jsonValue.GetString("eventType");
    m_eventTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("relatedResources"))
  {
    Aws::Utils::Array<JsonView> relatedResourcesJsonList = jsonValue.GetArray("relatedResources");
    for(unsigned relatedResourcesIndex = 0; relatedResourcesIndex < relatedResourcesJsonList.GetLength(); ++relatedResourcesIndex)
    {
      m_relatedResources.push_back(relatedResourcesJsonList[relatedResourcesIndex].AsObject());
    }
    m_relatedResourcesHasBeenSet = true;
  }
  return *this;
}

JsonValue SourceEventMetadata::Jsonize() const
{
  JsonValue payload;

  if(m_eventTypeVersionHasBeenSet)
  {
   payload.WithString("eventTypeVersion", m_eventTypeVersion);

  }

  if(m_sourceEventIdHasBeenSet)
  {
   payload.WithString("sourceEventId", m_sourceEventId);

  }

  if(m_eventOriginRegionHasBeenSet)
  {
   payload.WithString("eventOriginRegion", m_eventOriginRegion);

  }

  if(m_relatedAccountHasBeenSet)
  {
   payload.WithString("relatedAccount", m_relatedAccount);

  }

  if(m_sourceHasBeenSet)
  {
   payload.WithString("source", m_source);

  }

  if(m_eventOccurrenceTimeHasBeenSet)
  {
   payload.WithString("eventOccurrenceTime", m_eventOccurrenceTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_eventTypeHasBeenSet)
  {
   payload.WithString("eventType", m_eventType);

  }

  if(m_relatedResourcesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> relatedResourcesJsonList(m_relatedResources.size());
   for(unsigned relatedResourcesIndex = 0; relatedResourcesIndex < relatedResourcesJsonList.GetLength(); ++relatedResourcesIndex)
   {
     relatedResourcesJsonList[relatedResourcesIndex].AsObject(m_relatedResources[relatedResourcesIndex].Jsonize());
   }
   payload.WithArray("relatedResources", std::move(relatedResourcesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Notifications
} // namespace Aws
