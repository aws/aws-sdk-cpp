/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/socialmessaging/model/WhatsAppCallPermissionLimit.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SocialMessaging {
namespace Model {

WhatsAppCallPermissionLimit::WhatsAppCallPermissionLimit(JsonView jsonValue) { *this = jsonValue; }

WhatsAppCallPermissionLimit& WhatsAppCallPermissionLimit::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("timePeriod")) {
    m_timePeriod = jsonValue.GetString("timePeriod");
    m_timePeriodHasBeenSet = true;
  }
  if (jsonValue.ValueExists("maxAllowed")) {
    m_maxAllowed = jsonValue.GetInteger("maxAllowed");
    m_maxAllowedHasBeenSet = true;
  }
  if (jsonValue.ValueExists("currentUsage")) {
    m_currentUsage = jsonValue.GetInteger("currentUsage");
    m_currentUsageHasBeenSet = true;
  }
  if (jsonValue.ValueExists("limitExpirationTime")) {
    m_limitExpirationTime = jsonValue.GetDouble("limitExpirationTime");
    m_limitExpirationTimeHasBeenSet = true;
  }
  return *this;
}

JsonValue WhatsAppCallPermissionLimit::Jsonize() const {
  JsonValue payload;

  if (m_timePeriodHasBeenSet) {
    payload.WithString("timePeriod", m_timePeriod);
  }

  if (m_maxAllowedHasBeenSet) {
    payload.WithInteger("maxAllowed", m_maxAllowed);
  }

  if (m_currentUsageHasBeenSet) {
    payload.WithInteger("currentUsage", m_currentUsage);
  }

  if (m_limitExpirationTimeHasBeenSet) {
    payload.WithDouble("limitExpirationTime", m_limitExpirationTime.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace SocialMessaging
}  // namespace Aws
