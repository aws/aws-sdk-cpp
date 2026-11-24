/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/marketplace-discovery/model/TrustCenterCertificationAttribute.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MarketplaceDiscovery {
namespace Model {

TrustCenterCertificationAttribute::TrustCenterCertificationAttribute(JsonView jsonValue) { *this = jsonValue; }

TrustCenterCertificationAttribute& TrustCenterCertificationAttribute::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("certificationType")) {
    m_certificationType = jsonValue.GetString("certificationType");
    m_certificationTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("displayName")) {
    m_displayName = jsonValue.GetString("displayName");
    m_displayNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("logoUrl")) {
    m_logoUrl = jsonValue.GetString("logoUrl");
    m_logoUrlHasBeenSet = true;
  }
  return *this;
}

JsonValue TrustCenterCertificationAttribute::Jsonize() const {
  JsonValue payload;

  if (m_certificationTypeHasBeenSet) {
    payload.WithString("certificationType", m_certificationType);
  }

  if (m_displayNameHasBeenSet) {
    payload.WithString("displayName", m_displayName);
  }

  if (m_logoUrlHasBeenSet) {
    payload.WithString("logoUrl", m_logoUrl);
  }

  return payload;
}

}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
