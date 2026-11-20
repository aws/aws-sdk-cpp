/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/marketplace-discovery/model/TrustCenterCertificationSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MarketplaceDiscovery {
namespace Model {

TrustCenterCertificationSummary::TrustCenterCertificationSummary(JsonView jsonValue) { *this = jsonValue; }

TrustCenterCertificationSummary& TrustCenterCertificationSummary::operator=(JsonView jsonValue) {
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

JsonValue TrustCenterCertificationSummary::Jsonize() const {
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
