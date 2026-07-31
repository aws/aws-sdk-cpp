/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/pricing-plan-manager/model/ScheduledChange.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PricingPlanManager {
namespace Model {

ScheduledChange::ScheduledChange(JsonView jsonValue) { *this = jsonValue; }

ScheduledChange& ScheduledChange::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("changeType")) {
    m_changeType = ScheduledChangeTypeMapper::GetScheduledChangeTypeForName(jsonValue.GetString("changeType"));
    m_changeTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("effectiveDate")) {
    m_effectiveDate = jsonValue.GetString("effectiveDate");
    m_effectiveDateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("planTier")) {
    m_planTier = jsonValue.GetString("planTier");
    m_planTierHasBeenSet = true;
  }
  if (jsonValue.ValueExists("usageLevel")) {
    m_usageLevel = jsonValue.GetString("usageLevel");
    m_usageLevelHasBeenSet = true;
  }
  return *this;
}

JsonValue ScheduledChange::Jsonize() const {
  JsonValue payload;

  if (m_changeTypeHasBeenSet) {
    payload.WithString("changeType", ScheduledChangeTypeMapper::GetNameForScheduledChangeType(m_changeType));
  }

  if (m_effectiveDateHasBeenSet) {
    payload.WithString("effectiveDate", m_effectiveDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_planTierHasBeenSet) {
    payload.WithString("planTier", m_planTier);
  }

  if (m_usageLevelHasBeenSet) {
    payload.WithString("usageLevel", m_usageLevel);
  }

  return payload;
}

}  // namespace Model
}  // namespace PricingPlanManager
}  // namespace Aws
