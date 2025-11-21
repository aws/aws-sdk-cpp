/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/networkmanager/model/ListCoreNetworkRoutingInformationResult.h>

#include <utility>

using namespace Aws::NetworkManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListCoreNetworkRoutingInformationResult::ListCoreNetworkRoutingInformationResult(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  *this = result;
}

ListCoreNetworkRoutingInformationResult& ListCoreNetworkRoutingInformationResult::operator=(
    const Aws::AmazonWebServiceResult<JsonValue>& result) {
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("CoreNetworkRoutingInformation")) {
    Aws::Utils::Array<JsonView> coreNetworkRoutingInformationJsonList = jsonValue.GetArray("CoreNetworkRoutingInformation");
    for (unsigned coreNetworkRoutingInformationIndex = 0;
         coreNetworkRoutingInformationIndex < coreNetworkRoutingInformationJsonList.GetLength(); ++coreNetworkRoutingInformationIndex) {
      m_coreNetworkRoutingInformation.push_back(coreNetworkRoutingInformationJsonList[coreNetworkRoutingInformationIndex].AsObject());
    }
    m_coreNetworkRoutingInformationHasBeenSet = true;
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
