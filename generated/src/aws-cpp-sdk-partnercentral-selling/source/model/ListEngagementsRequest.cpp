/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/partnercentral-selling/model/ListEngagementsRequest.h>

#include <utility>

using namespace Aws::PartnerCentralSelling::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String ListEngagementsRequest::SerializePayload() const {
  JsonValue payload;

  if (m_catalogHasBeenSet) {
    payload.WithString("Catalog", m_catalog);
  }

  if (m_createdByHasBeenSet) {
    Aws::Utils::Array<JsonValue> createdByJsonList(m_createdBy.size());
    for (unsigned createdByIndex = 0; createdByIndex < createdByJsonList.GetLength(); ++createdByIndex) {
      createdByJsonList[createdByIndex].AsString(m_createdBy[createdByIndex]);
    }
    payload.WithArray("CreatedBy", std::move(createdByJsonList));
  }

  if (m_excludeCreatedByHasBeenSet) {
    Aws::Utils::Array<JsonValue> excludeCreatedByJsonList(m_excludeCreatedBy.size());
    for (unsigned excludeCreatedByIndex = 0; excludeCreatedByIndex < excludeCreatedByJsonList.GetLength(); ++excludeCreatedByIndex) {
      excludeCreatedByJsonList[excludeCreatedByIndex].AsString(m_excludeCreatedBy[excludeCreatedByIndex]);
    }
    payload.WithArray("ExcludeCreatedBy", std::move(excludeCreatedByJsonList));
  }

  if (m_contextTypesHasBeenSet) {
    Aws::Utils::Array<JsonValue> contextTypesJsonList(m_contextTypes.size());
    for (unsigned contextTypesIndex = 0; contextTypesIndex < contextTypesJsonList.GetLength(); ++contextTypesIndex) {
      contextTypesJsonList[contextTypesIndex].AsString(
          EngagementContextTypeMapper::GetNameForEngagementContextType(m_contextTypes[contextTypesIndex]));
    }
    payload.WithArray("ContextTypes", std::move(contextTypesJsonList));
  }

  if (m_excludeContextTypesHasBeenSet) {
    Aws::Utils::Array<JsonValue> excludeContextTypesJsonList(m_excludeContextTypes.size());
    for (unsigned excludeContextTypesIndex = 0; excludeContextTypesIndex < excludeContextTypesJsonList.GetLength();
         ++excludeContextTypesIndex) {
      excludeContextTypesJsonList[excludeContextTypesIndex].AsString(
          EngagementContextTypeMapper::GetNameForEngagementContextType(m_excludeContextTypes[excludeContextTypesIndex]));
    }
    payload.WithArray("ExcludeContextTypes", std::move(excludeContextTypesJsonList));
  }

  if (m_sortHasBeenSet) {
    payload.WithObject("Sort", m_sort.Jsonize());
  }

  if (m_maxResultsHasBeenSet) {
    payload.WithInteger("MaxResults", m_maxResults);
  }

  if (m_nextTokenHasBeenSet) {
    payload.WithString("NextToken", m_nextToken);
  }

  if (m_engagementIdentifierHasBeenSet) {
    Aws::Utils::Array<JsonValue> engagementIdentifierJsonList(m_engagementIdentifier.size());
    for (unsigned engagementIdentifierIndex = 0; engagementIdentifierIndex < engagementIdentifierJsonList.GetLength();
         ++engagementIdentifierIndex) {
      engagementIdentifierJsonList[engagementIdentifierIndex].AsString(m_engagementIdentifier[engagementIdentifierIndex]);
    }
    payload.WithArray("EngagementIdentifier", std::move(engagementIdentifierJsonList));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListEngagementsRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSPartnerCentralSelling.ListEngagements"));
  return headers;
}
