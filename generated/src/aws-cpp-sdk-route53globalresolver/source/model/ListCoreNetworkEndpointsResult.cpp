/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/route53globalresolver/model/ListCoreNetworkEndpointsResult.h>

#include <utility>

using namespace Aws::Route53GlobalResolver::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListCoreNetworkEndpointsResult::ListCoreNetworkEndpointsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

ListCoreNetworkEndpointsResult& ListCoreNetworkEndpointsResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("nextToken")) {
    m_nextToken = jsonValue.GetString("nextToken");
    m_nextTokenHasBeenSet = true;
  }
  if (jsonValue.ValueExists("coreNetworkEndpoints")) {
    Aws::Utils::Array<JsonView> coreNetworkEndpointsJsonList = jsonValue.GetArray("coreNetworkEndpoints");
    for (unsigned coreNetworkEndpointsIndex = 0; coreNetworkEndpointsIndex < coreNetworkEndpointsJsonList.GetLength();
         ++coreNetworkEndpointsIndex) {
      m_coreNetworkEndpoints.push_back(coreNetworkEndpointsJsonList[coreNetworkEndpointsIndex].AsObject());
    }
    m_coreNetworkEndpointsHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
