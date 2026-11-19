/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/rtbfabric/model/GetAvailableModuleResult.h>

#include <utility>

using namespace Aws::RTBFabric::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetAvailableModuleResult::GetAvailableModuleResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

GetAvailableModuleResult& GetAvailableModuleResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("moduleId")) {
    m_moduleId = jsonValue.GetString("moduleId");
    m_moduleIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("moduleArn")) {
    m_moduleArn = jsonValue.GetString("moduleArn");
    m_moduleArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("moduleName")) {
    m_moduleName = jsonValue.GetString("moduleName");
    m_moduleNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("description")) {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("subscriptionType")) {
    m_subscriptionType = SubscriptionTypeMapper::GetSubscriptionTypeForName(jsonValue.GetString("subscriptionType"));
    m_subscriptionTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("subscriptionStatus")) {
    m_subscriptionStatus = SubscriptionStatusMapper::GetSubscriptionStatusForName(jsonValue.GetString("subscriptionStatus"));
    m_subscriptionStatusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("marketplaceProductId")) {
    m_marketplaceProductId = jsonValue.GetString("marketplaceProductId");
    m_marketplaceProductIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetDouble("createdAt");
    m_createdAtHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
