/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/network-security-manager/model/PolicySummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace NetworkSecurityManager {
namespace Model {

PolicySummary::PolicySummary(JsonView jsonValue) { *this = jsonValue; }

PolicySummary& PolicySummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("policyId")) {
    m_policyId = jsonValue.GetString("policyId");
    m_policyIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("policyArn")) {
    m_policyArn = jsonValue.GetString("policyArn");
    m_policyArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("policyName")) {
    m_policyName = jsonValue.GetString("policyName");
    m_policyNameHasBeenSet = true;
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
  if (jsonValue.ValueExists("firewallType")) {
    m_firewallType = PolicyFirewallTypeMapper::GetPolicyFirewallTypeForName(jsonValue.GetString("firewallType"));
    m_firewallTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("priority")) {
    m_priority = jsonValue.GetInteger("priority");
    m_priorityHasBeenSet = true;
  }
  if (jsonValue.ValueExists("updatedAt")) {
    m_updatedAt = jsonValue.GetString("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  return *this;
}

JsonValue PolicySummary::Jsonize() const {
  JsonValue payload;

  if (m_policyIdHasBeenSet) {
    payload.WithString("policyId", m_policyId);
  }

  if (m_policyArnHasBeenSet) {
    payload.WithString("policyArn", m_policyArn);
  }

  if (m_policyNameHasBeenSet) {
    payload.WithString("policyName", m_policyName);
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

  if (m_firewallTypeHasBeenSet) {
    payload.WithString("firewallType", PolicyFirewallTypeMapper::GetNameForPolicyFirewallType(m_firewallType));
  }

  if (m_priorityHasBeenSet) {
    payload.WithInteger("priority", m_priority);
  }

  if (m_updatedAtHasBeenSet) {
    payload.WithString("updatedAt", m_updatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

}  // namespace Model
}  // namespace NetworkSecurityManager
}  // namespace Aws
