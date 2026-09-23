/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/network-security-manager/model/CreateRuleResult.h>

#include <utility>

using namespace Aws::NetworkSecurityManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateRuleResult::CreateRuleResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

CreateRuleResult& CreateRuleResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
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
  if (jsonValue.ValueExists("ruleDescription")) {
    m_ruleDescription = jsonValue.GetString("ruleDescription");
    m_ruleDescriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("configuration")) {
    m_configuration = jsonValue.GetObject("configuration");
    m_configurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = EntityStatusMapper::GetEntityStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
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
