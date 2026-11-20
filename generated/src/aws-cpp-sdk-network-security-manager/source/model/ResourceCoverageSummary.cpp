/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/network-security-manager/model/ResourceCoverageSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace NetworkSecurityManager {
namespace Model {

ResourceCoverageSummary::ResourceCoverageSummary(JsonView jsonValue) { *this = jsonValue; }

ResourceCoverageSummary& ResourceCoverageSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("resourceArn")) {
    m_resourceArn = jsonValue.GetString("resourceArn");
    m_resourceArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("entityType")) {
    m_entityType = ServiceResourceTypeMapper::GetServiceResourceTypeForName(jsonValue.GetString("entityType"));
    m_entityTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("entityArn")) {
    m_entityArn = jsonValue.GetString("entityArn");
    m_entityArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("resourceOwnerAccountId")) {
    m_resourceOwnerAccountId = jsonValue.GetString("resourceOwnerAccountId");
    m_resourceOwnerAccountIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("resourceType")) {
    m_resourceType = ScopeResourceTypeMapper::GetScopeResourceTypeForName(jsonValue.GetString("resourceType"));
    m_resourceTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("firewallType")) {
    m_firewallType = PolicyFirewallTypeMapper::GetPolicyFirewallTypeForName(jsonValue.GetString("firewallType"));
    m_firewallTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("coverageStatus")) {
    m_coverageStatus = CoverageStatusMapper::GetCoverageStatusForName(jsonValue.GetString("coverageStatus"));
    m_coverageStatusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("deploymentArns")) {
    Aws::Utils::Array<JsonView> deploymentArnsJsonList = jsonValue.GetArray("deploymentArns");
    for (unsigned deploymentArnsIndex = 0; deploymentArnsIndex < deploymentArnsJsonList.GetLength(); ++deploymentArnsIndex) {
      m_deploymentArns.push_back(deploymentArnsJsonList[deploymentArnsIndex].AsString());
    }
    m_deploymentArnsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("updatedAt")) {
    m_updatedAt = jsonValue.GetString("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  return *this;
}

JsonValue ResourceCoverageSummary::Jsonize() const {
  JsonValue payload;

  if (m_resourceArnHasBeenSet) {
    payload.WithString("resourceArn", m_resourceArn);
  }

  if (m_entityTypeHasBeenSet) {
    payload.WithString("entityType", ServiceResourceTypeMapper::GetNameForServiceResourceType(m_entityType));
  }

  if (m_entityArnHasBeenSet) {
    payload.WithString("entityArn", m_entityArn);
  }

  if (m_resourceOwnerAccountIdHasBeenSet) {
    payload.WithString("resourceOwnerAccountId", m_resourceOwnerAccountId);
  }

  if (m_resourceTypeHasBeenSet) {
    payload.WithString("resourceType", ScopeResourceTypeMapper::GetNameForScopeResourceType(m_resourceType));
  }

  if (m_firewallTypeHasBeenSet) {
    payload.WithString("firewallType", PolicyFirewallTypeMapper::GetNameForPolicyFirewallType(m_firewallType));
  }

  if (m_coverageStatusHasBeenSet) {
    payload.WithString("coverageStatus", CoverageStatusMapper::GetNameForCoverageStatus(m_coverageStatus));
  }

  if (m_deploymentArnsHasBeenSet) {
    Aws::Utils::Array<JsonValue> deploymentArnsJsonList(m_deploymentArns.size());
    for (unsigned deploymentArnsIndex = 0; deploymentArnsIndex < deploymentArnsJsonList.GetLength(); ++deploymentArnsIndex) {
      deploymentArnsJsonList[deploymentArnsIndex].AsString(m_deploymentArns[deploymentArnsIndex]);
    }
    payload.WithArray("deploymentArns", std::move(deploymentArnsJsonList));
  }

  if (m_updatedAtHasBeenSet) {
    payload.WithString("updatedAt", m_updatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

}  // namespace Model
}  // namespace NetworkSecurityManager
}  // namespace Aws
