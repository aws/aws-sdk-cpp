/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/mediaconnect/model/ListRouterNetworkInterfacesResult.h>

#include <utility>

using namespace Aws::MediaConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListRouterNetworkInterfacesResult::ListRouterNetworkInterfacesResult(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  *this = result;
}

ListRouterNetworkInterfacesResult& ListRouterNetworkInterfacesResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("routerNetworkInterfaces")) {
    Aws::Utils::Array<JsonView> routerNetworkInterfacesJsonList = jsonValue.GetArray("routerNetworkInterfaces");
    for (unsigned routerNetworkInterfacesIndex = 0; routerNetworkInterfacesIndex < routerNetworkInterfacesJsonList.GetLength();
         ++routerNetworkInterfacesIndex) {
      m_routerNetworkInterfaces.push_back(routerNetworkInterfacesJsonList[routerNetworkInterfacesIndex].AsObject());
    }
    m_routerNetworkInterfacesHasBeenSet = true;
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
