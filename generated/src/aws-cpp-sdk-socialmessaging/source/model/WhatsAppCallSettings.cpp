/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/socialmessaging/model/WhatsAppCallSettings.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SocialMessaging {
namespace Model {

WhatsAppCallSettings::WhatsAppCallSettings(JsonView jsonValue) { *this = jsonValue; }

WhatsAppCallSettings& WhatsAppCallSettings::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("callEnabled")) {
    m_callEnabled = jsonValue.GetBool("callEnabled");
    m_callEnabledHasBeenSet = true;
  }
  if (jsonValue.ValueExists("callHours")) {
    m_callHours = jsonValue.GetObject("callHours");
    m_callHoursHasBeenSet = true;
  }
  if (jsonValue.ValueExists("callIconVisibility")) {
    m_callIconVisibility = jsonValue.GetString("callIconVisibility");
    m_callIconVisibilityHasBeenSet = true;
  }
  if (jsonValue.ValueExists("callbackPermissionStatus")) {
    m_callbackPermissionStatus = jsonValue.GetString("callbackPermissionStatus");
    m_callbackPermissionStatusHasBeenSet = true;
  }
  return *this;
}

JsonValue WhatsAppCallSettings::Jsonize() const {
  JsonValue payload;

  if (m_callEnabledHasBeenSet) {
    payload.WithBool("callEnabled", m_callEnabled);
  }

  if (m_callHoursHasBeenSet) {
    payload.WithObject("callHours", m_callHours.Jsonize());
  }

  if (m_callIconVisibilityHasBeenSet) {
    payload.WithString("callIconVisibility", m_callIconVisibility);
  }

  if (m_callbackPermissionStatusHasBeenSet) {
    payload.WithString("callbackPermissionStatus", m_callbackPermissionStatus);
  }

  return payload;
}

}  // namespace Model
}  // namespace SocialMessaging
}  // namespace Aws
