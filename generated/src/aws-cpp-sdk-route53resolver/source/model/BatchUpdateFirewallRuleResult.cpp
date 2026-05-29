/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/route53resolver/model/BatchUpdateFirewallRuleResult.h>

#include <utility>

using namespace Aws::Route53Resolver::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

BatchUpdateFirewallRuleResult::BatchUpdateFirewallRuleResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

BatchUpdateFirewallRuleResult& BatchUpdateFirewallRuleResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("UpdatedFirewallRules")) {
    Aws::Utils::Array<JsonView> updatedFirewallRulesJsonList = jsonValue.GetArray("UpdatedFirewallRules");
    for (unsigned updatedFirewallRulesIndex = 0; updatedFirewallRulesIndex < updatedFirewallRulesJsonList.GetLength();
         ++updatedFirewallRulesIndex) {
      m_updatedFirewallRules.push_back(updatedFirewallRulesJsonList[updatedFirewallRulesIndex].AsObject());
    }
    m_updatedFirewallRulesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("UpdateErrors")) {
    Aws::Utils::Array<JsonView> updateErrorsJsonList = jsonValue.GetArray("UpdateErrors");
    for (unsigned updateErrorsIndex = 0; updateErrorsIndex < updateErrorsJsonList.GetLength(); ++updateErrorsIndex) {
      m_updateErrors.push_back(updateErrorsJsonList[updateErrorsIndex].AsObject());
    }
    m_updateErrorsHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
