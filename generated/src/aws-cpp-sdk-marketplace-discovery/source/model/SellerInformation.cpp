/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/marketplace-discovery/model/SellerInformation.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MarketplaceDiscovery {
namespace Model {

SellerInformation::SellerInformation(JsonView jsonValue) { *this = jsonValue; }

SellerInformation& SellerInformation::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("sellerProfileId")) {
    m_sellerProfileId = jsonValue.GetString("sellerProfileId");
    m_sellerProfileIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("displayName")) {
    m_displayName = jsonValue.GetString("displayName");
    m_displayNameHasBeenSet = true;
  }
  return *this;
}

JsonValue SellerInformation::Jsonize() const {
  JsonValue payload;

  if (m_sellerProfileIdHasBeenSet) {
    payload.WithString("sellerProfileId", m_sellerProfileId);
  }

  if (m_displayNameHasBeenSet) {
    payload.WithString("displayName", m_displayName);
  }

  return payload;
}

}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
