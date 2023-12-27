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

UpdateProbeRequest::UpdateProbeRequest() : 
    m_monitorNameHasBeenSet(false),
    m_probeIdHasBeenSet(false),
    m_state(ProbeState::NOT_SET),
    m_stateHasBeenSet(false),
    m_destinationHasBeenSet(false),
    m_destinationPort(0),
    m_destinationPortHasBeenSet(false),
    m_protocol(Protocol::NOT_SET),
    m_protocolHasBeenSet(false),
    m_packetSize(0),
    m_packetSizeHasBeenSet(false)
{
}

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




