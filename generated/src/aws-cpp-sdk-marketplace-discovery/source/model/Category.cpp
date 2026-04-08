/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/marketplace-discovery/model/Category.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MarketplaceDiscovery {
namespace Model {

Category::Category(JsonView jsonValue) { *this = jsonValue; }

Category& Category::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("categoryId")) {
    m_categoryId = jsonValue.GetString("categoryId");
    m_categoryIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("displayName")) {
    m_displayName = jsonValue.GetString("displayName");
    m_displayNameHasBeenSet = true;
  }
  return *this;
}

JsonValue Category::Jsonize() const {
  JsonValue payload;

  if (m_categoryIdHasBeenSet) {
    payload.WithString("categoryId", m_categoryId);
  }

  if (m_displayNameHasBeenSet) {
    payload.WithString("displayName", m_displayName);
  }

  return payload;
}

}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
