/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconnect/model/AddBridgeNetworkOutputRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaConnect
{
namespace Model
{

AddBridgeNetworkOutputRequest::AddBridgeNetworkOutputRequest() : 
    m_ipAddressHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_networkNameHasBeenSet(false),
    m_port(0),
    m_portHasBeenSet(false),
    m_protocol(Protocol::NOT_SET),
    m_protocolHasBeenSet(false),
    m_ttl(0),
    m_ttlHasBeenSet(false)
{
}

AddBridgeNetworkOutputRequest::AddBridgeNetworkOutputRequest(JsonView jsonValue) : 
    m_ipAddressHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_networkNameHasBeenSet(false),
    m_port(0),
    m_portHasBeenSet(false),
    m_protocol(Protocol::NOT_SET),
    m_protocolHasBeenSet(false),
    m_ttl(0),
    m_ttlHasBeenSet(false)
{
  *this = jsonValue;
}

AddBridgeNetworkOutputRequest& AddBridgeNetworkOutputRequest::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ipAddress"))
  {
    m_ipAddress = jsonValue.GetString("ipAddress");

    m_ipAddressHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("networkName"))
  {
    m_networkName = jsonValue.GetString("networkName");

    m_networkNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("port"))
  {
    m_port = jsonValue.GetInteger("port");

    m_portHasBeenSet = true;
  }

  if(jsonValue.ValueExists("protocol"))
  {
    m_protocol = ProtocolMapper::GetProtocolForName(jsonValue.GetString("protocol"));

    m_protocolHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ttl"))
  {
    m_ttl = jsonValue.GetInteger("ttl");

    m_ttlHasBeenSet = true;
  }

  return *this;
}

JsonValue AddBridgeNetworkOutputRequest::Jsonize() const
{
  JsonValue payload;

  if(m_ipAddressHasBeenSet)
  {
   payload.WithString("ipAddress", m_ipAddress);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_networkNameHasBeenSet)
  {
   payload.WithString("networkName", m_networkName);

  }

  if(m_portHasBeenSet)
  {
   payload.WithInteger("port", m_port);

  }

  if(m_protocolHasBeenSet)
  {
   payload.WithString("protocol", ProtocolMapper::GetNameForProtocol(m_protocol));
  }

  if(m_ttlHasBeenSet)
  {
   payload.WithInteger("ttl", m_ttl);

  }

  return payload;
}

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
