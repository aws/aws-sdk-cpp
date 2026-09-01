/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/marketplace-discovery/model/PercentageRange.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MarketplaceDiscovery {
namespace Model {

PercentageRange::PercentageRange(JsonView jsonValue) { *this = jsonValue; }

PercentageRange& PercentageRange::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("minimumValue")) {
    m_minimumValue = jsonValue.GetString("minimumValue");
    m_minimumValueHasBeenSet = true;
  }
  if (jsonValue.ValueExists("maximumValue")) {
    m_maximumValue = jsonValue.GetString("maximumValue");
    m_maximumValueHasBeenSet = true;
  }
  if (jsonValue.ValueExists("defaultValue")) {
    m_defaultValue = jsonValue.GetString("defaultValue");
    m_defaultValueHasBeenSet = true;
  }
  return *this;
}

JsonValue PercentageRange::Jsonize() const {
  JsonValue payload;

  if (m_minimumValueHasBeenSet) {
    payload.WithString("minimumValue", m_minimumValue);
  }

  if (m_maximumValueHasBeenSet) {
    payload.WithString("maximumValue", m_maximumValue);
  }

  if (m_defaultValueHasBeenSet) {
    payload.WithString("defaultValue", m_defaultValue);
  }

  return payload;
}

}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
