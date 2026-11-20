/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/partnercentral-channel/model/Address.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralChannel {
namespace Model {

Address::Address(JsonView jsonValue) { *this = jsonValue; }

Address& Address::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("city")) {
    m_city = jsonValue.GetString("city");
    m_cityHasBeenSet = true;
  }
  if (jsonValue.ValueExists("stateOrRegion")) {
    m_stateOrRegion = jsonValue.GetString("stateOrRegion");
    m_stateOrRegionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("postalCode")) {
    m_postalCode = jsonValue.GetString("postalCode");
    m_postalCodeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("countryCode")) {
    m_countryCode = jsonValue.GetString("countryCode");
    m_countryCodeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("addressLine")) {
    m_addressLine = jsonValue.GetString("addressLine");
    m_addressLineHasBeenSet = true;
  }
  if (jsonValue.ValueExists("addressLine2")) {
    m_addressLine2 = jsonValue.GetString("addressLine2");
    m_addressLine2HasBeenSet = true;
  }
  return *this;
}

JsonValue Address::Jsonize() const {
  JsonValue payload;

  if (m_cityHasBeenSet) {
    payload.WithString("city", m_city);
  }

  if (m_stateOrRegionHasBeenSet) {
    payload.WithString("stateOrRegion", m_stateOrRegion);
  }

  if (m_postalCodeHasBeenSet) {
    payload.WithString("postalCode", m_postalCode);
  }

  if (m_countryCodeHasBeenSet) {
    payload.WithString("countryCode", m_countryCode);
  }

  if (m_addressLineHasBeenSet) {
    payload.WithString("addressLine", m_addressLine);
  }

  if (m_addressLine2HasBeenSet) {
    payload.WithString("addressLine2", m_addressLine2);
  }

  return payload;
}

}  // namespace Model
}  // namespace PartnerCentralChannel
}  // namespace Aws
