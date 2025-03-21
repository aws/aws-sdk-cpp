/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/network-firewall/model/FlowFilter.h>
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

FlowFilter::FlowFilter(JsonView jsonValue)
{
  *this = jsonValue;
}

FlowFilter& FlowFilter::operator =(JsonView jsonValue)
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
  if(jsonValue.ValueExists("Protocols"))
  {
    Aws::Utils::Array<JsonView> protocolsJsonList = jsonValue.GetArray("Protocols");
    for(unsigned protocolsIndex = 0; protocolsIndex < protocolsJsonList.GetLength(); ++protocolsIndex)
    {
      m_protocols.push_back(protocolsJsonList[protocolsIndex].AsString());
    }
    m_protocolsHasBeenSet = true;
  }
  return *this;
}

JsonValue FlowFilter::Jsonize() const
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

  if(m_protocolsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> protocolsJsonList(m_protocols.size());
   for(unsigned protocolsIndex = 0; protocolsIndex < protocolsJsonList.GetLength(); ++protocolsIndex)
   {
     protocolsJsonList[protocolsIndex].AsString(m_protocols[protocolsIndex]);
   }
   payload.WithArray("Protocols", std::move(protocolsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
