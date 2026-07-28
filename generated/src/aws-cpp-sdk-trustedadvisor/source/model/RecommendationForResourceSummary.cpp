/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/trustedadvisor/model/RecommendationForResourceSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace TrustedAdvisor {
namespace Model {

RecommendationForResourceSummary::RecommendationForResourceSummary(JsonView jsonValue) { *this = jsonValue; }

RecommendationForResourceSummary& RecommendationForResourceSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("checkArn")) {
    m_checkArn = jsonValue.GetString("checkArn");
    m_checkArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("recommendationArn")) {
    m_recommendationArn = jsonValue.GetString("recommendationArn");
    m_recommendationArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("awsResourceArn")) {
    m_awsResourceArn = jsonValue.GetString("awsResourceArn");
    m_awsResourceArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = ResourceStatusMapper::GetResourceStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("lastUpdatedAt")) {
    m_lastUpdatedAt = jsonValue.GetString("lastUpdatedAt");
    m_lastUpdatedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("exclusionStatus")) {
    m_exclusionStatus = ExclusionStatusMapper::GetExclusionStatusForName(jsonValue.GetString("exclusionStatus"));
    m_exclusionStatusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("metadata")) {
    Aws::Map<Aws::String, JsonView> metadataJsonMap = jsonValue.GetObject("metadata").GetAllObjects();
    for (auto& metadataItem : metadataJsonMap) {
      m_metadata[metadataItem.first] = metadataItem.second.AsString();
    }
    m_metadataHasBeenSet = true;
  }
  if (jsonValue.ValueExists("pillars")) {
    Aws::Utils::Array<JsonView> pillarsJsonList = jsonValue.GetArray("pillars");
    for (unsigned pillarsIndex = 0; pillarsIndex < pillarsJsonList.GetLength(); ++pillarsIndex) {
      m_pillars.push_back(RecommendationPillarMapper::GetRecommendationPillarForName(pillarsJsonList[pillarsIndex].AsString()));
    }
    m_pillarsHasBeenSet = true;
  }
  return *this;
}

JsonValue RecommendationForResourceSummary::Jsonize() const {
  JsonValue payload;

  if (m_checkArnHasBeenSet) {
    payload.WithString("checkArn", m_checkArn);
  }

  if (m_recommendationArnHasBeenSet) {
    payload.WithString("recommendationArn", m_recommendationArn);
  }

  if (m_awsResourceArnHasBeenSet) {
    payload.WithString("awsResourceArn", m_awsResourceArn);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", ResourceStatusMapper::GetNameForResourceStatus(m_status));
  }

  if (m_lastUpdatedAtHasBeenSet) {
    payload.WithString("lastUpdatedAt", m_lastUpdatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_exclusionStatusHasBeenSet) {
    payload.WithString("exclusionStatus", ExclusionStatusMapper::GetNameForExclusionStatus(m_exclusionStatus));
  }

  if (m_metadataHasBeenSet) {
    JsonValue metadataJsonMap;
    for (auto& metadataItem : m_metadata) {
      metadataJsonMap.WithString(metadataItem.first, metadataItem.second);
    }
    payload.WithObject("metadata", std::move(metadataJsonMap));
  }

  if (m_pillarsHasBeenSet) {
    Aws::Utils::Array<JsonValue> pillarsJsonList(m_pillars.size());
    for (unsigned pillarsIndex = 0; pillarsIndex < pillarsJsonList.GetLength(); ++pillarsIndex) {
      pillarsJsonList[pillarsIndex].AsString(RecommendationPillarMapper::GetNameForRecommendationPillar(m_pillars[pillarsIndex]));
    }
    payload.WithArray("pillars", std::move(pillarsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace TrustedAdvisor
}  // namespace Aws
