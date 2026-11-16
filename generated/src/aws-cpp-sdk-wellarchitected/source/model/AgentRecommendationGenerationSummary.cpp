/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/wellarchitected/model/AgentRecommendationGenerationSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace WellArchitected {
namespace Model {

AgentRecommendationGenerationSummary::AgentRecommendationGenerationSummary(JsonView jsonValue) { *this = jsonValue; }

AgentRecommendationGenerationSummary& AgentRecommendationGenerationSummary::operator=(JsonView jsonValue) {
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
  if (jsonValue.ValueExists("generationType")) {
    m_generationType = GenerationTypeMapper::GetGenerationTypeForName(jsonValue.GetString("generationType"));
    m_generationTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("generationRecommendationTypes")) {
    Aws::Utils::Array<JsonView> generationRecommendationTypesJsonList = jsonValue.GetArray("generationRecommendationTypes");
    for (unsigned generationRecommendationTypesIndex = 0;
         generationRecommendationTypesIndex < generationRecommendationTypesJsonList.GetLength(); ++generationRecommendationTypesIndex) {
      m_generationRecommendationTypes.push_back(RecommendationTypeMapper::GetRecommendationTypeForName(
          generationRecommendationTypesJsonList[generationRecommendationTypesIndex].AsString()));
    }
    m_generationRecommendationTypesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("startedAt")) {
    m_startedAt = jsonValue.GetString("startedAt");
    m_startedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("endedAt")) {
    m_endedAt = jsonValue.GetString("endedAt");
    m_endedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("errorDetails")) {
    m_errorDetails = jsonValue.GetObject("errorDetails");
    m_errorDetailsHasBeenSet = true;
  }
  return *this;
}

JsonValue AgentRecommendationGenerationSummary::Jsonize() const {
  JsonValue payload;

  if (m_idHasBeenSet) {
    payload.WithString("id", m_id);
  }

  if (m_profileArnHasBeenSet) {
    payload.WithString("profileArn", m_profileArn);
  }

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", GenerationStatusMapper::GetNameForGenerationStatus(m_status));
  }

  if (m_estimatedCompletionTimeHasBeenSet) {
    payload.WithString("estimatedCompletionTime", m_estimatedCompletionTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
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

  if (m_generationTypeHasBeenSet) {
    payload.WithString("generationType", GenerationTypeMapper::GetNameForGenerationType(m_generationType));
  }

  if (m_generationRecommendationTypesHasBeenSet) {
    Aws::Utils::Array<JsonValue> generationRecommendationTypesJsonList(m_generationRecommendationTypes.size());
    for (unsigned generationRecommendationTypesIndex = 0;
         generationRecommendationTypesIndex < generationRecommendationTypesJsonList.GetLength(); ++generationRecommendationTypesIndex) {
      generationRecommendationTypesJsonList[generationRecommendationTypesIndex].AsString(
          RecommendationTypeMapper::GetNameForRecommendationType(m_generationRecommendationTypes[generationRecommendationTypesIndex]));
    }
    payload.WithArray("generationRecommendationTypes", std::move(generationRecommendationTypesJsonList));
  }

  if (m_startedAtHasBeenSet) {
    payload.WithString("startedAt", m_startedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_endedAtHasBeenSet) {
    payload.WithString("endedAt", m_endedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_errorDetailsHasBeenSet) {
    payload.WithObject("errorDetails", m_errorDetails.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace WellArchitected
}  // namespace Aws
