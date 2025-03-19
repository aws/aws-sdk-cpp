/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconnect/model/NdiDiscoveryServerConfig.h>
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

NdiDiscoveryServerConfig::NdiDiscoveryServerConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

NdiDiscoveryServerConfig& NdiDiscoveryServerConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("discoveryServerAddress"))
  {
    m_discoveryServerAddress = jsonValue.GetString("discoveryServerAddress");
    m_discoveryServerAddressHasBeenSet = true;
  }
  if(jsonValue.ValueExists("discoveryServerPort"))
  {
    m_discoveryServerPort = jsonValue.GetInteger("discoveryServerPort");
    m_discoveryServerPortHasBeenSet = true;
  }
  if(jsonValue.ValueExists("vpcInterfaceAdapter"))
  {
    m_vpcInterfaceAdapter = jsonValue.GetString("vpcInterfaceAdapter");
    m_vpcInterfaceAdapterHasBeenSet = true;
  }
  return *this;
}

JsonValue NdiDiscoveryServerConfig::Jsonize() const
{
  JsonValue payload;

  if(m_discoveryServerAddressHasBeenSet)
  {
   payload.WithString("discoveryServerAddress", m_discoveryServerAddress);

  }

  if(m_discoveryServerPortHasBeenSet)
  {
   payload.WithInteger("discoveryServerPort", m_discoveryServerPort);

  }

  if(m_vpcInterfaceAdapterHasBeenSet)
  {
   payload.WithString("vpcInterfaceAdapter", m_vpcInterfaceAdapter);

  }

  return payload;
}

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
