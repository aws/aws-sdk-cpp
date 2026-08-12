/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/wellarchitected/model/GetAgentRecommendationGenerationResult.h>

#include <utility>

using namespace Aws::WellArchitected::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetAgentRecommendationGenerationResult::GetAgentRecommendationGenerationResult(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  *this = result;
}

GetAgentRecommendationGenerationResult& GetAgentRecommendationGenerationResult::operator=(
    const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("id")) {
    m_id = jsonValue.GetString("id");
    m_idHasBeenSet = true;
  }
  if (jsonValue.ValueExists("profileArn")) {
    m_profileArn = jsonValue.GetString("profileArn");
    m_profileArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = GenerationStatusMapper::GetGenerationStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("estimatedCompletionTime")) {
    m_estimatedCompletionTime = jsonValue.GetString("estimatedCompletionTime");
    m_estimatedCompletionTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdBy")) {
    m_createdBy = jsonValue.GetString("createdBy");
    m_createdByHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetString("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("lastModifiedBy")) {
    m_lastModifiedBy = jsonValue.GetString("lastModifiedBy");
    m_lastModifiedByHasBeenSet = true;
  }
  if (jsonValue.ValueExists("lastModifiedAt")) {
    m_lastModifiedAt = jsonValue.GetString("lastModifiedAt");
    m_lastModifiedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("additionalContext")) {
    m_additionalContext = jsonValue.GetObject("additionalContext");
    m_additionalContextHasBeenSet = true;
  }
  if (jsonValue.ValueExists("scope")) {
    m_scope = jsonValue.GetObject("scope");
    m_scopeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("startedAt")) {
    m_startedAt = jsonValue.GetString("startedAt");
    m_startedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("endedAt")) {
    m_endedAt = jsonValue.GetString("endedAt");
    m_endedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("progress")) {
    m_progress = jsonValue.GetObject("progress");
    m_progressHasBeenSet = true;
  }
  if (jsonValue.ValueExists("errorDetails")) {
    m_errorDetails = jsonValue.GetObject("errorDetails");
    m_errorDetailsHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
