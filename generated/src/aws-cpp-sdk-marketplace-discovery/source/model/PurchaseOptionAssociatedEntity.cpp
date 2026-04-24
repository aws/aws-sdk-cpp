/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/marketplace-discovery/model/PurchaseOptionAssociatedEntity.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MarketplaceDiscovery {
namespace Model {

PurchaseOptionAssociatedEntity::PurchaseOptionAssociatedEntity(JsonView jsonValue) { *this = jsonValue; }

PurchaseOptionAssociatedEntity& PurchaseOptionAssociatedEntity::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("product")) {
    m_product = jsonValue.GetObject("product");
    m_productHasBeenSet = true;
  }
  if (jsonValue.ValueExists("offer")) {
    m_offer = jsonValue.GetObject("offer");
    m_offerHasBeenSet = true;
  }
  if (jsonValue.ValueExists("offerSet")) {
    m_offerSet = jsonValue.GetObject("offerSet");
    m_offerSetHasBeenSet = true;
  }
  return *this;
}

JsonValue PurchaseOptionAssociatedEntity::Jsonize() const {
  JsonValue payload;

  if (m_productHasBeenSet) {
    payload.WithObject("product", m_product.Jsonize());
  }

  if (m_offerHasBeenSet) {
    payload.WithObject("offer", m_offer.Jsonize());
  }

  if (m_offerSetHasBeenSet) {
    payload.WithObject("offerSet", m_offerSet.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
