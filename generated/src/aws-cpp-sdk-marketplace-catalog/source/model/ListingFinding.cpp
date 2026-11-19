/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/marketplace-catalog/model/ListingFinding.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MarketplaceCatalog {
namespace Model {

ListingFinding::ListingFinding(JsonView jsonValue) { *this = jsonValue; }

ListingFinding& ListingFinding::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Action")) {
    m_action = jsonValue.GetString("Action");
    m_actionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Description")) {
    m_description = jsonValue.GetString("Description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Severity")) {
    m_severity = RecommendationSeverityMapper::GetRecommendationSeverityForName(jsonValue.GetString("Severity"));
    m_severityHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Status")) {
    m_status = ListingFindingStatusMapper::GetListingFindingStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  return *this;
}

JsonValue ListingFinding::Jsonize() const {
  JsonValue payload;

  if (m_actionHasBeenSet) {
    payload.WithString("Action", m_action);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("Description", m_description);
  }

  if (m_severityHasBeenSet) {
    payload.WithString("Severity", RecommendationSeverityMapper::GetNameForRecommendationSeverity(m_severity));
  }

  if (m_statusHasBeenSet) {
    payload.WithString("Status", ListingFindingStatusMapper::GetNameForListingFindingStatus(m_status));
  }

  return payload;
}

}  // namespace Model
}  // namespace MarketplaceCatalog
}  // namespace Aws
