/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/wafv2/model/MonetizeAction.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace WAFV2 {
namespace Model {

MonetizeAction::MonetizeAction(JsonView jsonValue) { *this = jsonValue; }

MonetizeAction& MonetizeAction::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("PriceMultiplier")) {
    m_priceMultiplier = jsonValue.GetString("PriceMultiplier");
    m_priceMultiplierHasBeenSet = true;
  }
  return *this;
}

JsonValue MonetizeAction::Jsonize() const {
  JsonValue payload;

  if (m_priceMultiplierHasBeenSet) {
    payload.WithString("PriceMultiplier", m_priceMultiplier);
  }

  return payload;
}

}  // namespace Model
}  // namespace WAFV2
}  // namespace Aws
