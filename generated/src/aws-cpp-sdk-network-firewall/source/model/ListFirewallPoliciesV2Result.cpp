/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/network-firewall/model/ListFirewallPoliciesV2Result.h>

#include <utility>

using namespace Aws::NetworkFirewall::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListFirewallPoliciesV2Result::ListFirewallPoliciesV2Result(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

ListFirewallPoliciesV2Result& ListFirewallPoliciesV2Result::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("NextToken")) {
    m_nextToken = jsonValue.GetString("NextToken");
    m_nextTokenHasBeenSet = true;
  }
  if (jsonValue.ValueExists("FirewallPoliciesV2")) {
    Aws::Utils::Array<JsonView> firewallPoliciesV2JsonList = jsonValue.GetArray("FirewallPoliciesV2");
    for (unsigned firewallPoliciesV2Index = 0; firewallPoliciesV2Index < firewallPoliciesV2JsonList.GetLength();
         ++firewallPoliciesV2Index) {
      m_firewallPoliciesV2.push_back(firewallPoliciesV2JsonList[firewallPoliciesV2Index].AsObject());
    }
    m_firewallPoliciesV2HasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
