/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/partnercentral-selling/model/ListEngagementFromOpportunityTasksRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::PartnerCentralSelling::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListEngagementFromOpportunityTasksRequest::ListEngagementFromOpportunityTasksRequest() : 
    m_catalogHasBeenSet(false),
    m_engagementIdentifierHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_opportunityIdentifierHasBeenSet(false),
    m_sortHasBeenSet(false),
    m_taskIdentifierHasBeenSet(false),
    m_taskStatusHasBeenSet(false)
{
}

Aws::String ListEngagementFromOpportunityTasksRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_catalogHasBeenSet)
  {
   payload.WithString("Catalog", m_catalog);

  }

  if(m_engagementIdentifierHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> engagementIdentifierJsonList(m_engagementIdentifier.size());
   for(unsigned engagementIdentifierIndex = 0; engagementIdentifierIndex < engagementIdentifierJsonList.GetLength(); ++engagementIdentifierIndex)
   {
     engagementIdentifierJsonList[engagementIdentifierIndex].AsString(m_engagementIdentifier[engagementIdentifierIndex]);
   }
   payload.WithArray("EngagementIdentifier", std::move(engagementIdentifierJsonList));

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("MaxResults", m_maxResults);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

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

  if(m_sortHasBeenSet)
  {
   payload.WithObject("Sort", m_sort.Jsonize());

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

  if(m_taskStatusHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> taskStatusJsonList(m_taskStatus.size());
   for(unsigned taskStatusIndex = 0; taskStatusIndex < taskStatusJsonList.GetLength(); ++taskStatusIndex)
   {
     taskStatusJsonList[taskStatusIndex].AsString(TaskStatusMapper::GetNameForTaskStatus(m_taskStatus[taskStatusIndex]));
   }
   payload.WithArray("TaskStatus", std::move(taskStatusJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListEngagementFromOpportunityTasksRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSPartnerCentralSelling.ListEngagementFromOpportunityTasks"));
  return headers;

}




