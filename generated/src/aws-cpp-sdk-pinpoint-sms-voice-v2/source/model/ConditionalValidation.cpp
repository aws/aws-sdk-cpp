/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/pinpoint-sms-voice-v2/model/ConditionalValidation.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PinpointSMSVoiceV2 {
namespace Model {

ConditionalValidation::ConditionalValidation(JsonView jsonValue) { *this = jsonValue; }

ConditionalValidation& ConditionalValidation::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("MinLength")) {
    m_minLength = jsonValue.GetInteger("MinLength");
    m_minLengthHasBeenSet = true;
  }
  if (jsonValue.ValueExists("MaxLength")) {
    m_maxLength = jsonValue.GetInteger("MaxLength");
    m_maxLengthHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Pattern")) {
    m_pattern = jsonValue.GetString("Pattern");
    m_patternHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AllowedValues")) {
    Aws::Utils::Array<JsonView> allowedValuesJsonList = jsonValue.GetArray("AllowedValues");
    for (unsigned allowedValuesIndex = 0; allowedValuesIndex < allowedValuesJsonList.GetLength(); ++allowedValuesIndex) {
      m_allowedValues.push_back(allowedValuesJsonList[allowedValuesIndex].AsString());
    }
    m_allowedValuesHasBeenSet = true;
  }
  return *this;
}

JsonValue ConditionalValidation::Jsonize() const {
  JsonValue payload;

  if (m_minLengthHasBeenSet) {
    payload.WithInteger("MinLength", m_minLength);
  }

  if (m_maxLengthHasBeenSet) {
    payload.WithInteger("MaxLength", m_maxLength);
  }

  if (m_patternHasBeenSet) {
    payload.WithString("Pattern", m_pattern);
  }

  if (m_allowedValuesHasBeenSet) {
    Aws::Utils::Array<JsonValue> allowedValuesJsonList(m_allowedValues.size());
    for (unsigned allowedValuesIndex = 0; allowedValuesIndex < allowedValuesJsonList.GetLength(); ++allowedValuesIndex) {
      allowedValuesJsonList[allowedValuesIndex].AsString(m_allowedValues[allowedValuesIndex]);
    }
    payload.WithArray("AllowedValues", std::move(allowedValuesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace PinpointSMSVoiceV2
}  // namespace Aws
