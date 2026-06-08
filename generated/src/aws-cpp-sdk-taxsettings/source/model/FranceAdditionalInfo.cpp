/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/taxsettings/model/FranceAdditionalInfo.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace TaxSettings {
namespace Model {

FranceAdditionalInfo::FranceAdditionalInfo(JsonView jsonValue) { *this = jsonValue; }

FranceAdditionalInfo& FranceAdditionalInfo::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("sirenNumber")) {
    m_sirenNumber = jsonValue.GetString("sirenNumber");
    m_sirenNumberHasBeenSet = true;
  }
  return *this;
}

JsonValue FranceAdditionalInfo::Jsonize() const {
  JsonValue payload;

  if (m_sirenNumberHasBeenSet) {
    payload.WithString("sirenNumber", m_sirenNumber);
  }

  return payload;
}

}  // namespace Model
}  // namespace TaxSettings
}  // namespace Aws
