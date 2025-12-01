/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/route53globalresolver/model/BatchDeleteFirewallRuleSdkResult.h>

#include <utility>

using namespace Aws::Route53GlobalResolver::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

BatchDeleteFirewallRuleSdkResult::BatchDeleteFirewallRuleSdkResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

BatchDeleteFirewallRuleSdkResult& BatchDeleteFirewallRuleSdkResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("failures")) {
    Aws::Utils::Array<JsonView> failuresJsonList = jsonValue.GetArray("failures");
    for (unsigned failuresIndex = 0; failuresIndex < failuresJsonList.GetLength(); ++failuresIndex) {
      m_failures.push_back(failuresJsonList[failuresIndex].AsObject());
    }
    m_failuresHasBeenSet = true;
  }
  if (jsonValue.ValueExists("successes")) {
    Aws::Utils::Array<JsonView> successesJsonList = jsonValue.GetArray("successes");
    for (unsigned successesIndex = 0; successesIndex < successesJsonList.GetLength(); ++successesIndex) {
      m_successes.push_back(successesJsonList[successesIndex].AsObject());
    }
    m_successesHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
