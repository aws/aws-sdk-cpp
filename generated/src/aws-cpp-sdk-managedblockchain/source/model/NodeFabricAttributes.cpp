/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/managedblockchain/model/NodeFabricAttributes.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ManagedBlockchain
{
namespace Model
{

NodeFabricAttributes::NodeFabricAttributes() : 
    m_peerEndpointHasBeenSet(false),
    m_peerEventEndpointHasBeenSet(false)
{
}

NodeFabricAttributes::NodeFabricAttributes(JsonView jsonValue) : 
    m_peerEndpointHasBeenSet(false),
    m_peerEventEndpointHasBeenSet(false)
{
  *this = jsonValue;
}

NodeFabricAttributes& NodeFabricAttributes::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PeerEndpoint"))
  {
    m_peerEndpoint = jsonValue.GetString("PeerEndpoint");

    m_peerEndpointHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PeerEventEndpoint"))
  {
    m_peerEventEndpoint = jsonValue.GetString("PeerEventEndpoint");

    m_peerEventEndpointHasBeenSet = true;
  }

  return *this;
}

JsonValue NodeFabricAttributes::Jsonize() const
{
  JsonValue payload;

  if(m_peerEndpointHasBeenSet)
  {
   payload.WithString("PeerEndpoint", m_peerEndpoint);

  }

  if(m_peerEventEndpointHasBeenSet)
  {
   payload.WithString("PeerEventEndpoint", m_peerEventEndpoint);

  }

  return payload;
}

} // namespace Model
} // namespace ManagedBlockchain
} // namespace Aws
