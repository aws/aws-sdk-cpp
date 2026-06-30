/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/pinpoint-sms-voice-v2/model/RcsOpenUrlAction.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PinpointSMSVoiceV2 {
namespace Model {

RcsOpenUrlAction::RcsOpenUrlAction(JsonView jsonValue) { *this = jsonValue; }

RcsOpenUrlAction& RcsOpenUrlAction::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Text")) {
    m_text = jsonValue.GetString("Text");
    m_textHasBeenSet = true;
  }
  if (jsonValue.ValueExists("PostbackData")) {
    m_postbackData = jsonValue.GetString("PostbackData");
    m_postbackDataHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Url")) {
    m_url = jsonValue.GetString("Url");
    m_urlHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Application")) {
    m_application = jsonValue.GetString("Application");
    m_applicationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("WebviewViewMode")) {
    m_webviewViewMode = jsonValue.GetString("WebviewViewMode");
    m_webviewViewModeHasBeenSet = true;
  }
  return *this;
}

JsonValue RcsOpenUrlAction::Jsonize() const {
  JsonValue payload;

  if (m_textHasBeenSet) {
    payload.WithString("Text", m_text);
  }

  if (m_postbackDataHasBeenSet) {
    payload.WithString("PostbackData", m_postbackData);
  }

  if (m_urlHasBeenSet) {
    payload.WithString("Url", m_url);
  }

  if (m_applicationHasBeenSet) {
    payload.WithString("Application", m_application);
  }

  if (m_webviewViewModeHasBeenSet) {
    payload.WithString("WebviewViewMode", m_webviewViewMode);
  }

  return payload;
}

}  // namespace Model
}  // namespace PinpointSMSVoiceV2
}  // namespace Aws
