/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/rtbfabric/model/LinkRoutingRuleSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace RTBFabric {
namespace Model {

LinkRoutingRuleSummary::LinkRoutingRuleSummary(JsonView jsonValue) { *this = jsonValue; }

LinkRoutingRuleSummary& LinkRoutingRuleSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ruleId")) {
    m_ruleId = jsonValue.GetString("ruleId");
    m_ruleIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("priority")) {
    m_priority = jsonValue.GetInteger("priority");
    m_priorityHasBeenSet = true;
  }
  if (jsonValue.ValueExists("conditions")) {
    m_conditions = jsonValue.GetObject("conditions");
    m_conditionsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = RuleStatusMapper::GetRuleStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetDouble("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("updatedAt")) {
    m_updatedAt = jsonValue.GetDouble("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  return *this;
}

JsonValue LinkRoutingRuleSummary::Jsonize() const {
  JsonValue payload;

  if (m_ruleIdHasBeenSet) {
    payload.WithString("ruleId", m_ruleId);
  }

  if (m_priorityHasBeenSet) {
    payload.WithInteger("priority", m_priority);
  }

  if (m_conditionsHasBeenSet) {
    payload.WithObject("conditions", m_conditions.Jsonize());
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", RuleStatusMapper::GetNameForRuleStatus(m_status));
  }

  if (m_createdAtHasBeenSet) {
    payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if (m_updatedAtHasBeenSet) {
    payload.WithDouble("updatedAt", m_updatedAt.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace RTBFabric
}  // namespace Aws
