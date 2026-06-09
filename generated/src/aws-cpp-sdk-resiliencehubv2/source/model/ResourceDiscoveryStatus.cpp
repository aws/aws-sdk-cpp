/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/resiliencehubv2/model/ResourceDiscoveryStatus.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace resiliencehubv2 {
namespace Model {

ResourceDiscoveryStatus::ResourceDiscoveryStatus(JsonView jsonValue) { *this = jsonValue; }

ResourceDiscoveryStatus& ResourceDiscoveryStatus::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("status")) {
    m_status = ResourceDiscoveryRunStatusMapper::GetResourceDiscoveryRunStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("lastRunAt")) {
    m_lastRunAt = jsonValue.GetDouble("lastRunAt");
    m_lastRunAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("errorCode")) {
    m_errorCode = ResourceDiscoveryErrorCodeMapper::GetResourceDiscoveryErrorCodeForName(jsonValue.GetString("errorCode"));
    m_errorCodeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("errorMessage")) {
    m_errorMessage = jsonValue.GetString("errorMessage");
    m_errorMessageHasBeenSet = true;
  }
  return *this;
}

JsonValue ResourceDiscoveryStatus::Jsonize() const {
  JsonValue payload;

  if (m_statusHasBeenSet) {
    payload.WithString("status", ResourceDiscoveryRunStatusMapper::GetNameForResourceDiscoveryRunStatus(m_status));
  }

  if (m_lastRunAtHasBeenSet) {
    payload.WithDouble("lastRunAt", m_lastRunAt.SecondsWithMSPrecision());
  }

  if (m_errorCodeHasBeenSet) {
    payload.WithString("errorCode", ResourceDiscoveryErrorCodeMapper::GetNameForResourceDiscoveryErrorCode(m_errorCode));
  }

  if (m_errorMessageHasBeenSet) {
    payload.WithString("errorMessage", m_errorMessage);
  }

  return payload;
}

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
