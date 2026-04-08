/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/marketplace-discovery/model/PricingUnit.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MarketplaceDiscovery {
namespace Model {

PricingUnit::PricingUnit(JsonView jsonValue) { *this = jsonValue; }

PricingUnit& PricingUnit::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("pricingUnitType")) {
    m_pricingUnitType = PricingUnitTypeMapper::GetPricingUnitTypeForName(jsonValue.GetString("pricingUnitType"));
    m_pricingUnitTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("displayName")) {
    m_displayName = jsonValue.GetString("displayName");
    m_displayNameHasBeenSet = true;
  }
  return *this;
}

JsonValue PricingUnit::Jsonize() const {
  JsonValue payload;

  if (m_pricingUnitTypeHasBeenSet) {
    payload.WithString("pricingUnitType", PricingUnitTypeMapper::GetNameForPricingUnitType(m_pricingUnitType));
  }

  if (m_displayNameHasBeenSet) {
    payload.WithString("displayName", m_displayName);
  }

  return payload;
}

}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
