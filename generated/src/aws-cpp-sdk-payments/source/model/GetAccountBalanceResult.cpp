/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/payments/model/GetAccountBalanceResult.h>

#include <utility>

using namespace Aws::Payments::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetAccountBalanceResult::GetAccountBalanceResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

GetAccountBalanceResult& GetAccountBalanceResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("accountBalances")) {
    Aws::Utils::Array<JsonView> accountBalancesJsonList = jsonValue.GetArray("accountBalances");
    for (unsigned accountBalancesIndex = 0; accountBalancesIndex < accountBalancesJsonList.GetLength(); ++accountBalancesIndex) {
      m_accountBalances.push_back(accountBalancesJsonList[accountBalancesIndex].AsObject());
    }
    m_accountBalancesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("nextToken")) {
    m_nextToken = jsonValue.GetString("nextToken");
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
