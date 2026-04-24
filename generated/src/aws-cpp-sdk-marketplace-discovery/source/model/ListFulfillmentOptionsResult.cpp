/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/marketplace-discovery/model/ListFulfillmentOptionsResult.h>

#include <utility>

using namespace Aws::MarketplaceDiscovery::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListFulfillmentOptionsResult::ListFulfillmentOptionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

ListFulfillmentOptionsResult& ListFulfillmentOptionsResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("fulfillmentOptions")) {
    Aws::Utils::Array<JsonView> fulfillmentOptionsJsonList = jsonValue.GetArray("fulfillmentOptions");
    for (unsigned fulfillmentOptionsIndex = 0; fulfillmentOptionsIndex < fulfillmentOptionsJsonList.GetLength();
         ++fulfillmentOptionsIndex) {
      m_fulfillmentOptions.push_back(fulfillmentOptionsJsonList[fulfillmentOptionsIndex].AsObject());
    }
    m_fulfillmentOptionsHasBeenSet = true;
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
