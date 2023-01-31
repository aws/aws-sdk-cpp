/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearch/model/InboundConnection.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace OpenSearchService
{
namespace Model
{

InboundConnection::InboundConnection() : 
    m_localDomainInfoHasBeenSet(false),
    m_remoteDomainInfoHasBeenSet(false),
    m_connectionIdHasBeenSet(false),
    m_connectionStatusHasBeenSet(false),
    m_connectionMode(ConnectionMode::NOT_SET),
    m_connectionModeHasBeenSet(false)
{
}

InboundConnection::InboundConnection(JsonView jsonValue) : 
    m_localDomainInfoHasBeenSet(false),
    m_remoteDomainInfoHasBeenSet(false),
    m_connectionIdHasBeenSet(false),
    m_connectionStatusHasBeenSet(false),
    m_connectionMode(ConnectionMode::NOT_SET),
    m_connectionModeHasBeenSet(false)
{
  *this = jsonValue;
}

InboundConnection& InboundConnection::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("LocalDomainInfo"))
  {
    m_localDomainInfo = jsonValue.GetObject("LocalDomainInfo");

    m_localDomainInfoHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RemoteDomainInfo"))
  {
    m_remoteDomainInfo = jsonValue.GetObject("RemoteDomainInfo");

    m_remoteDomainInfoHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ConnectionId"))
  {
    m_connectionId = jsonValue.GetString("ConnectionId");

    m_connectionIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ConnectionStatus"))
  {
    m_connectionStatus = jsonValue.GetObject("ConnectionStatus");

    m_connectionStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ConnectionMode"))
  {
    m_connectionMode = ConnectionModeMapper::GetConnectionModeForName(jsonValue.GetString("ConnectionMode"));

    m_connectionModeHasBeenSet = true;
  }

  return *this;
}

JsonValue InboundConnection::Jsonize() const
{
  JsonValue payload;

  if(m_localDomainInfoHasBeenSet)
  {
   payload.WithObject("LocalDomainInfo", m_localDomainInfo.Jsonize());

  }

  if(m_remoteDomainInfoHasBeenSet)
  {
   payload.WithObject("RemoteDomainInfo", m_remoteDomainInfo.Jsonize());

  }

  if(m_connectionIdHasBeenSet)
  {
   payload.WithString("ConnectionId", m_connectionId);

  }

  if(m_connectionStatusHasBeenSet)
  {
   payload.WithObject("ConnectionStatus", m_connectionStatus.Jsonize());

  }

  if(m_connectionModeHasBeenSet)
  {
   payload.WithString("ConnectionMode", ConnectionModeMapper::GetNameForConnectionMode(m_connectionMode));
  }

  return payload;
}

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
