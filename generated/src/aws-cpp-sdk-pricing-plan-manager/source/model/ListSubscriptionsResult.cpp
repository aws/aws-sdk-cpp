/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/pricing-plan-manager/model/ListSubscriptionsResult.h>

#include <utility>

using namespace Aws::PricingPlanManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListSubscriptionsResult::ListSubscriptionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

ListSubscriptionsResult& ListSubscriptionsResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("subscriptionSummaries")) {
    Aws::Utils::Array<JsonView> subscriptionSummariesJsonList = jsonValue.GetArray("subscriptionSummaries");
    for (unsigned subscriptionSummariesIndex = 0; subscriptionSummariesIndex < subscriptionSummariesJsonList.GetLength();
         ++subscriptionSummariesIndex) {
      m_subscriptionSummaries.push_back(subscriptionSummariesJsonList[subscriptionSummariesIndex].AsObject());
    }
    m_subscriptionSummariesHasBeenSet = true;
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
