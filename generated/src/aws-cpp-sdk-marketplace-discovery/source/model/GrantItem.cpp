/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/marketplace-discovery/model/GrantItem.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MarketplaceDiscovery {
namespace Model {

GrantItem::GrantItem(JsonView jsonValue) { *this = jsonValue; }

GrantItem& GrantItem::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("dimensionKey")) {
    m_dimensionKey = jsonValue.GetString("dimensionKey");
    m_dimensionKeyHasBeenSet = true;
  }
  if (jsonValue.ValueExists("displayName")) {
    m_displayName = jsonValue.GetString("displayName");
    m_displayNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("description")) {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("dimensionLabels")) {
    Aws::Utils::Array<JsonView> dimensionLabelsJsonList = jsonValue.GetArray("dimensionLabels");
    for (unsigned dimensionLabelsIndex = 0; dimensionLabelsIndex < dimensionLabelsJsonList.GetLength(); ++dimensionLabelsIndex) {
      m_dimensionLabels.push_back(dimensionLabelsJsonList[dimensionLabelsIndex].AsObject());
    }
    m_dimensionLabelsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("unit")) {
    m_unit = jsonValue.GetString("unit");
    m_unitHasBeenSet = true;
  }
  if (jsonValue.ValueExists("maxQuantity")) {
    m_maxQuantity = jsonValue.GetInteger("maxQuantity");
    m_maxQuantityHasBeenSet = true;
  }
  return *this;
}

JsonValue GrantItem::Jsonize() const {
  JsonValue payload;

  if (m_dimensionKeyHasBeenSet) {
    payload.WithString("dimensionKey", m_dimensionKey);
  }

  if (m_displayNameHasBeenSet) {
    payload.WithString("displayName", m_displayName);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("description", m_description);
  }

  if (m_dimensionLabelsHasBeenSet) {
    Aws::Utils::Array<JsonValue> dimensionLabelsJsonList(m_dimensionLabels.size());
    for (unsigned dimensionLabelsIndex = 0; dimensionLabelsIndex < dimensionLabelsJsonList.GetLength(); ++dimensionLabelsIndex) {
      dimensionLabelsJsonList[dimensionLabelsIndex].AsObject(m_dimensionLabels[dimensionLabelsIndex].Jsonize());
    }
    payload.WithArray("dimensionLabels", std::move(dimensionLabelsJsonList));
  }

  if (m_unitHasBeenSet) {
    payload.WithString("unit", m_unit);
  }

  if (m_maxQuantityHasBeenSet) {
    payload.WithInteger("maxQuantity", m_maxQuantity);
  }

  return payload;
}

}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
