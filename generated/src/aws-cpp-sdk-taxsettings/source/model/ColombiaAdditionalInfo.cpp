/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/taxsettings/model/ColombiaAdditionalInfo.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace TaxSettings {
namespace Model {

ColombiaAdditionalInfo::ColombiaAdditionalInfo(JsonView jsonValue) { *this = jsonValue; }

ColombiaAdditionalInfo& ColombiaAdditionalInfo::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("responsibilityCodes")) {
    Aws::Utils::Array<JsonView> responsibilityCodesJsonList = jsonValue.GetArray("responsibilityCodes");
    for (unsigned responsibilityCodesIndex = 0; responsibilityCodesIndex < responsibilityCodesJsonList.GetLength();
         ++responsibilityCodesIndex) {
      m_responsibilityCodes.push_back(responsibilityCodesJsonList[responsibilityCodesIndex].AsString());
    }
    m_responsibilityCodesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("taxpayerTypeCode")) {
    m_taxpayerTypeCode = jsonValue.GetString("taxpayerTypeCode");
    m_taxpayerTypeCodeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("issueDate")) {
    m_issueDate = jsonValue.GetString("issueDate");
    m_issueDateHasBeenSet = true;
  }
  return *this;
}

JsonValue ColombiaAdditionalInfo::Jsonize() const {
  JsonValue payload;

  if (m_responsibilityCodesHasBeenSet) {
    Aws::Utils::Array<JsonValue> responsibilityCodesJsonList(m_responsibilityCodes.size());
    for (unsigned responsibilityCodesIndex = 0; responsibilityCodesIndex < responsibilityCodesJsonList.GetLength();
         ++responsibilityCodesIndex) {
      responsibilityCodesJsonList[responsibilityCodesIndex].AsString(m_responsibilityCodes[responsibilityCodesIndex]);
    }
    payload.WithArray("responsibilityCodes", std::move(responsibilityCodesJsonList));
  }

  if (m_taxpayerTypeCodeHasBeenSet) {
    payload.WithString("taxpayerTypeCode", m_taxpayerTypeCode);
  }

  if (m_issueDateHasBeenSet) {
    payload.WithString("issueDate", m_issueDate);
  }

  return payload;
}

}  // namespace Model
}  // namespace TaxSettings
}  // namespace Aws
