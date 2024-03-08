/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resource-explorer-2/model/ListIndexesForMembersRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ResourceExplorer2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListIndexesForMembersRequest::ListIndexesForMembersRequest() : 
    m_accountIdListHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String ListIndexesForMembersRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_accountIdListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> accountIdListJsonList(m_accountIdList.size());
   for(unsigned accountIdListIndex = 0; accountIdListIndex < accountIdListJsonList.GetLength(); ++accountIdListIndex)
   {
     accountIdListJsonList[accountIdListIndex].AsString(m_accountIdList[accountIdListIndex]);
   }
   payload.WithArray("AccountIdList", std::move(accountIdListJsonList));

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




