/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/marketplace-catalog/model/ExpressPrivateOfferConfigurationSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MarketplaceCatalog {
namespace Model {

ExpressPrivateOfferConfigurationSummary::ExpressPrivateOfferConfigurationSummary(JsonView jsonValue) { *this = jsonValue; }

ExpressPrivateOfferConfigurationSummary& ExpressPrivateOfferConfigurationSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ProductId")) {
    m_productId = jsonValue.GetString("ProductId");
    m_productIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("State")) {
    m_state = ExpressPrivateOfferConfigurationStateStringMapper::GetExpressPrivateOfferConfigurationStateStringForName(
        jsonValue.GetString("State"));
    m_stateHasBeenSet = true;
  }
  return *this;
}

JsonValue ExpressPrivateOfferConfigurationSummary::Jsonize() const {
  JsonValue payload;

  if (m_productIdHasBeenSet) {
    payload.WithString("ProductId", m_productId);
  }

  if (m_stateHasBeenSet) {
    payload.WithString("State",
                       ExpressPrivateOfferConfigurationStateStringMapper::GetNameForExpressPrivateOfferConfigurationStateString(m_state));
  }

  return payload;
}

}  // namespace Model
}  // namespace MarketplaceCatalog
}  // namespace Aws
