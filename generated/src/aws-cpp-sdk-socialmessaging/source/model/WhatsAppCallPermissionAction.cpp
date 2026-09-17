/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/socialmessaging/model/WhatsAppCallPermissionAction.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SocialMessaging {
namespace Model {

WhatsAppCallPermissionAction::WhatsAppCallPermissionAction(JsonView jsonValue) { *this = jsonValue; }

WhatsAppCallPermissionAction& WhatsAppCallPermissionAction::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("actionName")) {
    m_actionName = jsonValue.GetString("actionName");
    m_actionNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("canPerformAction")) {
    m_canPerformAction = jsonValue.GetBool("canPerformAction");
    m_canPerformActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("limits")) {
    Aws::Utils::Array<JsonView> limitsJsonList = jsonValue.GetArray("limits");
    for (unsigned limitsIndex = 0; limitsIndex < limitsJsonList.GetLength(); ++limitsIndex) {
      m_limits.push_back(limitsJsonList[limitsIndex].AsObject());
    }
    m_limitsHasBeenSet = true;
  }
  return *this;
}

JsonValue WhatsAppCallPermissionAction::Jsonize() const {
  JsonValue payload;

  if (m_actionNameHasBeenSet) {
    payload.WithString("actionName", m_actionName);
  }

  if (m_canPerformActionHasBeenSet) {
    payload.WithBool("canPerformAction", m_canPerformAction);
  }

  if (m_limitsHasBeenSet) {
    Aws::Utils::Array<JsonValue> limitsJsonList(m_limits.size());
    for (unsigned limitsIndex = 0; limitsIndex < limitsJsonList.GetLength(); ++limitsIndex) {
      limitsJsonList[limitsIndex].AsObject(m_limits[limitsIndex].Jsonize());
    }
    payload.WithArray("limits", std::move(limitsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace SocialMessaging
}  // namespace Aws
