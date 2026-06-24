/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityagent/model/CreateThreatRequest.h>

#include <utility>

using namespace Aws::SecurityAgent::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateThreatRequest::SerializePayload() const {
  JsonValue payload;

  if (m_agentSpaceIdHasBeenSet) {
    payload.WithString("agentSpaceId", m_agentSpaceId);
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

  if (m_commentsHasBeenSet) {
    payload.WithString("comments", m_comments);
  }

  if (m_strideHasBeenSet) {
    Aws::Utils::Array<JsonValue> strideJsonList(m_stride.size());
    for (unsigned strideIndex = 0; strideIndex < strideJsonList.GetLength(); ++strideIndex) {
      strideJsonList[strideIndex].AsString(StrideCategoryMapper::GetNameForStrideCategory(m_stride[strideIndex]));
    }
    payload.WithArray("stride", std::move(strideJsonList));
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

  if (m_recommendationHasBeenSet) {
    payload.WithString("recommendation", m_recommendation);
  }

  return payload.View().WriteReadable();
}
