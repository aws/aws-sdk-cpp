/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/mq/model/DescribeSharedResourcesResult.h>

#include <utility>

using namespace Aws::MQ::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeSharedResourcesResult::DescribeSharedResourcesResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

DescribeSharedResourcesResult& DescribeSharedResourcesResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("nextToken")) {
    m_nextToken = jsonValue.GetString("nextToken");
    m_nextTokenHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sharedResources")) {
    Aws::Utils::Array<JsonView> sharedResourcesJsonList = jsonValue.GetArray("sharedResources");
    for (unsigned sharedResourcesIndex = 0; sharedResourcesIndex < sharedResourcesJsonList.GetLength(); ++sharedResourcesIndex) {
      m_sharedResources.push_back(sharedResourcesJsonList[sharedResourcesIndex].AsObject());
    }
    m_sharedResourcesHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
