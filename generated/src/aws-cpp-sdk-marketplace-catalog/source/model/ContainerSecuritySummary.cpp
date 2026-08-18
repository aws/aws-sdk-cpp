/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/marketplace-catalog/model/ContainerSecuritySummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MarketplaceCatalog {
namespace Model {

ContainerSecuritySummary::ContainerSecuritySummary(JsonView jsonValue) { *this = jsonValue; }

ContainerSecuritySummary& ContainerSecuritySummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("DeliveryOptionId")) {
    m_deliveryOptionId = jsonValue.GetString("DeliveryOptionId");
    m_deliveryOptionIdHasBeenSet = true;
  }
  return *this;
}

JsonValue ContainerSecuritySummary::Jsonize() const {
  JsonValue payload;

  if (m_deliveryOptionIdHasBeenSet) {
    payload.WithString("DeliveryOptionId", m_deliveryOptionId);
  }

  return payload;
}

}  // namespace Model
}  // namespace MarketplaceCatalog
}  // namespace Aws
