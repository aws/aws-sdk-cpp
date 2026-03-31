/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/securityagent/model/UpdateAgentSpaceResult.h>

#include <utility>

using namespace Aws::SecurityAgent::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdateAgentSpaceResult::UpdateAgentSpaceResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

UpdateAgentSpaceResult& UpdateAgentSpaceResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("agentSpaceId")) {
    m_agentSpaceId = jsonValue.GetString("agentSpaceId");
    m_agentSpaceIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("description")) {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("awsResources")) {
    m_awsResources = jsonValue.GetObject("awsResources");
    m_awsResourcesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("targetDomainIds")) {
    Aws::Utils::Array<JsonView> targetDomainIdsJsonList = jsonValue.GetArray("targetDomainIds");
    for (unsigned targetDomainIdsIndex = 0; targetDomainIdsIndex < targetDomainIdsJsonList.GetLength(); ++targetDomainIdsIndex) {
      m_targetDomainIds.push_back(targetDomainIdsJsonList[targetDomainIdsIndex].AsString());
    }
    m_targetDomainIdsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("codeReviewSettings")) {
    m_codeReviewSettings = jsonValue.GetObject("codeReviewSettings");
    m_codeReviewSettingsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetString("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("updatedAt")) {
    m_updatedAt = jsonValue.GetString("updatedAt");
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
