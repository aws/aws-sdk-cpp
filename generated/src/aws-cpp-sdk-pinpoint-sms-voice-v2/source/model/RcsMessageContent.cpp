/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/pinpoint-sms-voice-v2/model/RcsMessageContent.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PinpointSMSVoiceV2 {
namespace Model {

RcsMessageContent::RcsMessageContent(JsonView jsonValue) { *this = jsonValue; }

RcsMessageContent& RcsMessageContent::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Content")) {
    m_content = jsonValue.GetObject("Content");
    m_contentHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Suggestions")) {
    Aws::Utils::Array<JsonView> suggestionsJsonList = jsonValue.GetArray("Suggestions");
    for (unsigned suggestionsIndex = 0; suggestionsIndex < suggestionsJsonList.GetLength(); ++suggestionsIndex) {
      m_suggestions.push_back(suggestionsJsonList[suggestionsIndex].AsObject());
    }
    m_suggestionsHasBeenSet = true;
  }
  return *this;
}

JsonValue RcsMessageContent::Jsonize() const {
  JsonValue payload;

  if (m_contentHasBeenSet) {
    payload.WithObject("Content", m_content.Jsonize());
  }

  if (m_suggestionsHasBeenSet) {
    Aws::Utils::Array<JsonValue> suggestionsJsonList(m_suggestions.size());
    for (unsigned suggestionsIndex = 0; suggestionsIndex < suggestionsJsonList.GetLength(); ++suggestionsIndex) {
      suggestionsJsonList[suggestionsIndex].AsObject(m_suggestions[suggestionsIndex].Jsonize());
    }
    payload.WithArray("Suggestions", std::move(suggestionsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace PinpointSMSVoiceV2
}  // namespace Aws
