/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/securityagent/model/CreateThreatResult.h>

#include <utility>

using namespace Aws::SecurityAgent::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateThreatResult::CreateThreatResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

CreateThreatResult& CreateThreatResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("threatId")) {
    m_threatId = jsonValue.GetString("threatId");
    m_threatIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("threatJobId")) {
    m_threatJobId = jsonValue.GetString("threatJobId");
    m_threatJobIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("title")) {
    m_title = jsonValue.GetString("title");
    m_titleHasBeenSet = true;
  }
  if (jsonValue.ValueExists("statement")) {
    m_statement = jsonValue.GetString("statement");
    m_statementHasBeenSet = true;
  }
  if (jsonValue.ValueExists("severity")) {
    m_severity = ThreatSeverityMapper::GetThreatSeverityForName(jsonValue.GetString("severity"));
    m_severityHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = ThreatStatusMapper::GetThreatStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("comments")) {
    m_comments = jsonValue.GetString("comments");
    m_commentsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("stride")) {
    Aws::Utils::Array<JsonView> strideJsonList = jsonValue.GetArray("stride");
    for (unsigned strideIndex = 0; strideIndex < strideJsonList.GetLength(); ++strideIndex) {
      m_stride.push_back(StrideCategoryMapper::GetStrideCategoryForName(strideJsonList[strideIndex].AsString()));
    }
    m_strideHasBeenSet = true;
  }
  if (jsonValue.ValueExists("threatSource")) {
    m_threatSource = jsonValue.GetString("threatSource");
    m_threatSourceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("prerequisites")) {
    m_prerequisites = jsonValue.GetString("prerequisites");
    m_prerequisitesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("threatAction")) {
    m_threatAction = jsonValue.GetString("threatAction");
    m_threatActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("threatImpact")) {
    m_threatImpact = jsonValue.GetString("threatImpact");
    m_threatImpactHasBeenSet = true;
  }
  if (jsonValue.ValueExists("impactedGoal")) {
    Aws::Utils::Array<JsonView> impactedGoalJsonList = jsonValue.GetArray("impactedGoal");
    for (unsigned impactedGoalIndex = 0; impactedGoalIndex < impactedGoalJsonList.GetLength(); ++impactedGoalIndex) {
      m_impactedGoal.push_back(impactedGoalJsonList[impactedGoalIndex].AsString());
    }
    m_impactedGoalHasBeenSet = true;
  }
  if (jsonValue.ValueExists("impactedAssets")) {
    Aws::Utils::Array<JsonView> impactedAssetsJsonList = jsonValue.GetArray("impactedAssets");
    for (unsigned impactedAssetsIndex = 0; impactedAssetsIndex < impactedAssetsJsonList.GetLength(); ++impactedAssetsIndex) {
      m_impactedAssets.push_back(impactedAssetsJsonList[impactedAssetsIndex].AsString());
    }
    m_impactedAssetsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("anchor")) {
    m_anchor = jsonValue.GetObject("anchor");
    m_anchorHasBeenSet = true;
  }
  if (jsonValue.ValueExists("evidence")) {
    Aws::Utils::Array<JsonView> evidenceJsonList = jsonValue.GetArray("evidence");
    for (unsigned evidenceIndex = 0; evidenceIndex < evidenceJsonList.GetLength(); ++evidenceIndex) {
      m_evidence.push_back(evidenceJsonList[evidenceIndex].AsObject());
    }
    m_evidenceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("recommendation")) {
    m_recommendation = jsonValue.GetString("recommendation");
    m_recommendationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdBy")) {
    m_createdBy = ThreatActorMapper::GetThreatActorForName(jsonValue.GetString("createdBy"));
    m_createdByHasBeenSet = true;
  }
  if (jsonValue.ValueExists("updatedBy")) {
    m_updatedBy = ThreatActorMapper::GetThreatActorForName(jsonValue.GetString("updatedBy"));
    m_updatedByHasBeenSet = true;
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
