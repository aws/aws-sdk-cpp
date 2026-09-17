/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/socialmessaging/model/WhatsAppCallPermission.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SocialMessaging {
namespace Model {

WhatsAppCallPermission::WhatsAppCallPermission(JsonView jsonValue) { *this = jsonValue; }

WhatsAppCallPermission& WhatsAppCallPermission::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("status")) {
    m_status = jsonValue.GetString("status");
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("expirationTime")) {
    m_expirationTime = jsonValue.GetDouble("expirationTime");
    m_expirationTimeHasBeenSet = true;
  }
  return *this;
}

JsonValue WhatsAppCallPermission::Jsonize() const {
  JsonValue payload;

  if (m_statusHasBeenSet) {
    payload.WithString("status", m_status);
  }

  if (m_expirationTimeHasBeenSet) {
    payload.WithDouble("expirationTime", m_expirationTime.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace SocialMessaging
}  // namespace Aws
