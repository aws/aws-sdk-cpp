/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/marketplace-discovery/model/PurchaseIndicator.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MarketplaceDiscovery {
namespace Model {

PurchaseIndicator::PurchaseIndicator(JsonView jsonValue) { *this = jsonValue; }

PurchaseIndicator& PurchaseIndicator::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("indicatorType")) {
    m_indicatorType = PurchaseIndicatorTypeMapper::GetPurchaseIndicatorTypeForName(jsonValue.GetString("indicatorType"));
    m_indicatorTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue PurchaseIndicator::Jsonize() const {
  JsonValue payload;

  if (m_indicatorTypeHasBeenSet) {
    payload.WithString("indicatorType", PurchaseIndicatorTypeMapper::GetNameForPurchaseIndicatorType(m_indicatorType));
  }

  return payload;
}

}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
