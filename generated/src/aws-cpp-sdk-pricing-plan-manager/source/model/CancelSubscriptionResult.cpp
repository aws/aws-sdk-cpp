/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/pricing-plan-manager/model/CancelSubscriptionResult.h>

#include <utility>

using namespace Aws::PricingPlanManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CancelSubscriptionResult::CancelSubscriptionResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

CancelSubscriptionResult& CancelSubscriptionResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  m_subscription = jsonValue;
  m_subscriptionHasBeenSet = true;

  const auto& headers = result.GetHeaderValueCollection();
  const auto& eTagIter = headers.find("etag");
  if (eTagIter != headers.end()) {
    m_eTag = eTagIter->second;
    m_eTagHasBeenSet = true;
  }

  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
