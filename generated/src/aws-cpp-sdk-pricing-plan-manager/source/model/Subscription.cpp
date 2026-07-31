/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/pricing-plan-manager/model/Subscription.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PricingPlanManager {
namespace Model {

Subscription::Subscription(JsonView jsonValue) { *this = jsonValue; }

Subscription& Subscription::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("arn")) {
    m_arn = jsonValue.GetString("arn");
    m_arnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("planFamily")) {
    m_planFamily = jsonValue.GetString("planFamily");
    m_planFamilyHasBeenSet = true;
  }
  if (jsonValue.ValueExists("planTier")) {
    m_planTier = jsonValue.GetString("planTier");
    m_planTierHasBeenSet = true;
  }
  if (jsonValue.ValueExists("usageLevel")) {
    m_usageLevel = jsonValue.GetString("usageLevel");
    m_usageLevelHasBeenSet = true;
  }
  if (jsonValue.ValueExists("scheduledChange")) {
    m_scheduledChange = jsonValue.GetObject("scheduledChange");
    m_scheduledChangeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = StatusMapper::GetStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("statusReason")) {
    m_statusReason = jsonValue.GetString("statusReason");
    m_statusReasonHasBeenSet = true;
  }
  if (jsonValue.ValueExists("resourceArns")) {
    Aws::Utils::Array<JsonView> resourceArnsJsonList = jsonValue.GetArray("resourceArns");
    for (unsigned resourceArnsIndex = 0; resourceArnsIndex < resourceArnsJsonList.GetLength(); ++resourceArnsIndex) {
      m_resourceArns.push_back(resourceArnsJsonList[resourceArnsIndex].AsString());
    }
    m_resourceArnsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetString("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("updatedAt")) {
    m_updatedAt = jsonValue.GetString("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  return *this;
}

JsonValue Subscription::Jsonize() const {
  JsonValue payload;

  if (m_arnHasBeenSet) {
    payload.WithString("arn", m_arn);
  }

  if (m_planFamilyHasBeenSet) {
    payload.WithString("planFamily", m_planFamily);
  }

  if (m_planTierHasBeenSet) {
    payload.WithString("planTier", m_planTier);
  }

  if (m_usageLevelHasBeenSet) {
    payload.WithString("usageLevel", m_usageLevel);
  }

  if (m_scheduledChangeHasBeenSet) {
    payload.WithObject("scheduledChange", m_scheduledChange.Jsonize());
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", StatusMapper::GetNameForStatus(m_status));
  }

  if (m_statusReasonHasBeenSet) {
    payload.WithString("statusReason", m_statusReason);
  }

  if (m_resourceArnsHasBeenSet) {
    Aws::Utils::Array<JsonValue> resourceArnsJsonList(m_resourceArns.size());
    for (unsigned resourceArnsIndex = 0; resourceArnsIndex < resourceArnsJsonList.GetLength(); ++resourceArnsIndex) {
      resourceArnsJsonList[resourceArnsIndex].AsString(m_resourceArns[resourceArnsIndex]);
    }
    payload.WithArray("resourceArns", std::move(resourceArnsJsonList));
  }

  if (m_createdAtHasBeenSet) {
    payload.WithString("createdAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_updatedAtHasBeenSet) {
    payload.WithString("updatedAt", m_updatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

}  // namespace Model
}  // namespace PricingPlanManager
}  // namespace Aws
