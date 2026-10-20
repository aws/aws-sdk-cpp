/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/marketplace-catalog/model/ExpressPrivateOfferConfigurationStateFilter.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MarketplaceCatalog {
namespace Model {

ExpressPrivateOfferConfigurationStateFilter::ExpressPrivateOfferConfigurationStateFilter(JsonView jsonValue) { *this = jsonValue; }

ExpressPrivateOfferConfigurationStateFilter& ExpressPrivateOfferConfigurationStateFilter::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ValueList")) {
    Aws::Utils::Array<JsonView> valueListJsonList = jsonValue.GetArray("ValueList");
    for (unsigned valueListIndex = 0; valueListIndex < valueListJsonList.GetLength(); ++valueListIndex) {
      m_valueList.push_back(ExpressPrivateOfferConfigurationStateStringMapper::GetExpressPrivateOfferConfigurationStateStringForName(
          valueListJsonList[valueListIndex].AsString()));
    }
    m_valueListHasBeenSet = true;
  }
  return *this;
}

JsonValue ExpressPrivateOfferConfigurationStateFilter::Jsonize() const {
  JsonValue payload;

  if (m_valueListHasBeenSet) {
    Aws::Utils::Array<JsonValue> valueListJsonList(m_valueList.size());
    for (unsigned valueListIndex = 0; valueListIndex < valueListJsonList.GetLength(); ++valueListIndex) {
      valueListJsonList[valueListIndex].AsString(
          ExpressPrivateOfferConfigurationStateStringMapper::GetNameForExpressPrivateOfferConfigurationStateString(
              m_valueList[valueListIndex]));
    }
    payload.WithArray("ValueList", std::move(valueListJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace MarketplaceCatalog
}  // namespace Aws
