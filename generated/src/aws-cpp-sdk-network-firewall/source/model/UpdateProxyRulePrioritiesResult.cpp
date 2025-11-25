/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/network-firewall/model/UpdateProxyRulePrioritiesResult.h>

#include <utility>

using namespace Aws::NetworkFirewall::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdateProxyRulePrioritiesResult::UpdateProxyRulePrioritiesResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

UpdateProxyRulePrioritiesResult& UpdateProxyRulePrioritiesResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("ProxyRuleGroupName")) {
    m_proxyRuleGroupName = jsonValue.GetString("ProxyRuleGroupName");
    m_proxyRuleGroupNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ProxyRuleGroupArn")) {
    m_proxyRuleGroupArn = jsonValue.GetString("ProxyRuleGroupArn");
    m_proxyRuleGroupArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RuleGroupRequestPhase")) {
    m_ruleGroupRequestPhase = RuleGroupRequestPhaseMapper::GetRuleGroupRequestPhaseForName(jsonValue.GetString("RuleGroupRequestPhase"));
    m_ruleGroupRequestPhaseHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Rules")) {
    Aws::Utils::Array<JsonView> rulesJsonList = jsonValue.GetArray("Rules");
    for (unsigned rulesIndex = 0; rulesIndex < rulesJsonList.GetLength(); ++rulesIndex) {
      m_rules.push_back(rulesJsonList[rulesIndex].AsObject());
    }
    m_rulesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("UpdateToken")) {
    m_updateToken = jsonValue.GetString("UpdateToken");
    m_updateTokenHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
