/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/partnercentral-account/model/PartnerDomain.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralAccount {
namespace Model {

PartnerDomain::PartnerDomain(JsonView jsonValue) { *this = jsonValue; }

PartnerDomain& PartnerDomain::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("DomainName")) {
    m_domainName = jsonValue.GetString("DomainName");
    m_domainNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RegisteredAt")) {
    m_registeredAt = jsonValue.GetString("RegisteredAt");
    m_registeredAtHasBeenSet = true;
  }
  return *this;
}

JsonValue PartnerDomain::Jsonize() const {
  JsonValue payload;

  if (m_domainNameHasBeenSet) {
    payload.WithString("DomainName", m_domainName);
  }

  if (m_registeredAtHasBeenSet) {
    payload.WithString("RegisteredAt", m_registeredAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

}  // namespace Model
}  // namespace PartnerCentralAccount
}  // namespace Aws
