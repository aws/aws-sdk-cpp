/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/securityagent/model/ListDiscoveredEndpointsResult.h>

#include <utility>

using namespace Aws::SecurityAgent::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListDiscoveredEndpointsResult::ListDiscoveredEndpointsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

ListDiscoveredEndpointsResult& ListDiscoveredEndpointsResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("discoveredEndpoints")) {
    Aws::Utils::Array<JsonView> discoveredEndpointsJsonList = jsonValue.GetArray("discoveredEndpoints");
    for (unsigned discoveredEndpointsIndex = 0; discoveredEndpointsIndex < discoveredEndpointsJsonList.GetLength();
         ++discoveredEndpointsIndex) {
      m_discoveredEndpoints.push_back(discoveredEndpointsJsonList[discoveredEndpointsIndex].AsObject());
    }
    m_discoveredEndpointsHasBeenSet = true;
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
