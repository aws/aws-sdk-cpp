/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/marketplace-catalog/model/ExpressPrivateOfferConfigurationFilters.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MarketplaceCatalog {
namespace Model {

ExpressPrivateOfferConfigurationFilters::ExpressPrivateOfferConfigurationFilters(JsonView jsonValue) { *this = jsonValue; }

ExpressPrivateOfferConfigurationFilters& ExpressPrivateOfferConfigurationFilters::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("EntityId")) {
    m_entityId = jsonValue.GetObject("EntityId");
    m_entityIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ProductId")) {
    m_productId = jsonValue.GetObject("ProductId");
    m_productIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("State")) {
    m_state = jsonValue.GetObject("State");
    m_stateHasBeenSet = true;
  }
  return *this;
}

JsonValue ExpressPrivateOfferConfigurationFilters::Jsonize() const {
  JsonValue payload;

  if (m_entityIdHasBeenSet) {
    payload.WithObject("EntityId", m_entityId.Jsonize());
  }

  if (m_productIdHasBeenSet) {
    payload.WithObject("ProductId", m_productId.Jsonize());
  }

  if (m_stateHasBeenSet) {
    payload.WithObject("State", m_state.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace MarketplaceCatalog
}  // namespace Aws
