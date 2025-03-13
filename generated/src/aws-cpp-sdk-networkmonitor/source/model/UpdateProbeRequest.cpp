/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkmonitor/model/UpdateProbeRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::NetworkMonitor::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateProbeRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_stateHasBeenSet)
  {
   payload.WithString("state", ProbeStateMapper::GetNameForProbeState(m_state));
  }

  if(m_destinationHasBeenSet)
  {
   payload.WithString("destination", m_destination);

  }

  if(m_destinationPortHasBeenSet)
  {
   payload.WithInteger("destinationPort", m_destinationPort);

  }

  if(m_protocolHasBeenSet)
  {
   payload.WithString("protocol", ProtocolMapper::GetNameForProtocol(m_protocol));
  }

  if(m_packetSizeHasBeenSet)
  {
   payload.WithInteger("packetSize", m_packetSize);

  }

  return payload.View().WriteReadable();
}




