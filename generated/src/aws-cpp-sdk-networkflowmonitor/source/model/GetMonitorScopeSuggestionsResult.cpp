/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/networkflowmonitor/model/GetMonitorScopeSuggestionsResult.h>

#include <utility>

using namespace Aws::NetworkFlowMonitor::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetMonitorScopeSuggestionsResult::GetMonitorScopeSuggestionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

GetMonitorScopeSuggestionsResult& GetMonitorScopeSuggestionsResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("status")) {
    m_status = ScopeCoverageStatusMapper::GetScopeCoverageStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("accountsToAdd")) {
    Aws::Utils::Array<JsonView> accountsToAddJsonList = jsonValue.GetArray("accountsToAdd");
    for (unsigned accountsToAddIndex = 0; accountsToAddIndex < accountsToAddJsonList.GetLength(); ++accountsToAddIndex) {
      m_accountsToAdd.push_back(accountsToAddJsonList[accountsToAddIndex].AsObject());
    }
    m_accountsToAddHasBeenSet = true;
  }
  if (jsonValue.ValueExists("nextToken")) {
    m_nextToken = jsonValue.GetString("nextToken");
    m_nextTokenHasBeenSet = true;
  }
  if (jsonValue.ValueExists("updatedAt")) {
    m_updatedAt = jsonValue.GetDouble("updatedAt");
    m_updatedAtHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
