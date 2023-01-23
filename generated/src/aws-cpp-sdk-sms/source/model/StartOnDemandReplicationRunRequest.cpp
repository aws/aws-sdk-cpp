/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sms/model/StartOnDemandReplicationRunRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SMS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StartOnDemandReplicationRunRequest::StartOnDemandReplicationRunRequest() : 
    m_replicationJobIdHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

Aws::String StartOnDemandReplicationRunRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_replicationJobIdHasBeenSet)
  {
   payload.WithString("replicationJobId", m_replicationJobId);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection StartOnDemandReplicationRunRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSServerMigrationService_V2016_10_24.StartOnDemandReplicationRun"));
  return headers;

}




