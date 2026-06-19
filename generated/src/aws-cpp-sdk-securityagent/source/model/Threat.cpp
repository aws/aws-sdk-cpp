/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityagent/model/Threat.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SecurityAgent {
namespace Model {

Threat::Threat(JsonView jsonValue) { *this = jsonValue; }

Threat& Threat::operator=(JsonView jsonValue) {
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
  if (jsonValue.ValueExists("stride")) {
    Aws::Utils::Array<JsonView> strideJsonList = jsonValue.GetArray("stride");
    for (unsigned strideIndex = 0; strideIndex < strideJsonList.GetLength(); ++strideIndex) {
      m_stride.push_back(StrideCategoryMapper::GetStrideCategoryForName(strideJsonList[strideIndex].AsString()));
    }
    m_strideHasBeenSet = true;
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
  return *this;
}

JsonValue Threat::Jsonize() const {
  JsonValue payload;

  if (m_threatIdHasBeenSet) {
    payload.WithString("threatId", m_threatId);
  }

  if (m_threatJobIdHasBeenSet) {
    payload.WithString("threatJobId", m_threatJobId);
  }

  if (m_titleHasBeenSet) {
    payload.WithString("title", m_title);
  }

  if (m_statementHasBeenSet) {
    payload.WithString("statement", m_statement);
  }

  if (m_severityHasBeenSet) {
    payload.WithString("severity", ThreatSeverityMapper::GetNameForThreatSeverity(m_severity));
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", ThreatStatusMapper::GetNameForThreatStatus(m_status));
  }

  if (m_commentsHasBeenSet) {
    payload.WithString("comments", m_comments);
  }

  if (m_threatSourceHasBeenSet) {
    payload.WithString("threatSource", m_threatSource);
  }

  if (m_prerequisitesHasBeenSet) {
    payload.WithString("prerequisites", m_prerequisites);
  }

  if (m_threatActionHasBeenSet) {
    payload.WithString("threatAction", m_threatAction);
  }

  if (m_threatImpactHasBeenSet) {
    payload.WithString("threatImpact", m_threatImpact);
  }

  if (m_impactedGoalHasBeenSet) {
    Aws::Utils::Array<JsonValue> impactedGoalJsonList(m_impactedGoal.size());
    for (unsigned impactedGoalIndex = 0; impactedGoalIndex < impactedGoalJsonList.GetLength(); ++impactedGoalIndex) {
      impactedGoalJsonList[impactedGoalIndex].AsString(m_impactedGoal[impactedGoalIndex]);
    }
    payload.WithArray("impactedGoal", std::move(impactedGoalJsonList));
  }

  if (m_impactedAssetsHasBeenSet) {
    Aws::Utils::Array<JsonValue> impactedAssetsJsonList(m_impactedAssets.size());
    for (unsigned impactedAssetsIndex = 0; impactedAssetsIndex < impactedAssetsJsonList.GetLength(); ++impactedAssetsIndex) {
      impactedAssetsJsonList[impactedAssetsIndex].AsString(m_impactedAssets[impactedAssetsIndex]);
    }
    payload.WithArray("impactedAssets", std::move(impactedAssetsJsonList));
  }

  if (m_anchorHasBeenSet) {
    payload.WithObject("anchor", m_anchor.Jsonize());
  }

  if (m_evidenceHasBeenSet) {
    Aws::Utils::Array<JsonValue> evidenceJsonList(m_evidence.size());
    for (unsigned evidenceIndex = 0; evidenceIndex < evidenceJsonList.GetLength(); ++evidenceIndex) {
      evidenceJsonList[evidenceIndex].AsObject(m_evidence[evidenceIndex].Jsonize());
    }
    payload.WithArray("evidence", std::move(evidenceJsonList));
  }

  if (m_strideHasBeenSet) {
    Aws::Utils::Array<JsonValue> strideJsonList(m_stride.size());
    for (unsigned strideIndex = 0; strideIndex < strideJsonList.GetLength(); ++strideIndex) {
      strideJsonList[strideIndex].AsString(StrideCategoryMapper::GetNameForStrideCategory(m_stride[strideIndex]));
    }
    payload.WithArray("stride", std::move(strideJsonList));
  }

  if (m_recommendationHasBeenSet) {
    payload.WithString("recommendation", m_recommendation);
  }

  if (m_createdByHasBeenSet) {
    payload.WithString("createdBy", ThreatActorMapper::GetNameForThreatActor(m_createdBy));
  }

  if (m_updatedByHasBeenSet) {
    payload.WithString("updatedBy", ThreatActorMapper::GetNameForThreatActor(m_updatedBy));
  }

  if (m_createdAtHasBeenSet) {
    payload.WithString("createdAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_updatedAtHasBeenSet) {
    payload.WithString("updatedAt", m_updatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
