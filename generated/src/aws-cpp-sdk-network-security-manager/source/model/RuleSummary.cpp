/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/network-security-manager/model/RuleSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace NetworkSecurityManager {
namespace Model {

RuleSummary::RuleSummary(JsonView jsonValue) { *this = jsonValue; }

RuleSummary& RuleSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ruleId")) {
    m_ruleId = jsonValue.GetString("ruleId");
    m_ruleIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ruleArn")) {
    m_ruleArn = jsonValue.GetString("ruleArn");
    m_ruleArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ruleName")) {
    m_ruleName = jsonValue.GetString("ruleName");
    m_ruleNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("firewallType")) {
    m_firewallType = RuleFirewallTypeMapper::GetRuleFirewallTypeForName(jsonValue.GetString("firewallType"));
    m_firewallTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ruleType")) {
    m_ruleType = RuleTypeMapper::GetRuleTypeForName(jsonValue.GetString("ruleType"));
    m_ruleTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = EntityStatusMapper::GetEntityStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("version")) {
    m_version = jsonValue.GetString("version");
    m_versionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("hasPublishedVersion")) {
    m_hasPublishedVersion = jsonValue.GetBool("hasPublishedVersion");
    m_hasPublishedVersionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("updatedAt")) {
    m_updatedAt = jsonValue.GetString("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  return *this;
}

JsonValue RuleSummary::Jsonize() const {
  JsonValue payload;

  if (m_ruleIdHasBeenSet) {
    payload.WithString("ruleId", m_ruleId);
  }

  if (m_ruleArnHasBeenSet) {
    payload.WithString("ruleArn", m_ruleArn);
  }

  if (m_ruleNameHasBeenSet) {
    payload.WithString("ruleName", m_ruleName);
  }

  if (m_firewallTypeHasBeenSet) {
    payload.WithString("firewallType", RuleFirewallTypeMapper::GetNameForRuleFirewallType(m_firewallType));
  }

  if (m_ruleTypeHasBeenSet) {
    payload.WithString("ruleType", RuleTypeMapper::GetNameForRuleType(m_ruleType));
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", EntityStatusMapper::GetNameForEntityStatus(m_status));
  }

  if (m_versionHasBeenSet) {
    payload.WithString("version", m_version);
  }

  if (m_hasPublishedVersionHasBeenSet) {
    payload.WithBool("hasPublishedVersion", m_hasPublishedVersion);
  }

  if (m_updatedAtHasBeenSet) {
    payload.WithString("updatedAt", m_updatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

}  // namespace Model
}  // namespace NetworkSecurityManager
}  // namespace Aws
