/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearch/model/CreateOutboundConnectionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::OpenSearchService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateOutboundConnectionRequest::CreateOutboundConnectionRequest() : 
    m_localDomainInfoHasBeenSet(false),
    m_remoteDomainInfoHasBeenSet(false),
    m_connectionAliasHasBeenSet(false),
    m_connectionMode(ConnectionMode::NOT_SET),
    m_connectionModeHasBeenSet(false),
    m_connectionPropertiesHasBeenSet(false)
{
}

Aws::String CreateOutboundConnectionRequest::SerializePayload() const
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

  if(m_connectionAliasHasBeenSet)
  {
   payload.WithString("ConnectionAlias", m_connectionAlias);

  }

  if(m_connectionModeHasBeenSet)
  {
   payload.WithString("ConnectionMode", ConnectionModeMapper::GetNameForConnectionMode(m_connectionMode));
  }

  if(m_connectionPropertiesHasBeenSet)
  {
   payload.WithObject("ConnectionProperties", m_connectionProperties.Jsonize());

  }

  return payload.View().WriteReadable();
}




