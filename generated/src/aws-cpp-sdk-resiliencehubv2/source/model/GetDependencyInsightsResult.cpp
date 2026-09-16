/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/resiliencehubv2/model/GetDependencyInsightsResult.h>

#include <utility>

using namespace Aws::resiliencehubv2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetDependencyInsightsResult::GetDependencyInsightsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

GetDependencyInsightsResult& GetDependencyInsightsResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("overview")) {
    m_overview = jsonValue.GetString("overview");
    m_overviewHasBeenSet = true;
  }
  if (jsonValue.ValueExists("insights")) {
    Aws::Utils::Array<JsonView> insightsJsonList = jsonValue.GetArray("insights");
    for (unsigned insightsIndex = 0; insightsIndex < insightsJsonList.GetLength(); ++insightsIndex) {
      m_insights.push_back(insightsJsonList[insightsIndex].AsObject());
    }
    m_insightsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = DependencyInsightsStatusMapper::GetDependencyInsightsStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetDouble("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("errorCode")) {
    m_errorCode = DependencyInsightsErrorCodeMapper::GetDependencyInsightsErrorCodeForName(jsonValue.GetString("errorCode"));
    m_errorCodeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("errorMessage")) {
    m_errorMessage = jsonValue.GetString("errorMessage");
    m_errorMessageHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
