/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/partnercentral-selling/model/OpportunitySearchAddress.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralSelling {
namespace Model {

OpportunitySearchAddress::OpportunitySearchAddress(JsonView jsonValue) { *this = jsonValue; }

OpportunitySearchAddress& OpportunitySearchAddress::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("CountryCode")) {
    m_countryCode = CountryCodeMapper::GetCountryCodeForName(jsonValue.GetString("CountryCode"));
    m_countryCodeHasBeenSet = true;
  }
  return *this;
}

JsonValue OpportunitySearchAddress::Jsonize() const {
  JsonValue payload;

  if (m_countryCodeHasBeenSet) {
    payload.WithString("CountryCode", CountryCodeMapper::GetNameForCountryCode(m_countryCode));
  }

  return payload;
}

}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
