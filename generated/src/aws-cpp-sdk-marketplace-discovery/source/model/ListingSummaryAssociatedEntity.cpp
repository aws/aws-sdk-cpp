/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/marketplace-discovery/model/ListingSummaryAssociatedEntity.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MarketplaceDiscovery {
namespace Model {

ListingSummaryAssociatedEntity::ListingSummaryAssociatedEntity(JsonView jsonValue) { *this = jsonValue; }

ListingSummaryAssociatedEntity& ListingSummaryAssociatedEntity::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("product")) {
    m_product = jsonValue.GetObject("product");
    m_productHasBeenSet = true;
  }
  return *this;
}

JsonValue ListingSummaryAssociatedEntity::Jsonize() const {
  JsonValue payload;

  if (m_productHasBeenSet) {
    payload.WithObject("product", m_product.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
