/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/marketplace-catalog/model/ErrorScope.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MarketplaceCatalog {
namespace Model {

ErrorScope::ErrorScope(JsonView jsonValue) { *this = jsonValue; }

ErrorScope& ErrorScope::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Name")) {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Value")) {
    m_value = jsonValue.GetString("Value");
    m_valueHasBeenSet = true;
  }
  return *this;
}

JsonValue ErrorScope::Jsonize() const {
  JsonValue payload;

  if (m_nameHasBeenSet) {
    payload.WithString("Name", m_name);
  }

  if (m_valueHasBeenSet) {
    payload.WithString("Value", m_value);
  }

  return payload;
}

}  // namespace Model
}  // namespace MarketplaceCatalog
}  // namespace Aws
