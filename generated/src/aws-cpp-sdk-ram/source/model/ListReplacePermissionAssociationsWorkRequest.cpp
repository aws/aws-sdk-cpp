/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ram/model/ListReplacePermissionAssociationsWorkRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::RAM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListReplacePermissionAssociationsWorkRequest::ListReplacePermissionAssociationsWorkRequest() : 
    m_workIdsHasBeenSet(false),
    m_status(ReplacePermissionAssociationsWorkStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false)
{
}

Aws::String ListReplacePermissionAssociationsWorkRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_workIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> workIdsJsonList(m_workIds.size());
   for(unsigned workIdsIndex = 0; workIdsIndex < workIdsJsonList.GetLength(); ++workIdsIndex)
   {
     workIdsJsonList[workIdsIndex].AsString(m_workIds[workIdsIndex]);
   }
   payload.WithArray("workIds", std::move(workIdsJsonList));

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", ReplacePermissionAssociationsWorkStatusMapper::GetNameForReplacePermissionAssociationsWorkStatus(m_status));
  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("nextToken", m_nextToken);

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("maxResults", m_maxResults);

  }

  return payload.View().WriteReadable();
}




