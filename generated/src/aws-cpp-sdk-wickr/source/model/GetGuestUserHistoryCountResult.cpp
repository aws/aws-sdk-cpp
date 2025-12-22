/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/wickr/model/GetGuestUserHistoryCountResult.h>

#include <utility>

using namespace Aws::Wickr::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetGuestUserHistoryCountResult::GetGuestUserHistoryCountResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

GetGuestUserHistoryCountResult& GetGuestUserHistoryCountResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("history")) {
    Aws::Utils::Array<JsonView> historyJsonList = jsonValue.GetArray("history");
    for (unsigned historyIndex = 0; historyIndex < historyJsonList.GetLength(); ++historyIndex) {
      m_history.push_back(historyJsonList[historyIndex].AsObject());
    }
    m_historyHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
