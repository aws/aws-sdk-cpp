/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconnect/model/BridgeNetworkSource.h>
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

BridgeNetworkSource::BridgeNetworkSource(JsonView jsonValue)
{
  *this = jsonValue;
}

BridgeNetworkSource& BridgeNetworkSource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("multicastIp"))
  {
    m_multicastIp = jsonValue.GetString("multicastIp");
    m_multicastIpHasBeenSet = true;
  }
  if(jsonValue.ValueExists("multicastSourceSettings"))
  {
    m_multicastSourceSettings = jsonValue.GetObject("multicastSourceSettings");
    m_multicastSourceSettingsHasBeenSet = true;
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
  return *this;
}

JsonValue BridgeNetworkSource::Jsonize() const
{
  JsonValue payload;

  if(m_multicastIpHasBeenSet)
  {
   payload.WithString("multicastIp", m_multicastIp);

  }

  if(m_multicastSourceSettingsHasBeenSet)
  {
   payload.WithObject("multicastSourceSettings", m_multicastSourceSettings.Jsonize());

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

  return payload;
}

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
