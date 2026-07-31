/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/pricing-plan-manager/model/CreateSubscriptionRequest.h>

#include <utility>

using namespace Aws::PricingPlanManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateSubscriptionRequest::SerializePayload() const {
  JsonValue payload;

  if (m_planFamilyHasBeenSet) {
    payload.WithString("planFamily", m_planFamily);
  }

  if (m_planTierHasBeenSet) {
    payload.WithString("planTier", m_planTier);
  }

  if (m_usageLevelHasBeenSet) {
    payload.WithString("usageLevel", m_usageLevel);
  }

  if (m_resourceArnsHasBeenSet) {
    Aws::Utils::Array<JsonValue> resourceArnsJsonList(m_resourceArns.size());
    for (unsigned resourceArnsIndex = 0; resourceArnsIndex < resourceArnsJsonList.GetLength(); ++resourceArnsIndex) {
      resourceArnsJsonList[resourceArnsIndex].AsString(m_resourceArns[resourceArnsIndex]);
    }
    payload.WithArray("resourceArns", std::move(resourceArnsJsonList));
  }

  if (m_approvalModeHasBeenSet) {
    payload.WithString("approvalMode", ApprovalModeMapper::GetNameForApprovalMode(m_approvalMode));
  }

  if (m_clientTokenHasBeenSet) {
    payload.WithString("clientToken", m_clientToken);
  }

  return payload.View().WriteReadable();
}
