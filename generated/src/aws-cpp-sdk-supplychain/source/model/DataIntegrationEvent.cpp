/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/supplychain/model/DataIntegrationEvent.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SupplyChain
{
namespace Model
{

DataIntegrationEvent::DataIntegrationEvent(JsonView jsonValue)
{
  *this = jsonValue;
}

DataIntegrationEvent& DataIntegrationEvent::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("instanceId"))
  {
    m_instanceId = jsonValue.GetString("instanceId");
    m_instanceIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("eventId"))
  {
    m_eventId = jsonValue.GetString("eventId");
    m_eventIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("eventType"))
  {
    m_eventType = DataIntegrationEventTypeMapper::GetDataIntegrationEventTypeForName(jsonValue.GetString("eventType"));
    m_eventTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("eventGroupId"))
  {
    m_eventGroupId = jsonValue.GetString("eventGroupId");
    m_eventGroupIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("eventTimestamp"))
  {
    m_eventTimestamp = jsonValue.GetDouble("eventTimestamp");
    m_eventTimestampHasBeenSet = true;
  }
  if(jsonValue.ValueExists("datasetTargetDetails"))
  {
    m_datasetTargetDetails = jsonValue.GetObject("datasetTargetDetails");
    m_datasetTargetDetailsHasBeenSet = true;
  }
  return *this;
}

JsonValue DataIntegrationEvent::Jsonize() const
{
  JsonValue payload;

  if(m_instanceIdHasBeenSet)
  {
   payload.WithString("instanceId", m_instanceId);

  }

  if(m_eventIdHasBeenSet)
  {
   payload.WithString("eventId", m_eventId);

  }

  if(m_eventTypeHasBeenSet)
  {
   payload.WithString("eventType", DataIntegrationEventTypeMapper::GetNameForDataIntegrationEventType(m_eventType));
  }

  if(m_eventGroupIdHasBeenSet)
  {
   payload.WithString("eventGroupId", m_eventGroupId);

  }

  if(m_eventTimestampHasBeenSet)
  {
   payload.WithDouble("eventTimestamp", m_eventTimestamp.SecondsWithMSPrecision());
  }

  if(m_datasetTargetDetailsHasBeenSet)
  {
   payload.WithObject("datasetTargetDetails", m_datasetTargetDetails.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SupplyChain
} // namespace Aws
