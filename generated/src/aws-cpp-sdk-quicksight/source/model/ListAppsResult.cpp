/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/quicksight/model/ListAppsResult.h>

#include <utility>

using namespace Aws::QuickSight::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListAppsResult::ListAppsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

ListAppsResult& ListAppsResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("AppSummaryList")) {
    Aws::Utils::Array<JsonView> appSummaryListJsonList = jsonValue.GetArray("AppSummaryList");
    for (unsigned appSummaryListIndex = 0; appSummaryListIndex < appSummaryListJsonList.GetLength(); ++appSummaryListIndex) {
      m_appSummaryList.push_back(appSummaryListJsonList[appSummaryListIndex].AsObject());
    }
    m_appSummaryListHasBeenSet = true;
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
