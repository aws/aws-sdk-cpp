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

SendDataIntegrationEventRequest::SendDataIntegrationEventRequest() : 
    m_instanceIdHasBeenSet(false),
    m_eventType(DataIntegrationEventType::NOT_SET),
    m_eventTypeHasBeenSet(false),
    m_dataHasBeenSet(false),
    m_eventGroupIdHasBeenSet(false),
    m_eventTimestampHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientTokenHasBeenSet(true)
{
}

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

  return payload.View().WriteReadable();
}




