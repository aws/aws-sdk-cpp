/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/route53resolver/model/BatchCreateFirewallRuleResult.h>

#include <utility>

using namespace Aws::Route53Resolver::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

BatchCreateFirewallRuleResult::BatchCreateFirewallRuleResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

BatchCreateFirewallRuleResult& BatchCreateFirewallRuleResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("CreatedFirewallRules")) {
    Aws::Utils::Array<JsonView> createdFirewallRulesJsonList = jsonValue.GetArray("CreatedFirewallRules");
    for (unsigned createdFirewallRulesIndex = 0; createdFirewallRulesIndex < createdFirewallRulesJsonList.GetLength();
         ++createdFirewallRulesIndex) {
      m_createdFirewallRules.push_back(createdFirewallRulesJsonList[createdFirewallRulesIndex].AsObject());
    }
    m_createdFirewallRulesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreateErrors")) {
    Aws::Utils::Array<JsonView> createErrorsJsonList = jsonValue.GetArray("CreateErrors");
    for (unsigned createErrorsIndex = 0; createErrorsIndex < createErrorsJsonList.GetLength(); ++createErrorsIndex) {
      m_createErrors.push_back(createErrorsJsonList[createErrorsIndex].AsObject());
    }
    m_createErrorsHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
