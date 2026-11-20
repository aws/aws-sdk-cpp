/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/taxsettings/model/NorwayAdditionalInfo.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace TaxSettings {
namespace Model {

NorwayAdditionalInfo::NorwayAdditionalInfo(JsonView jsonValue) { *this = jsonValue; }

NorwayAdditionalInfo& NorwayAdditionalInfo::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("taxRegistrationNumberType")) {
    m_taxRegistrationNumberType =
        NorwayTaxRegistrationNumberTypeMapper::GetNorwayTaxRegistrationNumberTypeForName(jsonValue.GetString("taxRegistrationNumberType"));
    m_taxRegistrationNumberTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("peppolId")) {
    m_peppolId = jsonValue.GetString("peppolId");
    m_peppolIdHasBeenSet = true;
  }
  return *this;
}

JsonValue NorwayAdditionalInfo::Jsonize() const {
  JsonValue payload;

  if (m_taxRegistrationNumberTypeHasBeenSet) {
    payload.WithString("taxRegistrationNumberType",
                       NorwayTaxRegistrationNumberTypeMapper::GetNameForNorwayTaxRegistrationNumberType(m_taxRegistrationNumberType));
  }

  if (m_peppolIdHasBeenSet) {
    payload.WithString("peppolId", m_peppolId);
  }

  return payload;
}

}  // namespace Model
}  // namespace TaxSettings
}  // namespace Aws
