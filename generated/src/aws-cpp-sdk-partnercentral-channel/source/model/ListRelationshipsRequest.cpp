/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/partnercentral-channel/model/ListRelationshipsRequest.h>

#include <utility>

using namespace Aws::PartnerCentralChannel::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String ListRelationshipsRequest::SerializePayload() const {
  JsonValue payload;

  if (m_catalogHasBeenSet) {
    payload.WithString("catalog", m_catalog);
  }

  if (m_maxResultsHasBeenSet) {
    payload.WithInteger("maxResults", m_maxResults);
  }

  if (m_associatedAccountIdsHasBeenSet) {
    Aws::Utils::Array<JsonValue> associatedAccountIdsJsonList(m_associatedAccountIds.size());
    for (unsigned associatedAccountIdsIndex = 0; associatedAccountIdsIndex < associatedAccountIdsJsonList.GetLength();
         ++associatedAccountIdsIndex) {
      associatedAccountIdsJsonList[associatedAccountIdsIndex].AsString(m_associatedAccountIds[associatedAccountIdsIndex]);
    }
    payload.WithArray("associatedAccountIds", std::move(associatedAccountIdsJsonList));
  }

  if (m_associationTypesHasBeenSet) {
    Aws::Utils::Array<JsonValue> associationTypesJsonList(m_associationTypes.size());
    for (unsigned associationTypesIndex = 0; associationTypesIndex < associationTypesJsonList.GetLength(); ++associationTypesIndex) {
      associationTypesJsonList[associationTypesIndex].AsString(
          AssociationTypeMapper::GetNameForAssociationType(m_associationTypes[associationTypesIndex]));
    }
    payload.WithArray("associationTypes", std::move(associationTypesJsonList));
  }

  if (m_displayNamesHasBeenSet) {
    Aws::Utils::Array<JsonValue> displayNamesJsonList(m_displayNames.size());
    for (unsigned displayNamesIndex = 0; displayNamesIndex < displayNamesJsonList.GetLength(); ++displayNamesIndex) {
      displayNamesJsonList[displayNamesIndex].AsString(m_displayNames[displayNamesIndex]);
    }
    payload.WithArray("displayNames", std::move(displayNamesJsonList));
  }

  if (m_programManagementAccountIdentifiersHasBeenSet) {
    Aws::Utils::Array<JsonValue> programManagementAccountIdentifiersJsonList(m_programManagementAccountIdentifiers.size());
    for (unsigned programManagementAccountIdentifiersIndex = 0;
         programManagementAccountIdentifiersIndex < programManagementAccountIdentifiersJsonList.GetLength();
         ++programManagementAccountIdentifiersIndex) {
      programManagementAccountIdentifiersJsonList[programManagementAccountIdentifiersIndex].AsString(
          m_programManagementAccountIdentifiers[programManagementAccountIdentifiersIndex]);
    }
    payload.WithArray("programManagementAccountIdentifiers", std::move(programManagementAccountIdentifiersJsonList));
  }

  if (m_sortHasBeenSet) {
    payload.WithObject("sort", m_sort.Jsonize());
  }

  if (m_nextTokenHasBeenSet) {
    payload.WithString("nextToken", m_nextToken);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListRelationshipsRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "PartnerCentralChannel.ListRelationships"));
  return headers;
}
