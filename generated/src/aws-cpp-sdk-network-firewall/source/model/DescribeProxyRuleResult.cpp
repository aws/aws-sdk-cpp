/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/network-firewall/model/DescribeProxyRuleResult.h>

#include <utility>

using namespace Aws::NetworkFirewall::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeProxyRuleResult::DescribeProxyRuleResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

DescribeProxyRuleResult& DescribeProxyRuleResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("ProxyRule")) {
    m_proxyRule = jsonValue.GetObject("ProxyRule");
    m_proxyRuleHasBeenSet = true;
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
