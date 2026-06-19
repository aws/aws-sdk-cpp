/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/partnercentral-selling/model/ListProspectingFromEngagementTasksRequest.h>

#include <utility>

using namespace Aws::PartnerCentralSelling::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String ListProspectingFromEngagementTasksRequest::SerializePayload() const {
  JsonValue payload;

  if (m_catalogHasBeenSet) {
    payload.WithString("Catalog", m_catalog);
  }

  if (m_maxResultsHasBeenSet) {
    payload.WithInteger("MaxResults", m_maxResults);
  }

  if (m_nextTokenHasBeenSet) {
    payload.WithString("NextToken", m_nextToken);
  }

  if (m_taskIdentifierHasBeenSet) {
    Aws::Utils::Array<JsonValue> taskIdentifierJsonList(m_taskIdentifier.size());
    for (unsigned taskIdentifierIndex = 0; taskIdentifierIndex < taskIdentifierJsonList.GetLength(); ++taskIdentifierIndex) {
      taskIdentifierJsonList[taskIdentifierIndex].AsString(m_taskIdentifier[taskIdentifierIndex]);
    }
    payload.WithArray("TaskIdentifier", std::move(taskIdentifierJsonList));
  }

  if (m_taskNameHasBeenSet) {
    Aws::Utils::Array<JsonValue> taskNameJsonList(m_taskName.size());
    for (unsigned taskNameIndex = 0; taskNameIndex < taskNameJsonList.GetLength(); ++taskNameIndex) {
      taskNameJsonList[taskNameIndex].AsString(m_taskName[taskNameIndex]);
    }
    payload.WithArray("TaskName", std::move(taskNameJsonList));
  }

  if (m_startAfterHasBeenSet) {
    payload.WithString("StartAfter", m_startAfter.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_startBeforeHasBeenSet) {
    payload.WithString("StartBefore", m_startBefore.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_sortHasBeenSet) {
    payload.WithObject("Sort", m_sort.Jsonize());
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListProspectingFromEngagementTasksRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSPartnerCentralSelling.ListProspectingFromEngagementTasks"));
  return headers;
}
