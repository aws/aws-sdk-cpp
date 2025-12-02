/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/nova-act/model/ListActsResult.h>

#include <utility>

using namespace Aws::NovaAct::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListActsResult::ListActsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

ListActsResult& ListActsResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("actSummaries")) {
    Aws::Utils::Array<JsonView> actSummariesJsonList = jsonValue.GetArray("actSummaries");
    for (unsigned actSummariesIndex = 0; actSummariesIndex < actSummariesJsonList.GetLength(); ++actSummariesIndex) {
      m_actSummaries.push_back(actSummariesJsonList[actSummariesIndex].AsObject());
    }
    m_actSummariesHasBeenSet = true;
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
