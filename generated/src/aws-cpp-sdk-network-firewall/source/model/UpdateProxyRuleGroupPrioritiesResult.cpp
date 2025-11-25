/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/network-firewall/model/UpdateProxyRuleGroupPrioritiesResult.h>

#include <utility>

using namespace Aws::NetworkFirewall::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdateProxyRuleGroupPrioritiesResult::UpdateProxyRuleGroupPrioritiesResult(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  *this = result;
}

UpdateProxyRuleGroupPrioritiesResult& UpdateProxyRuleGroupPrioritiesResult::operator=(
    const Aws::AmazonWebServiceResult<JsonValue>& result) {
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("ProxyRuleGroups")) {
    Aws::Utils::Array<JsonView> proxyRuleGroupsJsonList = jsonValue.GetArray("ProxyRuleGroups");
    for (unsigned proxyRuleGroupsIndex = 0; proxyRuleGroupsIndex < proxyRuleGroupsJsonList.GetLength(); ++proxyRuleGroupsIndex) {
      m_proxyRuleGroups.push_back(proxyRuleGroupsJsonList[proxyRuleGroupsIndex].AsObject());
    }
    m_proxyRuleGroupsHasBeenSet = true;
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
