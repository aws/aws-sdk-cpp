/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/marketplace-discovery/model/ListingBadge.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MarketplaceDiscovery {
namespace Model {

ListingBadge::ListingBadge(JsonView jsonValue) { *this = jsonValue; }

ListingBadge& ListingBadge::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("displayName")) {
    m_displayName = jsonValue.GetString("displayName");
    m_displayNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("badgeType")) {
    m_badgeType = ListingBadgeTypeMapper::GetListingBadgeTypeForName(jsonValue.GetString("badgeType"));
    m_badgeTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue ListingBadge::Jsonize() const {
  JsonValue payload;

  if (m_displayNameHasBeenSet) {
    payload.WithString("displayName", m_displayName);
  }

  if (m_badgeTypeHasBeenSet) {
    payload.WithString("badgeType", ListingBadgeTypeMapper::GetNameForListingBadgeType(m_badgeType));
  }

  return payload;
}

}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
