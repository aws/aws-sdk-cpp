/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/securityagent/model/ListAgentSpacesResult.h>

#include <utility>

using namespace Aws::SecurityAgent::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListAgentSpacesResult::ListAgentSpacesResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

ListAgentSpacesResult& ListAgentSpacesResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("agentSpaceSummaries")) {
    Aws::Utils::Array<JsonView> agentSpaceSummariesJsonList = jsonValue.GetArray("agentSpaceSummaries");
    for (unsigned agentSpaceSummariesIndex = 0; agentSpaceSummariesIndex < agentSpaceSummariesJsonList.GetLength();
         ++agentSpaceSummariesIndex) {
      m_agentSpaceSummaries.push_back(agentSpaceSummariesJsonList[agentSpaceSummariesIndex].AsObject());
    }
    m_agentSpaceSummariesHasBeenSet = true;
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
