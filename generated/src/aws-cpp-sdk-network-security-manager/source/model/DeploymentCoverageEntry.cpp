/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/network-security-manager/model/DeploymentCoverageEntry.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace NetworkSecurityManager {
namespace Model {

DeploymentCoverageEntry::DeploymentCoverageEntry(JsonView jsonValue) { *this = jsonValue; }

DeploymentCoverageEntry& DeploymentCoverageEntry::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("firewallType")) {
    m_firewallType = PolicyFirewallTypeMapper::GetPolicyFirewallTypeForName(jsonValue.GetString("firewallType"));
    m_firewallTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("policyArns")) {
    Aws::Utils::Array<JsonView> policyArnsJsonList = jsonValue.GetArray("policyArns");
    for (unsigned policyArnsIndex = 0; policyArnsIndex < policyArnsJsonList.GetLength(); ++policyArnsIndex) {
      m_policyArns.push_back(policyArnsJsonList[policyArnsIndex].AsString());
    }
    m_policyArnsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("inScopeResourceTypes")) {
    Aws::Utils::Array<JsonView> inScopeResourceTypesJsonList = jsonValue.GetArray("inScopeResourceTypes");
    for (unsigned inScopeResourceTypesIndex = 0; inScopeResourceTypesIndex < inScopeResourceTypesJsonList.GetLength();
         ++inScopeResourceTypesIndex) {
      m_inScopeResourceTypes.push_back(
          ScopeResourceTypeMapper::GetScopeResourceTypeForName(inScopeResourceTypesJsonList[inScopeResourceTypesIndex].AsString()));
    }
    m_inScopeResourceTypesHasBeenSet = true;
  }
  return *this;
}

JsonValue DeploymentCoverageEntry::Jsonize() const {
  JsonValue payload;

  if (m_firewallTypeHasBeenSet) {
    payload.WithString("firewallType", PolicyFirewallTypeMapper::GetNameForPolicyFirewallType(m_firewallType));
  }

  if (m_policyArnsHasBeenSet) {
    Aws::Utils::Array<JsonValue> policyArnsJsonList(m_policyArns.size());
    for (unsigned policyArnsIndex = 0; policyArnsIndex < policyArnsJsonList.GetLength(); ++policyArnsIndex) {
      policyArnsJsonList[policyArnsIndex].AsString(m_policyArns[policyArnsIndex]);
    }
    payload.WithArray("policyArns", std::move(policyArnsJsonList));
  }

  if (m_inScopeResourceTypesHasBeenSet) {
    Aws::Utils::Array<JsonValue> inScopeResourceTypesJsonList(m_inScopeResourceTypes.size());
    for (unsigned inScopeResourceTypesIndex = 0; inScopeResourceTypesIndex < inScopeResourceTypesJsonList.GetLength();
         ++inScopeResourceTypesIndex) {
      inScopeResourceTypesJsonList[inScopeResourceTypesIndex].AsString(
          ScopeResourceTypeMapper::GetNameForScopeResourceType(m_inScopeResourceTypes[inScopeResourceTypesIndex]));
    }
    payload.WithArray("inScopeResourceTypes", std::move(inScopeResourceTypesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace NetworkSecurityManager
}  // namespace Aws
