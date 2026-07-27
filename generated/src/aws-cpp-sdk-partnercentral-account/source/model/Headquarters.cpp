/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/partnercentral-account/model/Headquarters.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralAccount {
namespace Model {

Headquarters::Headquarters(JsonView jsonValue) { *this = jsonValue; }

Headquarters& Headquarters::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("CountryCode")) {
    m_countryCode = jsonValue.GetString("CountryCode");
    m_countryCodeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SubdivisionCode")) {
    m_subdivisionCode = jsonValue.GetString("SubdivisionCode");
    m_subdivisionCodeHasBeenSet = true;
  }
  return *this;
}

JsonValue Headquarters::Jsonize() const {
  JsonValue payload;

  if (m_countryCodeHasBeenSet) {
    payload.WithString("CountryCode", m_countryCode);
  }

  if (m_subdivisionCodeHasBeenSet) {
    payload.WithString("SubdivisionCode", m_subdivisionCode);
  }

  return payload;
}

}  // namespace Model
}  // namespace PartnerCentralAccount
}  // namespace Aws
