/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces-instances/model/ListWorkspaceInstancesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WorkspacesInstances::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String ListWorkspaceInstancesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_provisionStatesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> provisionStatesJsonList(m_provisionStates.size());
   for(unsigned provisionStatesIndex = 0; provisionStatesIndex < provisionStatesJsonList.GetLength(); ++provisionStatesIndex)
   {
     provisionStatesJsonList[provisionStatesIndex].AsString(ProvisionStateEnumMapper::GetNameForProvisionStateEnum(m_provisionStates[provisionStatesIndex]));
   }
   payload.WithArray("ProvisionStates", std::move(provisionStatesJsonList));

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("MaxResults", m_maxResults);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListWorkspaceInstancesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "EUCMIFrontendAPIService.ListWorkspaceInstances"));
  return headers;

}




