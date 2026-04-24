/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/partnercentral-selling/model/ListOpportunityFromEngagementTasksRequest.h>

#include <utility>

using namespace Aws::PartnerCentralSelling::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String ListOpportunityFromEngagementTasksRequest::SerializePayload() const {
  JsonValue payload;

  if (m_maxResultsHasBeenSet) {
    payload.WithInteger("MaxResults", m_maxResults);
  }

  if (m_nextTokenHasBeenSet) {
    payload.WithString("NextToken", m_nextToken);
  }

  if (m_sortHasBeenSet) {
    payload.WithObject("Sort", m_sort.Jsonize());
  }

  if (m_catalogHasBeenSet) {
    payload.WithString("Catalog", m_catalog);
  }

  if (m_taskStatusHasBeenSet) {
    Aws::Utils::Array<JsonValue> taskStatusJsonList(m_taskStatus.size());
    for (unsigned taskStatusIndex = 0; taskStatusIndex < taskStatusJsonList.GetLength(); ++taskStatusIndex) {
      taskStatusJsonList[taskStatusIndex].AsString(TaskStatusMapper::GetNameForTaskStatus(m_taskStatus[taskStatusIndex]));
    }
    payload.WithArray("TaskStatus", std::move(taskStatusJsonList));
  }

  if (m_taskIdentifierHasBeenSet) {
    Aws::Utils::Array<JsonValue> taskIdentifierJsonList(m_taskIdentifier.size());
    for (unsigned taskIdentifierIndex = 0; taskIdentifierIndex < taskIdentifierJsonList.GetLength(); ++taskIdentifierIndex) {
      taskIdentifierJsonList[taskIdentifierIndex].AsString(m_taskIdentifier[taskIdentifierIndex]);
    }
    payload.WithArray("TaskIdentifier", std::move(taskIdentifierJsonList));
  }

  if (m_opportunityIdentifierHasBeenSet) {
    Aws::Utils::Array<JsonValue> opportunityIdentifierJsonList(m_opportunityIdentifier.size());
    for (unsigned opportunityIdentifierIndex = 0; opportunityIdentifierIndex < opportunityIdentifierJsonList.GetLength();
         ++opportunityIdentifierIndex) {
      opportunityIdentifierJsonList[opportunityIdentifierIndex].AsString(m_opportunityIdentifier[opportunityIdentifierIndex]);
    }
    payload.WithArray("OpportunityIdentifier", std::move(opportunityIdentifierJsonList));
  }

  if (m_engagementIdentifierHasBeenSet) {
    Aws::Utils::Array<JsonValue> engagementIdentifierJsonList(m_engagementIdentifier.size());
    for (unsigned engagementIdentifierIndex = 0; engagementIdentifierIndex < engagementIdentifierJsonList.GetLength();
         ++engagementIdentifierIndex) {
      engagementIdentifierJsonList[engagementIdentifierIndex].AsString(m_engagementIdentifier[engagementIdentifierIndex]);
    }
    payload.WithArray("EngagementIdentifier", std::move(engagementIdentifierJsonList));
  }

  if (m_contextIdentifierHasBeenSet) {
    Aws::Utils::Array<JsonValue> contextIdentifierJsonList(m_contextIdentifier.size());
    for (unsigned contextIdentifierIndex = 0; contextIdentifierIndex < contextIdentifierJsonList.GetLength(); ++contextIdentifierIndex) {
      contextIdentifierJsonList[contextIdentifierIndex].AsString(m_contextIdentifier[contextIdentifierIndex]);
    }
    payload.WithArray("ContextIdentifier", std::move(contextIdentifierJsonList));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListOpportunityFromEngagementTasksRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSPartnerCentralSelling.ListOpportunityFromEngagementTasks"));
  return headers;
}
