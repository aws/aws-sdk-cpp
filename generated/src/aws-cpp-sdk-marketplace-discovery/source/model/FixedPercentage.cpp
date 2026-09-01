/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/marketplace-discovery/model/FixedPercentage.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MarketplaceDiscovery {
namespace Model {

FixedPercentage::FixedPercentage(JsonView jsonValue) { *this = jsonValue; }

FixedPercentage& FixedPercentage::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("percentageValue")) {
    m_percentageValue = jsonValue.GetString("percentageValue");
    m_percentageValueHasBeenSet = true;
  }
  return *this;
}

JsonValue FixedPercentage::Jsonize() const {
  JsonValue payload;

  if (m_percentageValueHasBeenSet) {
    payload.WithString("percentageValue", m_percentageValue);
  }

  return payload;
}

}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
