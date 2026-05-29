/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/route53resolver/model/ListFirewallRuleTypesResult.h>

#include <utility>

using namespace Aws::Route53Resolver::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListFirewallRuleTypesResult::ListFirewallRuleTypesResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

ListFirewallRuleTypesResult& ListFirewallRuleTypesResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("FirewallRuleTypes")) {
    Aws::Utils::Array<JsonView> firewallRuleTypesJsonList = jsonValue.GetArray("FirewallRuleTypes");
    for (unsigned firewallRuleTypesIndex = 0; firewallRuleTypesIndex < firewallRuleTypesJsonList.GetLength(); ++firewallRuleTypesIndex) {
      m_firewallRuleTypes.push_back(firewallRuleTypesJsonList[firewallRuleTypesIndex].AsObject());
    }
    m_firewallRuleTypesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("NextToken")) {
    m_nextToken = jsonValue.GetString("NextToken");
    m_nextTokenHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
