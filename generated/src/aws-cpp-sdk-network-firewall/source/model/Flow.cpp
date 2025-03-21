/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/network-firewall/model/Flow.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace NetworkFirewall
{
namespace Model
{

Flow::Flow(JsonView jsonValue)
{
  *this = jsonValue;
}

Flow& Flow::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SourceAddress"))
  {
    m_sourceAddress = jsonValue.GetObject("SourceAddress");
    m_sourceAddressHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DestinationAddress"))
  {
    m_destinationAddress = jsonValue.GetObject("DestinationAddress");
    m_destinationAddressHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SourcePort"))
  {
    m_sourcePort = jsonValue.GetString("SourcePort");
    m_sourcePortHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DestinationPort"))
  {
    m_destinationPort = jsonValue.GetString("DestinationPort");
    m_destinationPortHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Protocol"))
  {
    m_protocol = jsonValue.GetString("Protocol");
    m_protocolHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Age"))
  {
    m_age = jsonValue.GetInteger("Age");
    m_ageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PacketCount"))
  {
    m_packetCount = jsonValue.GetInteger("PacketCount");
    m_packetCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ByteCount"))
  {
    m_byteCount = jsonValue.GetInt64("ByteCount");
    m_byteCountHasBeenSet = true;
  }
  return *this;
}

JsonValue Flow::Jsonize() const
{
  JsonValue payload;

  if(m_sourceAddressHasBeenSet)
  {
   payload.WithObject("SourceAddress", m_sourceAddress.Jsonize());

  }

  if(m_destinationAddressHasBeenSet)
  {
   payload.WithObject("DestinationAddress", m_destinationAddress.Jsonize());

  }

  if(m_sourcePortHasBeenSet)
  {
   payload.WithString("SourcePort", m_sourcePort);

  }

  if(m_destinationPortHasBeenSet)
  {
   payload.WithString("DestinationPort", m_destinationPort);

  }

  if(m_protocolHasBeenSet)
  {
   payload.WithString("Protocol", m_protocol);

  }

  if(m_ageHasBeenSet)
  {
   payload.WithInteger("Age", m_age);

  }

  if(m_packetCountHasBeenSet)
  {
   payload.WithInteger("PacketCount", m_packetCount);

  }

  if(m_byteCountHasBeenSet)
  {
   payload.WithInt64("ByteCount", m_byteCount);

  }

  return payload;
}

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
