/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/marketplace-discovery/model/ProductInformation.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MarketplaceDiscovery {
namespace Model {

ProductInformation::ProductInformation(JsonView jsonValue) { *this = jsonValue; }

ProductInformation& ProductInformation::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("productId")) {
    m_productId = jsonValue.GetString("productId");
    m_productIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("productName")) {
    m_productName = jsonValue.GetString("productName");
    m_productNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("manufacturer")) {
    m_manufacturer = jsonValue.GetObject("manufacturer");
    m_manufacturerHasBeenSet = true;
  }
  return *this;
}

JsonValue ProductInformation::Jsonize() const {
  JsonValue payload;

  if (m_productIdHasBeenSet) {
    payload.WithString("productId", m_productId);
  }

  if (m_productNameHasBeenSet) {
    payload.WithString("productName", m_productName);
  }

  if (m_manufacturerHasBeenSet) {
    payload.WithObject("manufacturer", m_manufacturer.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
