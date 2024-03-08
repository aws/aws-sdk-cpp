/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkmonitor/model/Probe.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace NetworkMonitor
{
namespace Model
{

Probe::Probe() : 
    m_probeIdHasBeenSet(false),
    m_probeArnHasBeenSet(false),
    m_sourceArnHasBeenSet(false),
    m_destinationHasBeenSet(false),
    m_destinationPort(0),
    m_destinationPortHasBeenSet(false),
    m_protocol(Protocol::NOT_SET),
    m_protocolHasBeenSet(false),
    m_packetSize(0),
    m_packetSizeHasBeenSet(false),
    m_addressFamily(AddressFamily::NOT_SET),
    m_addressFamilyHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_state(ProbeState::NOT_SET),
    m_stateHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_modifiedAtHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Probe::Probe(JsonView jsonValue) : 
    m_probeIdHasBeenSet(false),
    m_probeArnHasBeenSet(false),
    m_sourceArnHasBeenSet(false),
    m_destinationHasBeenSet(false),
    m_destinationPort(0),
    m_destinationPortHasBeenSet(false),
    m_protocol(Protocol::NOT_SET),
    m_protocolHasBeenSet(false),
    m_packetSize(0),
    m_packetSizeHasBeenSet(false),
    m_addressFamily(AddressFamily::NOT_SET),
    m_addressFamilyHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_state(ProbeState::NOT_SET),
    m_stateHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_modifiedAtHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = jsonValue;
}

Probe& Probe::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("probeId"))
  {
    m_probeId = jsonValue.GetString("probeId");

    m_probeIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("probeArn"))
  {
    m_probeArn = jsonValue.GetString("probeArn");

    m_probeArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sourceArn"))
  {
    m_sourceArn = jsonValue.GetString("sourceArn");

    m_sourceArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("destination"))
  {
    m_destination = jsonValue.GetString("destination");

    m_destinationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("destinationPort"))
  {
    m_destinationPort = jsonValue.GetInteger("destinationPort");

    m_destinationPortHasBeenSet = true;
  }

  if(jsonValue.ValueExists("protocol"))
  {
    m_protocol = ProtocolMapper::GetProtocolForName(jsonValue.GetString("protocol"));

    m_protocolHasBeenSet = true;
  }

  if(jsonValue.ValueExists("packetSize"))
  {
    m_packetSize = jsonValue.GetInteger("packetSize");

    m_packetSizeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("addressFamily"))
  {
    m_addressFamily = AddressFamilyMapper::GetAddressFamilyForName(jsonValue.GetString("addressFamily"));

    m_addressFamilyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("vpcId"))
  {
    m_vpcId = jsonValue.GetString("vpcId");

    m_vpcIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("state"))
  {
    m_state = ProbeStateMapper::GetProbeStateForName(jsonValue.GetString("state"));

    m_stateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("modifiedAt"))
  {
    m_modifiedAt = jsonValue.GetDouble("modifiedAt");

    m_modifiedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }

  return *this;
}

JsonValue Probe::Jsonize() const
{
  JsonValue payload;

  if(m_probeIdHasBeenSet)
  {
   payload.WithString("probeId", m_probeId);

  }

  if(m_probeArnHasBeenSet)
  {
   payload.WithString("probeArn", m_probeArn);

  }

  if(m_sourceArnHasBeenSet)
  {
   payload.WithString("sourceArn", m_sourceArn);

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

  if(m_addressFamilyHasBeenSet)
  {
   payload.WithString("addressFamily", AddressFamilyMapper::GetNameForAddressFamily(m_addressFamily));
  }

  if(m_vpcIdHasBeenSet)
  {
   payload.WithString("vpcId", m_vpcId);

  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("state", ProbeStateMapper::GetNameForProbeState(m_state));
  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_modifiedAtHasBeenSet)
  {
   payload.WithDouble("modifiedAt", m_modifiedAt.SecondsWithMSPrecision());
  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("tags", std::move(tagsJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace NetworkMonitor
} // namespace Aws
