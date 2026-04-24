/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/marketplace-discovery/model/PurchaseOptionFilter.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MarketplaceDiscovery {
namespace Model {

PurchaseOptionFilter::PurchaseOptionFilter(JsonView jsonValue) { *this = jsonValue; }

PurchaseOptionFilter& PurchaseOptionFilter::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("filterType")) {
    m_filterType = PurchaseOptionFilterTypeMapper::GetPurchaseOptionFilterTypeForName(jsonValue.GetString("filterType"));
    m_filterTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("filterValues")) {
    Aws::Utils::Array<JsonView> filterValuesJsonList = jsonValue.GetArray("filterValues");
    for (unsigned filterValuesIndex = 0; filterValuesIndex < filterValuesJsonList.GetLength(); ++filterValuesIndex) {
      m_filterValues.push_back(filterValuesJsonList[filterValuesIndex].AsString());
    }
    m_filterValuesHasBeenSet = true;
  }
  return *this;
}

JsonValue PurchaseOptionFilter::Jsonize() const {
  JsonValue payload;

  if (m_filterTypeHasBeenSet) {
    payload.WithString("filterType", PurchaseOptionFilterTypeMapper::GetNameForPurchaseOptionFilterType(m_filterType));
  }

  if (m_filterValuesHasBeenSet) {
    Aws::Utils::Array<JsonValue> filterValuesJsonList(m_filterValues.size());
    for (unsigned filterValuesIndex = 0; filterValuesIndex < filterValuesJsonList.GetLength(); ++filterValuesIndex) {
      filterValuesJsonList[filterValuesIndex].AsString(m_filterValues[filterValuesIndex]);
    }
    payload.WithArray("filterValues", std::move(filterValuesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
