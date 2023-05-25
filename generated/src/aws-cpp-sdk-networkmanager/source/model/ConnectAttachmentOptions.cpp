/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkmanager/model/ConnectAttachmentOptions.h>
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

ConnectAttachmentOptions::ConnectAttachmentOptions() : 
    m_protocol(TunnelProtocol::NOT_SET),
    m_protocolHasBeenSet(false)
{
}

ConnectAttachmentOptions::ConnectAttachmentOptions(JsonView jsonValue) : 
    m_protocol(TunnelProtocol::NOT_SET),
    m_protocolHasBeenSet(false)
{
  *this = jsonValue;
}

ConnectAttachmentOptions& ConnectAttachmentOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Protocol"))
  {
    m_protocol = TunnelProtocolMapper::GetTunnelProtocolForName(jsonValue.GetString("Protocol"));

    m_protocolHasBeenSet = true;
  }

  return *this;
}

JsonValue ConnectAttachmentOptions::Jsonize() const
{
  JsonValue payload;

  if(m_protocolHasBeenSet)
  {
   payload.WithString("Protocol", TunnelProtocolMapper::GetNameForTunnelProtocol(m_protocol));
  }

  return payload;
}

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
