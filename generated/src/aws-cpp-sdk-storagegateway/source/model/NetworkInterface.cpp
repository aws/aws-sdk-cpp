/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/storagegateway/model/NetworkInterface.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace StorageGateway
{
namespace Model
{

NetworkInterface::NetworkInterface() : 
    m_ipv4AddressHasBeenSet(false),
    m_macAddressHasBeenSet(false),
    m_ipv6AddressHasBeenSet(false)
{
}

NetworkInterface::NetworkInterface(JsonView jsonValue) : 
    m_ipv4AddressHasBeenSet(false),
    m_macAddressHasBeenSet(false),
    m_ipv6AddressHasBeenSet(false)
{
  *this = jsonValue;
}

NetworkInterface& NetworkInterface::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Ipv4Address"))
  {
    m_ipv4Address = jsonValue.GetString("Ipv4Address");

    m_ipv4AddressHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MacAddress"))
  {
    m_macAddress = jsonValue.GetString("MacAddress");

    m_macAddressHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Ipv6Address"))
  {
    m_ipv6Address = jsonValue.GetString("Ipv6Address");

    m_ipv6AddressHasBeenSet = true;
  }

  return *this;
}

JsonValue NetworkInterface::Jsonize() const
{
  JsonValue payload;

  if(m_ipv4AddressHasBeenSet)
  {
   payload.WithString("Ipv4Address", m_ipv4Address);

  }

  if(m_macAddressHasBeenSet)
  {
   payload.WithString("MacAddress", m_macAddress);

  }

  if(m_ipv6AddressHasBeenSet)
  {
   payload.WithString("Ipv6Address", m_ipv6Address);

  }

  return payload;
}

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
