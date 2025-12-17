/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/test-new-service-sdk-testing/model/GetFoosResult.h>

#include <utility>

using namespace Aws::TestNewServiceSDKTesting::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetFoosResult::GetFoosResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

GetFoosResult& GetFoosResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("foos")) {
    Aws::Utils::Array<JsonView> foosJsonList = jsonValue.GetArray("foos");
    for (unsigned foosIndex = 0; foosIndex < foosJsonList.GetLength(); ++foosIndex) {
      m_foos.push_back(foosJsonList[foosIndex].AsObject());
    }
    m_foosHasBeenSet = true;
  }
  if (jsonValue.ValueExists("nextToken")) {
    m_nextToken = jsonValue.GetString("nextToken");
    m_nextTokenHasBeenSet = true;
  }
  if (jsonValue.ValueExists("filter")) {
    m_filter = jsonValue.GetString("filter");
    m_filterHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
