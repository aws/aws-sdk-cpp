/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/securityagent/model/ListTargetDomainsResult.h>

#include <utility>

using namespace Aws::SecurityAgent::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListTargetDomainsResult::ListTargetDomainsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

ListTargetDomainsResult& ListTargetDomainsResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("targetDomainSummaries")) {
    Aws::Utils::Array<JsonView> targetDomainSummariesJsonList = jsonValue.GetArray("targetDomainSummaries");
    for (unsigned targetDomainSummariesIndex = 0; targetDomainSummariesIndex < targetDomainSummariesJsonList.GetLength();
         ++targetDomainSummariesIndex) {
      m_targetDomainSummaries.push_back(targetDomainSummariesJsonList[targetDomainSummariesIndex].AsObject());
    }
    m_targetDomainSummariesHasBeenSet = true;
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
