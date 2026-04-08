/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/marketplace-discovery/model/OfferAssociatedEntity.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MarketplaceDiscovery {
namespace Model {

OfferAssociatedEntity::OfferAssociatedEntity(JsonView jsonValue) { *this = jsonValue; }

OfferAssociatedEntity& OfferAssociatedEntity::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("product")) {
    m_product = jsonValue.GetObject("product");
    m_productHasBeenSet = true;
  }
  if (jsonValue.ValueExists("offerSet")) {
    m_offerSet = jsonValue.GetObject("offerSet");
    m_offerSetHasBeenSet = true;
  }
  return *this;
}

JsonValue OfferAssociatedEntity::Jsonize() const {
  JsonValue payload;

  if (m_productHasBeenSet) {
    payload.WithObject("product", m_product.Jsonize());
  }

  if (m_offerSetHasBeenSet) {
    payload.WithObject("offerSet", m_offerSet.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
