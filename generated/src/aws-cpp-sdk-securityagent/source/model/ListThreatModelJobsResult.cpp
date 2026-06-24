/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/securityagent/model/ListThreatModelJobsResult.h>

#include <utility>

using namespace Aws::SecurityAgent::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListThreatModelJobsResult::ListThreatModelJobsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

ListThreatModelJobsResult& ListThreatModelJobsResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("threatModelJobSummaries")) {
    Aws::Utils::Array<JsonView> threatModelJobSummariesJsonList = jsonValue.GetArray("threatModelJobSummaries");
    for (unsigned threatModelJobSummariesIndex = 0; threatModelJobSummariesIndex < threatModelJobSummariesJsonList.GetLength();
         ++threatModelJobSummariesIndex) {
      m_threatModelJobSummaries.push_back(threatModelJobSummariesJsonList[threatModelJobSummariesIndex].AsObject());
    }
    m_threatModelJobSummariesHasBeenSet = true;
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
