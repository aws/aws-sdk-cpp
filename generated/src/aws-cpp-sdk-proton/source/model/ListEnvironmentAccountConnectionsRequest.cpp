/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/proton/model/ListEnvironmentAccountConnectionsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Proton::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String ListEnvironmentAccountConnectionsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_environmentNameHasBeenSet)
  {
   payload.WithString("environmentName", m_environmentName);

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("maxResults", m_maxResults);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("nextToken", m_nextToken);

  }

  if(m_requestedByHasBeenSet)
  {
   payload.WithString("requestedBy", EnvironmentAccountConnectionRequesterAccountTypeMapper::GetNameForEnvironmentAccountConnectionRequesterAccountType(m_requestedBy));
  }

  if(m_statusesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> statusesJsonList(m_statuses.size());
   for(unsigned statusesIndex = 0; statusesIndex < statusesJsonList.GetLength(); ++statusesIndex)
   {
     statusesJsonList[statusesIndex].AsString(EnvironmentAccountConnectionStatusMapper::GetNameForEnvironmentAccountConnectionStatus(m_statuses[statusesIndex]));
   }
   payload.WithArray("statuses", std::move(statusesJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListEnvironmentAccountConnectionsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AwsProton20200720.ListEnvironmentAccountConnections"));
  return headers;

}




