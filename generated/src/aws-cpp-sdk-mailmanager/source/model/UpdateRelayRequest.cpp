/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mailmanager/model/UpdateRelayRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MailManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateRelayRequest::UpdateRelayRequest() : 
    m_authenticationHasBeenSet(false),
    m_relayIdHasBeenSet(false),
    m_relayNameHasBeenSet(false),
    m_serverNameHasBeenSet(false),
    m_serverPort(0),
    m_serverPortHasBeenSet(false)
{
}

Aws::String UpdateRelayRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_authenticationHasBeenSet)
  {
   payload.WithObject("Authentication", m_authentication.Jsonize());

  }

  if(m_relayIdHasBeenSet)
  {
   payload.WithString("RelayId", m_relayId);

  }

  if(m_relayNameHasBeenSet)
  {
   payload.WithString("RelayName", m_relayName);

  }

  if(m_serverNameHasBeenSet)
  {
   payload.WithString("ServerName", m_serverName);

  }

  if(m_serverPortHasBeenSet)
  {
   payload.WithInteger("ServerPort", m_serverPort);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateRelayRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "MailManagerSvc.UpdateRelay"));
  return headers;

}




