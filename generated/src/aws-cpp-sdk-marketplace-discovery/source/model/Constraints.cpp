/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/marketplace-discovery/model/Constraints.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MarketplaceDiscovery {
namespace Model {

Constraints::Constraints(JsonView jsonValue) { *this = jsonValue; }

Constraints& Constraints::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("multipleDimensionSelection")) {
    m_multipleDimensionSelection =
        RateCardConstraintTypeMapper::GetRateCardConstraintTypeForName(jsonValue.GetString("multipleDimensionSelection"));
    m_multipleDimensionSelectionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("quantityConfiguration")) {
    m_quantityConfiguration = RateCardConstraintTypeMapper::GetRateCardConstraintTypeForName(jsonValue.GetString("quantityConfiguration"));
    m_quantityConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue Constraints::Jsonize() const {
  JsonValue payload;

  if (m_multipleDimensionSelectionHasBeenSet) {
    payload.WithString("multipleDimensionSelection",
                       RateCardConstraintTypeMapper::GetNameForRateCardConstraintType(m_multipleDimensionSelection));
  }

  if (m_quantityConfigurationHasBeenSet) {
    payload.WithString("quantityConfiguration", RateCardConstraintTypeMapper::GetNameForRateCardConstraintType(m_quantityConfiguration));
  }

  return payload;
}

}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
