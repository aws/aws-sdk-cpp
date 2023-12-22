/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkmonitor/model/CreateMonitorProbeInput.h>
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

CreateMonitorProbeInput::CreateMonitorProbeInput() : 
    m_sourceArnHasBeenSet(false),
    m_destinationHasBeenSet(false),
    m_destinationPort(0),
    m_destinationPortHasBeenSet(false),
    m_protocol(Protocol::NOT_SET),
    m_protocolHasBeenSet(false),
    m_packetSize(0),
    m_packetSizeHasBeenSet(false),
    m_probeTagsHasBeenSet(false)
{
}

CreateMonitorProbeInput::CreateMonitorProbeInput(JsonView jsonValue) : 
    m_sourceArnHasBeenSet(false),
    m_destinationHasBeenSet(false),
    m_destinationPort(0),
    m_destinationPortHasBeenSet(false),
    m_protocol(Protocol::NOT_SET),
    m_protocolHasBeenSet(false),
    m_packetSize(0),
    m_packetSizeHasBeenSet(false),
    m_probeTagsHasBeenSet(false)
{
  *this = jsonValue;
}

CreateMonitorProbeInput& CreateMonitorProbeInput::operator =(JsonView jsonValue)
{
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

  if(jsonValue.ValueExists("probeTags"))
  {
    Aws::Map<Aws::String, JsonView> probeTagsJsonMap = jsonValue.GetObject("probeTags").GetAllObjects();
    for(auto& probeTagsItem : probeTagsJsonMap)
    {
      m_probeTags[probeTagsItem.first] = probeTagsItem.second.AsString();
    }
    m_probeTagsHasBeenSet = true;
  }

  return *this;
}

JsonValue CreateMonitorProbeInput::Jsonize() const
{
  JsonValue payload;

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

  if(m_probeTagsHasBeenSet)
  {
   JsonValue probeTagsJsonMap;
   for(auto& probeTagsItem : m_probeTags)
   {
     probeTagsJsonMap.WithString(probeTagsItem.first, probeTagsItem.second);
   }
   payload.WithObject("probeTags", std::move(probeTagsJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace NetworkMonitor
} // namespace Aws
