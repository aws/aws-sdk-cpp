/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/supplychain/model/SendDataIntegrationEventRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SupplyChain::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String SendDataIntegrationEventRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_eventTypeHasBeenSet)
  {
   payload.WithString("eventType", DataIntegrationEventTypeMapper::GetNameForDataIntegrationEventType(m_eventType));
  }

  if(m_dataHasBeenSet)
  {
   payload.WithString("data", m_data);

  }

  if(m_eventGroupIdHasBeenSet)
  {
   payload.WithString("eventGroupId", m_eventGroupId);

  }

  if(m_eventTimestampHasBeenSet)
  {
   payload.WithDouble("eventTimestamp", m_eventTimestamp.SecondsWithMSPrecision());
  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  if(m_datasetTargetHasBeenSet)
  {
   payload.WithObject("datasetTarget", m_datasetTarget.Jsonize());

  }

  return payload.View().WriteReadable();
}




