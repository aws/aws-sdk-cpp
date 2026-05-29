/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/route53resolver/model/BatchDeleteFirewallRuleResult.h>

#include <utility>

using namespace Aws::Route53Resolver::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

BatchDeleteFirewallRuleResult::BatchDeleteFirewallRuleResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

BatchDeleteFirewallRuleResult& BatchDeleteFirewallRuleResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("DeletedFirewallRules")) {
    Aws::Utils::Array<JsonView> deletedFirewallRulesJsonList = jsonValue.GetArray("DeletedFirewallRules");
    for (unsigned deletedFirewallRulesIndex = 0; deletedFirewallRulesIndex < deletedFirewallRulesJsonList.GetLength();
         ++deletedFirewallRulesIndex) {
      m_deletedFirewallRules.push_back(deletedFirewallRulesJsonList[deletedFirewallRulesIndex].AsObject());
    }
    m_deletedFirewallRulesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("DeleteErrors")) {
    Aws::Utils::Array<JsonView> deleteErrorsJsonList = jsonValue.GetArray("DeleteErrors");
    for (unsigned deleteErrorsIndex = 0; deleteErrorsIndex < deleteErrorsJsonList.GetLength(); ++deleteErrorsIndex) {
      m_deleteErrors.push_back(deleteErrorsJsonList[deleteErrorsIndex].AsObject());
    }
    m_deleteErrorsHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
