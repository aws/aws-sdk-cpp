/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/robomaker/model/NetworkInterface.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace RoboMaker
{
namespace Model
{

NetworkInterface::NetworkInterface() : 
    m_networkInterfaceIdHasBeenSet(false),
    m_privateIpAddressHasBeenSet(false),
    m_publicIpAddressHasBeenSet(false)
{
}

NetworkInterface::NetworkInterface(JsonView jsonValue) : 
    m_networkInterfaceIdHasBeenSet(false),
    m_privateIpAddressHasBeenSet(false),
    m_publicIpAddressHasBeenSet(false)
{
  *this = jsonValue;
}

NetworkInterface& NetworkInterface::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("networkInterfaceId"))
  {
    m_networkInterfaceId = jsonValue.GetString("networkInterfaceId");

    m_networkInterfaceIdHasBeenSet = true;
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

  return *this;
}

JsonValue NetworkInterface::Jsonize() const
{
  JsonValue payload;

  if(m_networkInterfaceIdHasBeenSet)
  {
   payload.WithString("networkInterfaceId", m_networkInterfaceId);

  }

  if(m_privateIpAddressHasBeenSet)
  {
   payload.WithString("privateIpAddress", m_privateIpAddress);

  }

  if(m_publicIpAddressHasBeenSet)
  {
   payload.WithString("publicIpAddress", m_publicIpAddress);

  }

  return payload;
}

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
