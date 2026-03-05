/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mpa/model/StartApprovalTeamBaselineRequest.h>

#include <utility>

using namespace Aws::MPA::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String StartApprovalTeamBaselineRequest::SerializePayload() const {
  JsonValue payload;

  if (m_approverIdsHasBeenSet) {
    Aws::Utils::Array<JsonValue> approverIdsJsonList(m_approverIds.size());
    for (unsigned approverIdsIndex = 0; approverIdsIndex < approverIdsJsonList.GetLength(); ++approverIdsIndex) {
      approverIdsJsonList[approverIdsIndex].AsString(m_approverIds[approverIdsIndex]);
    }
    payload.WithArray("ApproverIds", std::move(approverIdsJsonList));
  }

  return payload.View().WriteReadable();
}
