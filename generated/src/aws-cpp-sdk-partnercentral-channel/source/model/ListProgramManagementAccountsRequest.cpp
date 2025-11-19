/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/partnercentral-channel/model/ListProgramManagementAccountsRequest.h>

#include <utility>

using namespace Aws::PartnerCentralChannel::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String ListProgramManagementAccountsRequest::SerializePayload() const {
  JsonValue payload;

  if (m_catalogHasBeenSet) {
    payload.WithString("catalog", m_catalog);
  }

  if (m_maxResultsHasBeenSet) {
    payload.WithInteger("maxResults", m_maxResults);
  }

  if (m_displayNamesHasBeenSet) {
    Aws::Utils::Array<JsonValue> displayNamesJsonList(m_displayNames.size());
    for (unsigned displayNamesIndex = 0; displayNamesIndex < displayNamesJsonList.GetLength(); ++displayNamesIndex) {
      displayNamesJsonList[displayNamesIndex].AsString(m_displayNames[displayNamesIndex]);
    }
    payload.WithArray("displayNames", std::move(displayNamesJsonList));
  }

  if (m_programsHasBeenSet) {
    Aws::Utils::Array<JsonValue> programsJsonList(m_programs.size());
    for (unsigned programsIndex = 0; programsIndex < programsJsonList.GetLength(); ++programsIndex) {
      programsJsonList[programsIndex].AsString(ProgramMapper::GetNameForProgram(m_programs[programsIndex]));
    }
    payload.WithArray("programs", std::move(programsJsonList));
  }

  if (m_accountIdsHasBeenSet) {
    Aws::Utils::Array<JsonValue> accountIdsJsonList(m_accountIds.size());
    for (unsigned accountIdsIndex = 0; accountIdsIndex < accountIdsJsonList.GetLength(); ++accountIdsIndex) {
      accountIdsJsonList[accountIdsIndex].AsString(m_accountIds[accountIdsIndex]);
    }
    payload.WithArray("accountIds", std::move(accountIdsJsonList));
  }

  if (m_statusesHasBeenSet) {
    Aws::Utils::Array<JsonValue> statusesJsonList(m_statuses.size());
    for (unsigned statusesIndex = 0; statusesIndex < statusesJsonList.GetLength(); ++statusesIndex) {
      statusesJsonList[statusesIndex].AsString(
          ProgramManagementAccountStatusMapper::GetNameForProgramManagementAccountStatus(m_statuses[statusesIndex]));
    }
    payload.WithArray("statuses", std::move(statusesJsonList));
  }

  if (m_sortHasBeenSet) {
    payload.WithObject("sort", m_sort.Jsonize());
  }

  if (m_nextTokenHasBeenSet) {
    payload.WithString("nextToken", m_nextToken);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListProgramManagementAccountsRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "PartnerCentralChannel.ListProgramManagementAccounts"));
  return headers;
}
