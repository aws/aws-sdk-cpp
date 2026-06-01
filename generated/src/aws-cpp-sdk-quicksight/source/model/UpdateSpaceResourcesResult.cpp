/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/quicksight/model/UpdateSpaceResourcesResult.h>

#include <utility>

using namespace Aws::QuickSight::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdateSpaceResourcesResult::UpdateSpaceResourcesResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

UpdateSpaceResourcesResult& UpdateSpaceResourcesResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("spaceId")) {
    m_spaceId = jsonValue.GetString("spaceId");
    m_spaceIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("spaceArn")) {
    m_spaceArn = jsonValue.GetString("spaceArn");
    m_spaceArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("FailedResourceOperations")) {
    Aws::Utils::Array<JsonView> failedResourceOperationsJsonList = jsonValue.GetArray("FailedResourceOperations");
    for (unsigned failedResourceOperationsIndex = 0; failedResourceOperationsIndex < failedResourceOperationsJsonList.GetLength();
         ++failedResourceOperationsIndex) {
      m_failedResourceOperations.push_back(failedResourceOperationsJsonList[failedResourceOperationsIndex].AsObject());
    }
    m_failedResourceOperationsHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
