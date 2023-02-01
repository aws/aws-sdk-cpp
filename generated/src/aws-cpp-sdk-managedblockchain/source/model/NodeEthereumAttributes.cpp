/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/managedblockchain/model/NodeEthereumAttributes.h>
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

NodeEthereumAttributes::NodeEthereumAttributes() : 
    m_httpEndpointHasBeenSet(false),
    m_webSocketEndpointHasBeenSet(false)
{
}

NodeEthereumAttributes::NodeEthereumAttributes(JsonView jsonValue) : 
    m_httpEndpointHasBeenSet(false),
    m_webSocketEndpointHasBeenSet(false)
{
  *this = jsonValue;
}

NodeEthereumAttributes& NodeEthereumAttributes::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("HttpEndpoint"))
  {
    m_httpEndpoint = jsonValue.GetString("HttpEndpoint");

    m_httpEndpointHasBeenSet = true;
  }

  if(jsonValue.ValueExists("WebSocketEndpoint"))
  {
    m_webSocketEndpoint = jsonValue.GetString("WebSocketEndpoint");

    m_webSocketEndpointHasBeenSet = true;
  }

  return *this;
}

JsonValue NodeEthereumAttributes::Jsonize() const
{
  JsonValue payload;

  if(m_httpEndpointHasBeenSet)
  {
   payload.WithString("HttpEndpoint", m_httpEndpoint);

  }

  if(m_webSocketEndpointHasBeenSet)
  {
   payload.WithString("WebSocketEndpoint", m_webSocketEndpoint);

  }

  return payload;
}

} // namespace Model
} // namespace ManagedBlockchain
} // namespace Aws
