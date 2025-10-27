/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/service-quotas/model/UpdateAutoManagementRequest.h>

#include <utility>

using namespace Aws::ServiceQuotas::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateAutoManagementRequest::SerializePayload() const {
  JsonValue payload;

  if (m_optInTypeHasBeenSet) {
    payload.WithString("OptInType", OptInTypeMapper::GetNameForOptInType(m_optInType));
  }

  if (m_notificationArnHasBeenSet) {
    payload.WithString("NotificationArn", m_notificationArn);
  }

  if (m_exclusionListHasBeenSet) {
    JsonValue exclusionListJsonMap;
    for (auto& exclusionListItem : m_exclusionList) {
      Aws::Utils::Array<JsonValue> excludedQuotaListJsonList(exclusionListItem.second.size());
      for (unsigned excludedQuotaListIndex = 0; excludedQuotaListIndex < excludedQuotaListJsonList.GetLength(); ++excludedQuotaListIndex) {
        excludedQuotaListJsonList[excludedQuotaListIndex].AsString(exclusionListItem.second[excludedQuotaListIndex]);
      }
      exclusionListJsonMap.WithArray(exclusionListItem.first, std::move(excludedQuotaListJsonList));
    }
    payload.WithObject("ExclusionList", std::move(exclusionListJsonMap));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateAutoManagementRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "ServiceQuotasV20190624.UpdateAutoManagement"));
  return headers;
}
