/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pcs/model/Endpoint.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace PCS
{
namespace Model
{

Endpoint::Endpoint(JsonView jsonValue)
{
  *this = jsonValue;
}

Endpoint& Endpoint::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("type"))
  {
    m_type = EndpointTypeMapper::GetEndpointTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("privateIpAddress"))
  {
    m_privateIpAddress = jsonValue.GetString("privateIpAddress");
    m_privateIpAddressHasBeenSet = true;
  }
  if(jsonValue.ValueExists("publicIpAddress"))
  {
    m_publicIpAddress = jsonValue.GetString("publicIpAddress");
    m_publicIpAddressHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ipv6Address"))
  {
    m_ipv6Address = jsonValue.GetString("ipv6Address");
    m_ipv6AddressHasBeenSet = true;
  }
  if(jsonValue.ValueExists("port"))
  {
    m_port = jsonValue.GetString("port");
    m_portHasBeenSet = true;
  }
  return *this;
}

JsonValue Endpoint::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", EndpointTypeMapper::GetNameForEndpointType(m_type));
  }

  if(m_privateIpAddressHasBeenSet)
  {
   payload.WithString("privateIpAddress", m_privateIpAddress);

  }

  if(m_publicIpAddressHasBeenSet)
  {
   payload.WithString("publicIpAddress", m_publicIpAddress);

  }

  if(m_ipv6AddressHasBeenSet)
  {
   payload.WithString("ipv6Address", m_ipv6Address);

  }

  if(m_portHasBeenSet)
  {
   payload.WithString("port", m_port);

  }

  return payload;
}

} // namespace Model
} // namespace PCS
} // namespace Aws
