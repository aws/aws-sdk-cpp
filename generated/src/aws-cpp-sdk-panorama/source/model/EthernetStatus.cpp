/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/panorama/model/EthernetStatus.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Panorama
{
namespace Model
{

EthernetStatus::EthernetStatus() : 
    m_connectionStatus(NetworkConnectionStatus::NOT_SET),
    m_connectionStatusHasBeenSet(false),
    m_hwAddressHasBeenSet(false),
    m_ipAddressHasBeenSet(false)
{
}

EthernetStatus::EthernetStatus(JsonView jsonValue) : 
    m_connectionStatus(NetworkConnectionStatus::NOT_SET),
    m_connectionStatusHasBeenSet(false),
    m_hwAddressHasBeenSet(false),
    m_ipAddressHasBeenSet(false)
{
  *this = jsonValue;
}

EthernetStatus& EthernetStatus::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ConnectionStatus"))
  {
    m_connectionStatus = NetworkConnectionStatusMapper::GetNetworkConnectionStatusForName(jsonValue.GetString("ConnectionStatus"));

    m_connectionStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HwAddress"))
  {
    m_hwAddress = jsonValue.GetString("HwAddress");

    m_hwAddressHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IpAddress"))
  {
    m_ipAddress = jsonValue.GetString("IpAddress");

    m_ipAddressHasBeenSet = true;
  }

  return *this;
}

JsonValue EthernetStatus::Jsonize() const
{
  JsonValue payload;

  if(m_connectionStatusHasBeenSet)
  {
   payload.WithString("ConnectionStatus", NetworkConnectionStatusMapper::GetNameForNetworkConnectionStatus(m_connectionStatus));
  }

  if(m_hwAddressHasBeenSet)
  {
   payload.WithString("HwAddress", m_hwAddress);

  }

  if(m_ipAddressHasBeenSet)
  {
   payload.WithString("IpAddress", m_ipAddress);

  }

  return payload;
}

} // namespace Model
} // namespace Panorama
} // namespace Aws
