/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/marketplace-discovery/model/OfferSetAssociatedEntity.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MarketplaceDiscovery {
namespace Model {

OfferSetAssociatedEntity::OfferSetAssociatedEntity(JsonView jsonValue) { *this = jsonValue; }

OfferSetAssociatedEntity& OfferSetAssociatedEntity::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("product")) {
    m_product = jsonValue.GetObject("product");
    m_productHasBeenSet = true;
  }
  if (jsonValue.ValueExists("offer")) {
    m_offer = jsonValue.GetObject("offer");
    m_offerHasBeenSet = true;
  }
  return *this;
}

JsonValue OfferSetAssociatedEntity::Jsonize() const {
  JsonValue payload;

  if (m_productHasBeenSet) {
    payload.WithObject("product", m_product.Jsonize());
  }

  if (m_offerHasBeenSet) {
    payload.WithObject("offer", m_offer.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
