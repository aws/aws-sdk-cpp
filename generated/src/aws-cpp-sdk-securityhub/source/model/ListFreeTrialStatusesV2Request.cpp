/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityhub/model/ListFreeTrialStatusesV2Request.h>

#include <utility>

using namespace Aws::SecurityHub::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String ListFreeTrialStatusesV2Request::SerializePayload() const {
  JsonValue payload;

  if (m_accountIdsHasBeenSet) {
    Aws::Utils::Array<JsonValue> accountIdsJsonList(m_accountIds.size());
    for (unsigned accountIdsIndex = 0; accountIdsIndex < accountIdsJsonList.GetLength(); ++accountIdsIndex) {
      accountIdsJsonList[accountIdsIndex].AsString(m_accountIds[accountIdsIndex]);
    }
    payload.WithArray("AccountIds", std::move(accountIdsJsonList));
  }

  if (m_statusesHasBeenSet) {
    Aws::Utils::Array<JsonValue> statusesJsonList(m_statuses.size());
    for (unsigned statusesIndex = 0; statusesIndex < statusesJsonList.GetLength(); ++statusesIndex) {
      statusesJsonList[statusesIndex].AsString(FreeTrialStatusValueMapper::GetNameForFreeTrialStatusValue(m_statuses[statusesIndex]));
    }
    payload.WithArray("Statuses", std::move(statusesJsonList));
  }

  if (m_maxResultsHasBeenSet) {
    payload.WithInteger("MaxResults", m_maxResults);
  }

  if (m_nextTokenHasBeenSet) {
    payload.WithString("NextToken", m_nextToken);
  }

  return payload.View().WriteReadable();
}
