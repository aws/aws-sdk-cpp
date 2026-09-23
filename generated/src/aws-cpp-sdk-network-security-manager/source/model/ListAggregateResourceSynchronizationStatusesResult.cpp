/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/network-security-manager/model/ListAggregateResourceSynchronizationStatusesResult.h>

#include <utility>

using namespace Aws::NetworkSecurityManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListAggregateResourceSynchronizationStatusesResult::ListAggregateResourceSynchronizationStatusesResult(
    const Aws::AmazonWebServiceResult<JsonValue>& result) {
  *this = result;
}

ListAggregateResourceSynchronizationStatusesResult& ListAggregateResourceSynchronizationStatusesResult::operator=(
    const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("nextToken")) {
    m_nextToken = jsonValue.GetString("nextToken");
    m_nextTokenHasBeenSet = true;
  }
  if (jsonValue.ValueExists("resourceSynchronizationStatuses")) {
    Aws::Utils::Array<JsonView> resourceSynchronizationStatusesJsonList = jsonValue.GetArray("resourceSynchronizationStatuses");
    for (unsigned resourceSynchronizationStatusesIndex = 0;
         resourceSynchronizationStatusesIndex < resourceSynchronizationStatusesJsonList.GetLength();
         ++resourceSynchronizationStatusesIndex) {
      m_resourceSynchronizationStatuses.push_back(resourceSynchronizationStatusesJsonList[resourceSynchronizationStatusesIndex].AsObject());
    }
    m_resourceSynchronizationStatusesHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
