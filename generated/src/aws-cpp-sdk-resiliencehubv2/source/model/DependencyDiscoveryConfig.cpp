/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/resiliencehubv2/model/DependencyDiscoveryConfig.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace resiliencehubv2 {
namespace Model {

DependencyDiscoveryConfig::DependencyDiscoveryConfig(JsonView jsonValue) { *this = jsonValue; }

DependencyDiscoveryConfig& DependencyDiscoveryConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("status")) {
    m_status = DependencyDiscoveryStatusMapper::GetDependencyDiscoveryStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("updatedAt")) {
    m_updatedAt = jsonValue.GetDouble("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("eligibleResourceCount")) {
    m_eligibleResourceCount = jsonValue.GetInteger("eligibleResourceCount");
    m_eligibleResourceCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("message")) {
    m_message = jsonValue.GetString("message");
    m_messageHasBeenSet = true;
  }
  return *this;
}

JsonValue DependencyDiscoveryConfig::Jsonize() const {
  JsonValue payload;

  if (m_statusHasBeenSet) {
    payload.WithString("status", DependencyDiscoveryStatusMapper::GetNameForDependencyDiscoveryStatus(m_status));
  }

  if (m_updatedAtHasBeenSet) {
    payload.WithDouble("updatedAt", m_updatedAt.SecondsWithMSPrecision());
  }

  if (m_eligibleResourceCountHasBeenSet) {
    payload.WithInteger("eligibleResourceCount", m_eligibleResourceCount);
  }

  if (m_messageHasBeenSet) {
    payload.WithString("message", m_message);
  }

  return payload;
}

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
