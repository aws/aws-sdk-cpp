/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/pinpoint-sms-voice-v2/model/FieldCondition.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PinpointSMSVoiceV2 {
namespace Model {

FieldCondition::FieldCondition(JsonView jsonValue) { *this = jsonValue; }

FieldCondition& FieldCondition::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("DependsOnFieldPath")) {
    m_dependsOnFieldPath = jsonValue.GetString("DependsOnFieldPath");
    m_dependsOnFieldPathHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Operator")) {
    m_operator = jsonValue.GetString("Operator");
    m_operatorHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Values")) {
    Aws::Utils::Array<JsonView> valuesJsonList = jsonValue.GetArray("Values");
    for (unsigned valuesIndex = 0; valuesIndex < valuesJsonList.GetLength(); ++valuesIndex) {
      m_values.push_back(valuesJsonList[valuesIndex].AsString());
    }
    m_valuesHasBeenSet = true;
  }
  return *this;
}

JsonValue FieldCondition::Jsonize() const {
  JsonValue payload;

  if (m_dependsOnFieldPathHasBeenSet) {
    payload.WithString("DependsOnFieldPath", m_dependsOnFieldPath);
  }

  if (m_operatorHasBeenSet) {
    payload.WithString("Operator", m_operator);
  }

  if (m_valuesHasBeenSet) {
    Aws::Utils::Array<JsonValue> valuesJsonList(m_values.size());
    for (unsigned valuesIndex = 0; valuesIndex < valuesJsonList.GetLength(); ++valuesIndex) {
      valuesJsonList[valuesIndex].AsString(m_values[valuesIndex]);
    }
    payload.WithArray("Values", std::move(valuesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace PinpointSMSVoiceV2
}  // namespace Aws
