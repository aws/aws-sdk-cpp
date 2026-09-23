/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/network-security-manager/model/ListResourceAssociationsResult.h>

#include <utility>

using namespace Aws::NetworkSecurityManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListResourceAssociationsResult::ListResourceAssociationsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

ListResourceAssociationsResult& ListResourceAssociationsResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("nextToken")) {
    m_nextToken = jsonValue.GetString("nextToken");
    m_nextTokenHasBeenSet = true;
  }
  if (jsonValue.ValueExists("resourceAssociations")) {
    Aws::Utils::Array<JsonView> resourceAssociationsJsonList = jsonValue.GetArray("resourceAssociations");
    for (unsigned resourceAssociationsIndex = 0; resourceAssociationsIndex < resourceAssociationsJsonList.GetLength();
         ++resourceAssociationsIndex) {
      m_resourceAssociations.push_back(resourceAssociationsJsonList[resourceAssociationsIndex].AsObject());
    }
    m_resourceAssociationsHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
