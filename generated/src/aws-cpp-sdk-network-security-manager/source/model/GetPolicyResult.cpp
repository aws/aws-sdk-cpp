/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/network-security-manager/model/GetPolicyResult.h>

#include <utility>

using namespace Aws::NetworkSecurityManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetPolicyResult::GetPolicyResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

GetPolicyResult& GetPolicyResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
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
  if (jsonValue.ValueExists("policyDescription")) {
    m_policyDescription = jsonValue.GetString("policyDescription");
    m_policyDescriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = EntityStatusMapper::GetEntityStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("priority")) {
    m_priority = jsonValue.GetInteger("priority");
    m_priorityHasBeenSet = true;
  }
  if (jsonValue.ValueExists("associatedTemplateAndRuleList")) {
    Aws::Utils::Array<JsonView> associatedTemplateAndRuleListJsonList = jsonValue.GetArray("associatedTemplateAndRuleList");
    for (unsigned associatedTemplateAndRuleListIndex = 0;
         associatedTemplateAndRuleListIndex < associatedTemplateAndRuleListJsonList.GetLength(); ++associatedTemplateAndRuleListIndex) {
      m_associatedTemplateAndRuleList.push_back(associatedTemplateAndRuleListJsonList[associatedTemplateAndRuleListIndex].AsObject());
    }
    m_associatedTemplateAndRuleListHasBeenSet = true;
  }
  if (jsonValue.ValueExists("version")) {
    m_version = jsonValue.GetString("version");
    m_versionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("updateToken")) {
    m_updateToken = jsonValue.GetString("updateToken");
    m_updateTokenHasBeenSet = true;
  }
  if (jsonValue.ValueExists("isSnapshot")) {
    m_isSnapshot = jsonValue.GetBool("isSnapshot");
    m_isSnapshotHasBeenSet = true;
  }
  if (jsonValue.ValueExists("hasPublishedVersion")) {
    m_hasPublishedVersion = jsonValue.GetBool("hasPublishedVersion");
    m_hasPublishedVersionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("firewallType")) {
    m_firewallType = PolicyFirewallTypeMapper::GetPolicyFirewallTypeForName(jsonValue.GetString("firewallType"));
    m_firewallTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("policyConfiguration")) {
    m_policyConfiguration = jsonValue.GetObject("policyConfiguration");
    m_policyConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("updatedAt")) {
    m_updatedAt = jsonValue.GetString("updatedAt");
    m_updatedAtHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
