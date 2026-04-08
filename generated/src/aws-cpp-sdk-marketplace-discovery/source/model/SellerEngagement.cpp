/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/marketplace-discovery/model/SellerEngagement.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MarketplaceDiscovery {
namespace Model {

SellerEngagement::SellerEngagement(JsonView jsonValue) { *this = jsonValue; }

SellerEngagement& SellerEngagement::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("engagementType")) {
    m_engagementType = SellerEngagementTypeMapper::GetSellerEngagementTypeForName(jsonValue.GetString("engagementType"));
    m_engagementTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("contentType")) {
    m_contentType = SellerEngagementContentTypeMapper::GetSellerEngagementContentTypeForName(jsonValue.GetString("contentType"));
    m_contentTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("value")) {
    m_value = jsonValue.GetString("value");
    m_valueHasBeenSet = true;
  }
  return *this;
}

JsonValue SellerEngagement::Jsonize() const {
  JsonValue payload;

  if (m_engagementTypeHasBeenSet) {
    payload.WithString("engagementType", SellerEngagementTypeMapper::GetNameForSellerEngagementType(m_engagementType));
  }

  if (m_contentTypeHasBeenSet) {
    payload.WithString("contentType", SellerEngagementContentTypeMapper::GetNameForSellerEngagementContentType(m_contentType));
  }

  if (m_valueHasBeenSet) {
    payload.WithString("value", m_value);
  }

  return payload;
}

}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
