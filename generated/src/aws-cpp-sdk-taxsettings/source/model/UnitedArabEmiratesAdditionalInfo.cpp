/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/taxsettings/model/UnitedArabEmiratesAdditionalInfo.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace TaxSettings {
namespace Model {

UnitedArabEmiratesAdditionalInfo::UnitedArabEmiratesAdditionalInfo(JsonView jsonValue) { *this = jsonValue; }

UnitedArabEmiratesAdditionalInfo& UnitedArabEmiratesAdditionalInfo::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("taxRegistrationNumberType")) {
    m_taxRegistrationNumberType =
        UaeTaxRegistrationNumberTypeMapper::GetUaeTaxRegistrationNumberTypeForName(jsonValue.GetString("taxRegistrationNumberType"));
    m_taxRegistrationNumberTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("peppolId")) {
    m_peppolId = jsonValue.GetString("peppolId");
    m_peppolIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("tradeLicenseNumber")) {
    m_tradeLicenseNumber = jsonValue.GetString("tradeLicenseNumber");
    m_tradeLicenseNumberHasBeenSet = true;
  }
  if (jsonValue.ValueExists("emiratesId")) {
    m_emiratesId = jsonValue.GetString("emiratesId");
    m_emiratesIdHasBeenSet = true;
  }
  return *this;
}

JsonValue UnitedArabEmiratesAdditionalInfo::Jsonize() const {
  JsonValue payload;

  if (m_taxRegistrationNumberTypeHasBeenSet) {
    payload.WithString("taxRegistrationNumberType",
                       UaeTaxRegistrationNumberTypeMapper::GetNameForUaeTaxRegistrationNumberType(m_taxRegistrationNumberType));
  }

  if (m_peppolIdHasBeenSet) {
    payload.WithString("peppolId", m_peppolId);
  }

  if (m_tradeLicenseNumberHasBeenSet) {
    payload.WithString("tradeLicenseNumber", m_tradeLicenseNumber);
  }

  if (m_emiratesIdHasBeenSet) {
    payload.WithString("emiratesId", m_emiratesId);
  }

  return payload;
}

}  // namespace Model
}  // namespace TaxSettings
}  // namespace Aws
