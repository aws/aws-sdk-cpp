/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/marketplace-discovery/model/TrustCenterSourceSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MarketplaceDiscovery {
namespace Model {

TrustCenterSourceSummary::TrustCenterSourceSummary(JsonView jsonValue) { *this = jsonValue; }

TrustCenterSourceSummary& TrustCenterSourceSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("contentType")) {
    m_contentType = ResourceContentTypeMapper::GetResourceContentTypeForName(jsonValue.GetString("contentType"));
    m_contentTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("value")) {
    m_value = jsonValue.GetString("value");
    m_valueHasBeenSet = true;
  }
  if (jsonValue.ValueExists("displayName")) {
    m_displayName = jsonValue.GetString("displayName");
    m_displayNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("provider")) {
    m_provider = TrustCenterProviderMapper::GetTrustCenterProviderForName(jsonValue.GetString("provider"));
    m_providerHasBeenSet = true;
  }
  return *this;
}

JsonValue TrustCenterSourceSummary::Jsonize() const {
  JsonValue payload;

  if (m_contentTypeHasBeenSet) {
    payload.WithString("contentType", ResourceContentTypeMapper::GetNameForResourceContentType(m_contentType));
  }

  if (m_valueHasBeenSet) {
    payload.WithString("value", m_value);
  }

  if (m_displayNameHasBeenSet) {
    payload.WithString("displayName", m_displayName);
  }

  if (m_providerHasBeenSet) {
    payload.WithString("provider", TrustCenterProviderMapper::GetNameForTrustCenterProvider(m_provider));
  }

  return payload;
}

}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
