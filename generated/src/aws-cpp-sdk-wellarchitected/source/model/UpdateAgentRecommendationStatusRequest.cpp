/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/wellarchitected/model/UpdateAgentRecommendationStatusRequest.h>

#include <utility>

using namespace Aws::WellArchitected::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateAgentRecommendationStatusRequest::SerializePayload() const {
  JsonValue payload;

  if (m_statusHasBeenSet) {
    payload.WithString("status", RecommendationStatusMapper::GetNameForRecommendationStatus(m_status));
  }

  if (m_updateReasonHasBeenSet) {
    payload.WithString("updateReason", m_updateReason);
  }

  return payload.View().WriteReadable();
}
