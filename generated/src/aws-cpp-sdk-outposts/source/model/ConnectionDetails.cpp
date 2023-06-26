/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/outposts/model/ConnectionDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Outposts
{
namespace Model
{

ConnectionDetails::ConnectionDetails() : 
    m_clientPublicKeyHasBeenSet(false),
    m_serverPublicKeyHasBeenSet(false),
    m_serverEndpointHasBeenSet(false),
    m_clientTunnelAddressHasBeenSet(false),
    m_serverTunnelAddressHasBeenSet(false),
    m_allowedIpsHasBeenSet(false)
{
}

ConnectionDetails::ConnectionDetails(JsonView jsonValue) : 
    m_clientPublicKeyHasBeenSet(false),
    m_serverPublicKeyHasBeenSet(false),
    m_serverEndpointHasBeenSet(false),
    m_clientTunnelAddressHasBeenSet(false),
    m_serverTunnelAddressHasBeenSet(false),
    m_allowedIpsHasBeenSet(false)
{
  *this = jsonValue;
}

ConnectionDetails& ConnectionDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ClientPublicKey"))
  {
    m_clientPublicKey = jsonValue.GetString("ClientPublicKey");

    m_clientPublicKeyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ServerPublicKey"))
  {
    m_serverPublicKey = jsonValue.GetString("ServerPublicKey");

    m_serverPublicKeyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ServerEndpoint"))
  {
    m_serverEndpoint = jsonValue.GetString("ServerEndpoint");

    m_serverEndpointHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ClientTunnelAddress"))
  {
    m_clientTunnelAddress = jsonValue.GetString("ClientTunnelAddress");

    m_clientTunnelAddressHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ServerTunnelAddress"))
  {
    m_serverTunnelAddress = jsonValue.GetString("ServerTunnelAddress");

    m_serverTunnelAddressHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AllowedIps"))
  {
    Aws::Utils::Array<JsonView> allowedIpsJsonList = jsonValue.GetArray("AllowedIps");
    for(unsigned allowedIpsIndex = 0; allowedIpsIndex < allowedIpsJsonList.GetLength(); ++allowedIpsIndex)
    {
      m_allowedIps.push_back(allowedIpsJsonList[allowedIpsIndex].AsString());
    }
    m_allowedIpsHasBeenSet = true;
  }

  return *this;
}

JsonValue ConnectionDetails::Jsonize() const
{
  JsonValue payload;

  if(m_clientPublicKeyHasBeenSet)
  {
   payload.WithString("ClientPublicKey", m_clientPublicKey);

  }

  if(m_serverPublicKeyHasBeenSet)
  {
   payload.WithString("ServerPublicKey", m_serverPublicKey);

  }

  if(m_serverEndpointHasBeenSet)
  {
   payload.WithString("ServerEndpoint", m_serverEndpoint);

  }

  if(m_clientTunnelAddressHasBeenSet)
  {
   payload.WithString("ClientTunnelAddress", m_clientTunnelAddress);

  }

  if(m_serverTunnelAddressHasBeenSet)
  {
   payload.WithString("ServerTunnelAddress", m_serverTunnelAddress);

  }

  if(m_allowedIpsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> allowedIpsJsonList(m_allowedIps.size());
   for(unsigned allowedIpsIndex = 0; allowedIpsIndex < allowedIpsJsonList.GetLength(); ++allowedIpsIndex)
   {
     allowedIpsJsonList[allowedIpsIndex].AsString(m_allowedIps[allowedIpsIndex]);
   }
   payload.WithArray("AllowedIps", std::move(allowedIpsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Outposts
} // namespace Aws
