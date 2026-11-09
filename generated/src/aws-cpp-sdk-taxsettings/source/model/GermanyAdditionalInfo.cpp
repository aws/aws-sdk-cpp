/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/taxsettings/model/GermanyAdditionalInfo.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace TaxSettings {
namespace Model {

GermanyAdditionalInfo::GermanyAdditionalInfo(JsonView jsonValue) { *this = jsonValue; }

GermanyAdditionalInfo& GermanyAdditionalInfo::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("economicIdentificationNumber")) {
    m_economicIdentificationNumber = jsonValue.GetString("economicIdentificationNumber");
    m_economicIdentificationNumberHasBeenSet = true;
  }
  if (jsonValue.ValueExists("steuernummer")) {
    m_steuernummer = jsonValue.GetString("steuernummer");
    m_steuernummerHasBeenSet = true;
  }
  return *this;
}

JsonValue GermanyAdditionalInfo::Jsonize() const {
  JsonValue payload;

  if (m_economicIdentificationNumberHasBeenSet) {
    payload.WithString("economicIdentificationNumber", m_economicIdentificationNumber);
  }

  if (m_steuernummerHasBeenSet) {
    payload.WithString("steuernummer", m_steuernummer);
  }

  return payload;
}

}  // namespace Model
}  // namespace TaxSettings
}  // namespace Aws
