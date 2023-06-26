/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sms/model/DisassociateConnectorRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SMS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DisassociateConnectorRequest::DisassociateConnectorRequest() : 
    m_connectorIdHasBeenSet(false)
{
}

Aws::String DisassociateConnectorRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_connectorIdHasBeenSet)
  {
   payload.WithString("connectorId", m_connectorId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DisassociateConnectorRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSServerMigrationService_V2016_10_24.DisassociateConnector"));
  return headers;

}




