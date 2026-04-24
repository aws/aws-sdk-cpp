/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/partnercentral-account/model/BusinessVerificationDetails.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralAccount {
namespace Model {

BusinessVerificationDetails::BusinessVerificationDetails(JsonView jsonValue) { *this = jsonValue; }

BusinessVerificationDetails& BusinessVerificationDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("LegalName")) {
    m_legalName = jsonValue.GetString("LegalName");
    m_legalNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RegistrationId")) {
    m_registrationId = jsonValue.GetString("RegistrationId");
    m_registrationIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CountryCode")) {
    m_countryCode = jsonValue.GetString("CountryCode");
    m_countryCodeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("JurisdictionOfIncorporation")) {
    m_jurisdictionOfIncorporation = jsonValue.GetString("JurisdictionOfIncorporation");
    m_jurisdictionOfIncorporationHasBeenSet = true;
  }
  return *this;
}

JsonValue BusinessVerificationDetails::Jsonize() const {
  JsonValue payload;

  if (m_legalNameHasBeenSet) {
    payload.WithString("LegalName", m_legalName);
  }

  if (m_registrationIdHasBeenSet) {
    payload.WithString("RegistrationId", m_registrationId);
  }

  if (m_countryCodeHasBeenSet) {
    payload.WithString("CountryCode", m_countryCode);
  }

  if (m_jurisdictionOfIncorporationHasBeenSet) {
    payload.WithString("JurisdictionOfIncorporation", m_jurisdictionOfIncorporation);
  }

  return payload;
}

}  // namespace Model
}  // namespace PartnerCentralAccount
}  // namespace Aws
