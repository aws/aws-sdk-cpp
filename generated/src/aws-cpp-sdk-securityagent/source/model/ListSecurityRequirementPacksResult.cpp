/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/securityagent/model/ListSecurityRequirementPacksResult.h>

#include <utility>

using namespace Aws::SecurityAgent::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListSecurityRequirementPacksResult::ListSecurityRequirementPacksResult(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  *this = result;
}

ListSecurityRequirementPacksResult& ListSecurityRequirementPacksResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("securityRequirementPackSummaries")) {
    Aws::Utils::Array<JsonView> securityRequirementPackSummariesJsonList = jsonValue.GetArray("securityRequirementPackSummaries");
    for (unsigned securityRequirementPackSummariesIndex = 0;
         securityRequirementPackSummariesIndex < securityRequirementPackSummariesJsonList.GetLength();
         ++securityRequirementPackSummariesIndex) {
      m_securityRequirementPackSummaries.push_back(
          securityRequirementPackSummariesJsonList[securityRequirementPackSummariesIndex].AsObject());
    }
    m_securityRequirementPackSummariesHasBeenSet = true;
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
