/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/resiliencehubv2/model/ListTestRunSourceEventsResult.h>

#include <utility>

using namespace Aws::resiliencehubv2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListTestRunSourceEventsResult::ListTestRunSourceEventsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

ListTestRunSourceEventsResult& ListTestRunSourceEventsResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("testRunSourceEvents")) {
    Aws::Utils::Array<JsonView> testRunSourceEventsJsonList = jsonValue.GetArray("testRunSourceEvents");
    for (unsigned testRunSourceEventsIndex = 0; testRunSourceEventsIndex < testRunSourceEventsJsonList.GetLength();
         ++testRunSourceEventsIndex) {
      m_testRunSourceEvents.push_back(testRunSourceEventsJsonList[testRunSourceEventsIndex].AsObject());
    }
    m_testRunSourceEventsHasBeenSet = true;
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
