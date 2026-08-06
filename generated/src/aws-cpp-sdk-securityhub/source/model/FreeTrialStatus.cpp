/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityhub/model/FreeTrialStatus.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SecurityHub {
namespace Model {

FreeTrialStatus::FreeTrialStatus(JsonView jsonValue) { *this = jsonValue; }

FreeTrialStatus& FreeTrialStatus::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("FeatureType")) {
    m_featureType = FreeTrialTypeMapper::GetFreeTrialTypeForName(jsonValue.GetString("FeatureType"));
    m_featureTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Status")) {
    m_status = FreeTrialStatusValueMapper::GetFreeTrialStatusValueForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("StartedAt")) {
    m_startedAt = jsonValue.GetString("StartedAt");
    m_startedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ExpiresAt")) {
    m_expiresAt = jsonValue.GetString("ExpiresAt");
    m_expiresAtHasBeenSet = true;
  }
  return *this;
}

JsonValue FreeTrialStatus::Jsonize() const {
  JsonValue payload;

  if (m_featureTypeHasBeenSet) {
    payload.WithString("FeatureType", FreeTrialTypeMapper::GetNameForFreeTrialType(m_featureType));
  }

  if (m_statusHasBeenSet) {
    payload.WithString("Status", FreeTrialStatusValueMapper::GetNameForFreeTrialStatusValue(m_status));
  }

  if (m_startedAtHasBeenSet) {
    payload.WithString("StartedAt", m_startedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_expiresAtHasBeenSet) {
    payload.WithString("ExpiresAt", m_expiresAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
