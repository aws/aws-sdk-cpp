/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/networkmanager/model/ListContextStoresResult.h>

#include <utility>

using namespace Aws::NetworkManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListContextStoresResult::ListContextStoresResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

ListContextStoresResult& ListContextStoresResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("ContextStores")) {
    Aws::Utils::Array<JsonView> contextStoresJsonList = jsonValue.GetArray("ContextStores");
    for (unsigned contextStoresIndex = 0; contextStoresIndex < contextStoresJsonList.GetLength(); ++contextStoresIndex) {
      m_contextStores.push_back(contextStoresJsonList[contextStoresIndex].AsObject());
    }
    m_contextStoresHasBeenSet = true;
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
