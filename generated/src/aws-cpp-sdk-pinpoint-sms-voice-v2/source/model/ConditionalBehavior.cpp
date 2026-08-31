/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/pinpoint-sms-voice-v2/model/ConditionalBehavior.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PinpointSMSVoiceV2 {
namespace Model {

ConditionalBehavior::ConditionalBehavior(JsonView jsonValue) { *this = jsonValue; }

ConditionalBehavior& ConditionalBehavior::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Rules")) {
    Aws::Utils::Array<JsonView> rulesJsonList = jsonValue.GetArray("Rules");
    for (unsigned rulesIndex = 0; rulesIndex < rulesJsonList.GetLength(); ++rulesIndex) {
      m_rules.push_back(rulesJsonList[rulesIndex].AsObject());
    }
    m_rulesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("DefaultBehavior")) {
    m_defaultBehavior = jsonValue.GetString("DefaultBehavior");
    m_defaultBehaviorHasBeenSet = true;
  }
  return *this;
}

JsonValue ConditionalBehavior::Jsonize() const {
  JsonValue payload;

  if (m_rulesHasBeenSet) {
    Aws::Utils::Array<JsonValue> rulesJsonList(m_rules.size());
    for (unsigned rulesIndex = 0; rulesIndex < rulesJsonList.GetLength(); ++rulesIndex) {
      rulesJsonList[rulesIndex].AsObject(m_rules[rulesIndex].Jsonize());
    }
    payload.WithArray("Rules", std::move(rulesJsonList));
  }

  if (m_defaultBehaviorHasBeenSet) {
    payload.WithString("DefaultBehavior", m_defaultBehavior);
  }

  return payload;
}

}  // namespace Model
}  // namespace PinpointSMSVoiceV2
}  // namespace Aws
