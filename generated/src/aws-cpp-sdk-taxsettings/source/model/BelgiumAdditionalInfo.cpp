/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/taxsettings/model/BelgiumAdditionalInfo.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace TaxSettings {
namespace Model {

BelgiumAdditionalInfo::BelgiumAdditionalInfo(JsonView jsonValue) { *this = jsonValue; }

BelgiumAdditionalInfo& BelgiumAdditionalInfo::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("peppolId")) {
    m_peppolId = jsonValue.GetString("peppolId");
    m_peppolIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("isMercuriusBoxEnabled")) {
    m_isMercuriusBoxEnabled = jsonValue.GetBool("isMercuriusBoxEnabled");
    m_isMercuriusBoxEnabledHasBeenSet = true;
  }
  return *this;
}

JsonValue BelgiumAdditionalInfo::Jsonize() const {
  JsonValue payload;

  if (m_peppolIdHasBeenSet) {
    payload.WithString("peppolId", m_peppolId);
  }

  if (m_isMercuriusBoxEnabledHasBeenSet) {
    payload.WithBool("isMercuriusBoxEnabled", m_isMercuriusBoxEnabled);
  }

  return payload;
}

}  // namespace Model
}  // namespace TaxSettings
}  // namespace Aws
