/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/route53resolver/model/PartnerThreatProtectionConfig.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Route53Resolver {
namespace Model {

PartnerThreatProtectionConfig::PartnerThreatProtectionConfig(JsonView jsonValue) { *this = jsonValue; }

PartnerThreatProtectionConfig& PartnerThreatProtectionConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Partner")) {
    m_partner = jsonValue.GetString("Partner");
    m_partnerHasBeenSet = true;
  }
  return *this;
}

JsonValue PartnerThreatProtectionConfig::Jsonize() const {
  JsonValue payload;

  if (m_partnerHasBeenSet) {
    payload.WithString("Partner", m_partner);
  }

  return payload;
}

}  // namespace Model
}  // namespace Route53Resolver
}  // namespace Aws
