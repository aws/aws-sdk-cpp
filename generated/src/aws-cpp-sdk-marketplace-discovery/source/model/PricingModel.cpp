/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/marketplace-discovery/model/PricingModel.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MarketplaceDiscovery {
namespace Model {

PricingModel::PricingModel(JsonView jsonValue) { *this = jsonValue; }

PricingModel& PricingModel::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("pricingModelType")) {
    m_pricingModelType = PricingModelTypeMapper::GetPricingModelTypeForName(jsonValue.GetString("pricingModelType"));
    m_pricingModelTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("displayName")) {
    m_displayName = jsonValue.GetString("displayName");
    m_displayNameHasBeenSet = true;
  }
  return *this;
}

JsonValue PricingModel::Jsonize() const {
  JsonValue payload;

  if (m_pricingModelTypeHasBeenSet) {
    payload.WithString("pricingModelType", PricingModelTypeMapper::GetNameForPricingModelType(m_pricingModelType));
  }

  if (m_displayNameHasBeenSet) {
    payload.WithString("displayName", m_displayName);
  }

  return payload;
}

}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
