/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/ListAccountLinksRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WorkSpaces::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String ListAccountLinksRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_linkStatusFilterHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> linkStatusFilterJsonList(m_linkStatusFilter.size());
   for(unsigned linkStatusFilterIndex = 0; linkStatusFilterIndex < linkStatusFilterJsonList.GetLength(); ++linkStatusFilterIndex)
   {
     linkStatusFilterJsonList[linkStatusFilterIndex].AsString(AccountLinkStatusEnumMapper::GetNameForAccountLinkStatusEnum(m_linkStatusFilter[linkStatusFilterIndex]));
   }
   payload.WithArray("LinkStatusFilter", std::move(linkStatusFilterJsonList));

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("MaxResults", m_maxResults);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListAccountLinksRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "WorkspacesService.ListAccountLinks"));
  return headers;

}




