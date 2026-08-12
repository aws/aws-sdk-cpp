/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/wellarchitected/model/AgentRecommendationSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace WellArchitected {
namespace Model {

AgentRecommendationSummary::AgentRecommendationSummary(JsonView jsonValue) { *this = jsonValue; }

AgentRecommendationSummary& AgentRecommendationSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("recommendationArn")) {
    m_recommendationArn = jsonValue.GetString("recommendationArn");
    m_recommendationArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("profileArn")) {
    m_profileArn = jsonValue.GetString("profileArn");
    m_profileArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("title")) {
    m_title = jsonValue.GetString("title");
    m_titleHasBeenSet = true;
  }
  if (jsonValue.ValueExists("description")) {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("type")) {
    m_type = RecommendationTypeMapper::GetRecommendationTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("pillar")) {
    m_pillar = PillarMapper::GetPillarForName(jsonValue.GetString("pillar"));
    m_pillarHasBeenSet = true;
  }
  if (jsonValue.ValueExists("priority")) {
    m_priority = PriorityMapper::GetPriorityForName(jsonValue.GetString("priority"));
    m_priorityHasBeenSet = true;
  }
  if (jsonValue.ValueExists("effort")) {
    m_effort = EffortMapper::GetEffortForName(jsonValue.GetString("effort"));
    m_effortHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = RecommendationStatusMapper::GetRecommendationStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("state")) {
    m_state = RecommendationStateMapper::GetRecommendationStateForName(jsonValue.GetString("state"));
    m_stateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("updateReason")) {
    m_updateReason = jsonValue.GetString("updateReason");
    m_updateReasonHasBeenSet = true;
  }
  if (jsonValue.ValueExists("impact")) {
    m_impact = ImpactCategoryMapper::GetImpactCategoryForName(jsonValue.GetString("impact"));
    m_impactHasBeenSet = true;
  }
  if (jsonValue.ValueExists("roi")) {
    m_roi = jsonValue.GetObject("roi");
    m_roiHasBeenSet = true;
  }
  if (jsonValue.ValueExists("numberOfResources")) {
    m_numberOfResources = jsonValue.GetInteger("numberOfResources");
    m_numberOfResourcesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("awsServices")) {
    Aws::Utils::Array<JsonView> awsServicesJsonList = jsonValue.GetArray("awsServices");
    for (unsigned awsServicesIndex = 0; awsServicesIndex < awsServicesJsonList.GetLength(); ++awsServicesIndex) {
      m_awsServices.push_back(awsServicesJsonList[awsServicesIndex].AsString());
    }
    m_awsServicesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("businessUnits")) {
    Aws::Utils::Array<JsonView> businessUnitsJsonList = jsonValue.GetArray("businessUnits");
    for (unsigned businessUnitsIndex = 0; businessUnitsIndex < businessUnitsJsonList.GetLength(); ++businessUnitsIndex) {
      m_businessUnits.push_back(businessUnitsJsonList[businessUnitsIndex].AsString());
    }
    m_businessUnitsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("applications")) {
    Aws::Utils::Array<JsonView> applicationsJsonList = jsonValue.GetArray("applications");
    for (unsigned applicationsIndex = 0; applicationsIndex < applicationsJsonList.GetLength(); ++applicationsIndex) {
      m_applications.push_back(applicationsJsonList[applicationsIndex].AsString());
    }
    m_applicationsHasBeenSet = true;
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
  return *this;
}

JsonValue AgentRecommendationSummary::Jsonize() const {
  JsonValue payload;

  if (m_recommendationArnHasBeenSet) {
    payload.WithString("recommendationArn", m_recommendationArn);
  }

  if (m_profileArnHasBeenSet) {
    payload.WithString("profileArn", m_profileArn);
  }

  if (m_titleHasBeenSet) {
    payload.WithString("title", m_title);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("description", m_description);
  }

  if (m_typeHasBeenSet) {
    payload.WithString("type", RecommendationTypeMapper::GetNameForRecommendationType(m_type));
  }

  if (m_pillarHasBeenSet) {
    payload.WithString("pillar", PillarMapper::GetNameForPillar(m_pillar));
  }

  if (m_priorityHasBeenSet) {
    payload.WithString("priority", PriorityMapper::GetNameForPriority(m_priority));
  }

  if (m_effortHasBeenSet) {
    payload.WithString("effort", EffortMapper::GetNameForEffort(m_effort));
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", RecommendationStatusMapper::GetNameForRecommendationStatus(m_status));
  }

  if (m_stateHasBeenSet) {
    payload.WithString("state", RecommendationStateMapper::GetNameForRecommendationState(m_state));
  }

  if (m_updateReasonHasBeenSet) {
    payload.WithString("updateReason", m_updateReason);
  }

  if (m_impactHasBeenSet) {
    payload.WithString("impact", ImpactCategoryMapper::GetNameForImpactCategory(m_impact));
  }

  if (m_roiHasBeenSet) {
    payload.WithObject("roi", m_roi.Jsonize());
  }

  if (m_numberOfResourcesHasBeenSet) {
    payload.WithInteger("numberOfResources", m_numberOfResources);
  }

  if (m_awsServicesHasBeenSet) {
    Aws::Utils::Array<JsonValue> awsServicesJsonList(m_awsServices.size());
    for (unsigned awsServicesIndex = 0; awsServicesIndex < awsServicesJsonList.GetLength(); ++awsServicesIndex) {
      awsServicesJsonList[awsServicesIndex].AsString(m_awsServices[awsServicesIndex]);
    }
    payload.WithArray("awsServices", std::move(awsServicesJsonList));
  }

  if (m_businessUnitsHasBeenSet) {
    Aws::Utils::Array<JsonValue> businessUnitsJsonList(m_businessUnits.size());
    for (unsigned businessUnitsIndex = 0; businessUnitsIndex < businessUnitsJsonList.GetLength(); ++businessUnitsIndex) {
      businessUnitsJsonList[businessUnitsIndex].AsString(m_businessUnits[businessUnitsIndex]);
    }
    payload.WithArray("businessUnits", std::move(businessUnitsJsonList));
  }

  if (m_applicationsHasBeenSet) {
    Aws::Utils::Array<JsonValue> applicationsJsonList(m_applications.size());
    for (unsigned applicationsIndex = 0; applicationsIndex < applicationsJsonList.GetLength(); ++applicationsIndex) {
      applicationsJsonList[applicationsIndex].AsString(m_applications[applicationsIndex]);
    }
    payload.WithArray("applications", std::move(applicationsJsonList));
  }

  if (m_createdByHasBeenSet) {
    payload.WithString("createdBy", m_createdBy);
  }

  if (m_createdAtHasBeenSet) {
    payload.WithString("createdAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_lastModifiedByHasBeenSet) {
    payload.WithString("lastModifiedBy", m_lastModifiedBy);
  }

  if (m_lastModifiedAtHasBeenSet) {
    payload.WithString("lastModifiedAt", m_lastModifiedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

}  // namespace Model
}  // namespace WellArchitected
}  // namespace Aws
