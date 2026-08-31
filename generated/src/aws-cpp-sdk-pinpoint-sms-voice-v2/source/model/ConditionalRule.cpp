/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/pinpoint-sms-voice-v2/model/ConditionalRule.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PinpointSMSVoiceV2 {
namespace Model {

ConditionalRule::ConditionalRule(JsonView jsonValue) { *this = jsonValue; }

ConditionalRule& ConditionalRule::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Conditions")) {
    Aws::Utils::Array<JsonView> conditionsJsonList = jsonValue.GetArray("Conditions");
    for (unsigned conditionsIndex = 0; conditionsIndex < conditionsJsonList.GetLength(); ++conditionsIndex) {
      m_conditions.push_back(conditionsJsonList[conditionsIndex].AsObject());
    }
    m_conditionsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RuleBehavior")) {
    m_ruleBehavior = jsonValue.GetString("RuleBehavior");
    m_ruleBehaviorHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ConditionalValidation")) {
    m_conditionalValidation = jsonValue.GetObject("ConditionalValidation");
    m_conditionalValidationHasBeenSet = true;
  }
  return *this;
}

JsonValue ConditionalRule::Jsonize() const {
  JsonValue payload;

  if (m_conditionsHasBeenSet) {
    Aws::Utils::Array<JsonValue> conditionsJsonList(m_conditions.size());
    for (unsigned conditionsIndex = 0; conditionsIndex < conditionsJsonList.GetLength(); ++conditionsIndex) {
      conditionsJsonList[conditionsIndex].AsObject(m_conditions[conditionsIndex].Jsonize());
    }
    payload.WithArray("Conditions", std::move(conditionsJsonList));
  }

  if (m_ruleBehaviorHasBeenSet) {
    payload.WithString("RuleBehavior", m_ruleBehavior);
  }

  if (m_conditionalValidationHasBeenSet) {
    payload.WithObject("ConditionalValidation", m_conditionalValidation.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace PinpointSMSVoiceV2
}  // namespace Aws
