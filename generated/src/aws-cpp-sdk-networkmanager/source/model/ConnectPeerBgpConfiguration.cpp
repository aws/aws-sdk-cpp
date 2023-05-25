/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkmanager/model/ConnectPeerBgpConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace NetworkManager
{
namespace Model
{

ConnectPeerBgpConfiguration::ConnectPeerBgpConfiguration() : 
    m_coreNetworkAsn(0),
    m_coreNetworkAsnHasBeenSet(false),
    m_peerAsn(0),
    m_peerAsnHasBeenSet(false),
    m_coreNetworkAddressHasBeenSet(false),
    m_peerAddressHasBeenSet(false)
{
}

ConnectPeerBgpConfiguration::ConnectPeerBgpConfiguration(JsonView jsonValue) : 
    m_coreNetworkAsn(0),
    m_coreNetworkAsnHasBeenSet(false),
    m_peerAsn(0),
    m_peerAsnHasBeenSet(false),
    m_coreNetworkAddressHasBeenSet(false),
    m_peerAddressHasBeenSet(false)
{
  *this = jsonValue;
}

ConnectPeerBgpConfiguration& ConnectPeerBgpConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CoreNetworkAsn"))
  {
    m_coreNetworkAsn = jsonValue.GetInt64("CoreNetworkAsn");

    m_coreNetworkAsnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PeerAsn"))
  {
    m_peerAsn = jsonValue.GetInt64("PeerAsn");

    m_peerAsnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CoreNetworkAddress"))
  {
    m_coreNetworkAddress = jsonValue.GetString("CoreNetworkAddress");

    m_coreNetworkAddressHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PeerAddress"))
  {
    m_peerAddress = jsonValue.GetString("PeerAddress");

    m_peerAddressHasBeenSet = true;
  }

  return *this;
}

JsonValue ConnectPeerBgpConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_coreNetworkAsnHasBeenSet)
  {
   payload.WithInt64("CoreNetworkAsn", m_coreNetworkAsn);

  }

  if(m_peerAsnHasBeenSet)
  {
   payload.WithInt64("PeerAsn", m_peerAsn);

  }

  if(m_coreNetworkAddressHasBeenSet)
  {
   payload.WithString("CoreNetworkAddress", m_coreNetworkAddress);

  }

  if(m_peerAddressHasBeenSet)
  {
   payload.WithString("PeerAddress", m_peerAddress);

  }

  return payload;
}

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
