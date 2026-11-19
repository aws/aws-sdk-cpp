/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/marketplace-catalog/model/FeatureRecommendation.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MarketplaceCatalog {
namespace Model {

FeatureRecommendation::FeatureRecommendation(JsonView jsonValue) { *this = jsonValue; }

FeatureRecommendation& FeatureRecommendation::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("FeatureId")) {
    m_featureId = RecommendedFeatureIdMapper::GetRecommendedFeatureIdForName(jsonValue.GetString("FeatureId"));
    m_featureIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Action")) {
    m_action = jsonValue.GetString("Action");
    m_actionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Rationale")) {
    m_rationale = jsonValue.GetString("Rationale");
    m_rationaleHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Severity")) {
    m_severity = RecommendationSeverityMapper::GetRecommendationSeverityForName(jsonValue.GetString("Severity"));
    m_severityHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Status")) {
    m_status = RecommendedFeatureStatusMapper::GetRecommendedFeatureStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  return *this;
}

JsonValue FeatureRecommendation::Jsonize() const {
  JsonValue payload;

  if (m_featureIdHasBeenSet) {
    payload.WithString("FeatureId", RecommendedFeatureIdMapper::GetNameForRecommendedFeatureId(m_featureId));
  }

  if (m_actionHasBeenSet) {
    payload.WithString("Action", m_action);
  }

  if (m_rationaleHasBeenSet) {
    payload.WithString("Rationale", m_rationale);
  }

  if (m_severityHasBeenSet) {
    payload.WithString("Severity", RecommendationSeverityMapper::GetNameForRecommendationSeverity(m_severity));
  }

  if (m_statusHasBeenSet) {
    payload.WithString("Status", RecommendedFeatureStatusMapper::GetNameForRecommendedFeatureStatus(m_status));
  }

  return payload;
}

}  // namespace Model
}  // namespace MarketplaceCatalog
}  // namespace Aws
