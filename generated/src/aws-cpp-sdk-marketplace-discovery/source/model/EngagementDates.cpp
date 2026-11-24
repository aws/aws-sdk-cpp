/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/marketplace-discovery/model/EngagementDates.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MarketplaceDiscovery {
namespace Model {

EngagementDates::EngagementDates(JsonView jsonValue) { *this = jsonValue; }

EngagementDates& EngagementDates::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("startDate")) {
    m_startDate = jsonValue.GetDouble("startDate");
    m_startDateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("completionDate")) {
    m_completionDate = jsonValue.GetDouble("completionDate");
    m_completionDateHasBeenSet = true;
  }
  return *this;
}

JsonValue EngagementDates::Jsonize() const {
  JsonValue payload;

  if (m_startDateHasBeenSet) {
    payload.WithDouble("startDate", m_startDate.SecondsWithMSPrecision());
  }

  if (m_completionDateHasBeenSet) {
    payload.WithDouble("completionDate", m_completionDate.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
