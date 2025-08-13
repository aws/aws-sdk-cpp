/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/partnercentral-selling/model/ListEngagementByAcceptingInvitationTasksRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::PartnerCentralSelling::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String ListEngagementByAcceptingInvitationTasksRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("MaxResults", m_maxResults);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  if(m_sortHasBeenSet)
  {
   payload.WithObject("Sort", m_sort.Jsonize());

  }

  if(m_catalogHasBeenSet)
  {
   payload.WithString("Catalog", m_catalog);

  }

  if(m_taskStatusHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> taskStatusJsonList(m_taskStatus.size());
   for(unsigned taskStatusIndex = 0; taskStatusIndex < taskStatusJsonList.GetLength(); ++taskStatusIndex)
   {
     taskStatusJsonList[taskStatusIndex].AsString(TaskStatusMapper::GetNameForTaskStatus(m_taskStatus[taskStatusIndex]));
   }
   payload.WithArray("TaskStatus", std::move(taskStatusJsonList));

  }

  if(m_opportunityIdentifierHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> opportunityIdentifierJsonList(m_opportunityIdentifier.size());
   for(unsigned opportunityIdentifierIndex = 0; opportunityIdentifierIndex < opportunityIdentifierJsonList.GetLength(); ++opportunityIdentifierIndex)
   {
     opportunityIdentifierJsonList[opportunityIdentifierIndex].AsString(m_opportunityIdentifier[opportunityIdentifierIndex]);
   }
   payload.WithArray("OpportunityIdentifier", std::move(opportunityIdentifierJsonList));

  }

  if(m_engagementInvitationIdentifierHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> engagementInvitationIdentifierJsonList(m_engagementInvitationIdentifier.size());
   for(unsigned engagementInvitationIdentifierIndex = 0; engagementInvitationIdentifierIndex < engagementInvitationIdentifierJsonList.GetLength(); ++engagementInvitationIdentifierIndex)
   {
     engagementInvitationIdentifierJsonList[engagementInvitationIdentifierIndex].AsString(m_engagementInvitationIdentifier[engagementInvitationIdentifierIndex]);
   }
   payload.WithArray("EngagementInvitationIdentifier", std::move(engagementInvitationIdentifierJsonList));

  }

  if(m_taskIdentifierHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> taskIdentifierJsonList(m_taskIdentifier.size());
   for(unsigned taskIdentifierIndex = 0; taskIdentifierIndex < taskIdentifierJsonList.GetLength(); ++taskIdentifierIndex)
   {
     taskIdentifierJsonList[taskIdentifierIndex].AsString(m_taskIdentifier[taskIdentifierIndex]);
   }
   payload.WithArray("TaskIdentifier", std::move(taskIdentifierJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListEngagementByAcceptingInvitationTasksRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSPartnerCentralSelling.ListEngagementByAcceptingInvitationTasks"));
  return headers;

}




