/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/resiliencehubv2/model/Achievability.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace resiliencehubv2 {
namespace Model {

Achievability::Achievability(JsonView jsonValue) { *this = jsonValue; }

Achievability& Achievability::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("availabilitySlo")) {
    m_availabilitySlo = AchievabilityStatusMapper::GetAchievabilityStatusForName(jsonValue.GetString("availabilitySlo"));
    m_availabilitySloHasBeenSet = true;
  }
  if (jsonValue.ValueExists("multiAzRtoRpo")) {
    m_multiAzRtoRpo = AchievabilityStatusMapper::GetAchievabilityStatusForName(jsonValue.GetString("multiAzRtoRpo"));
    m_multiAzRtoRpoHasBeenSet = true;
  }
  if (jsonValue.ValueExists("multiRegionRtoRpo")) {
    m_multiRegionRtoRpo = AchievabilityStatusMapper::GetAchievabilityStatusForName(jsonValue.GetString("multiRegionRtoRpo"));
    m_multiRegionRtoRpoHasBeenSet = true;
  }
  if (jsonValue.ValueExists("dataRecoveryTimeBetweenBackups")) {
    m_dataRecoveryTimeBetweenBackups =
        AchievabilityStatusMapper::GetAchievabilityStatusForName(jsonValue.GetString("dataRecoveryTimeBetweenBackups"));
    m_dataRecoveryTimeBetweenBackupsHasBeenSet = true;
  }
  return *this;
}

JsonValue Achievability::Jsonize() const {
  JsonValue payload;

  if (m_availabilitySloHasBeenSet) {
    payload.WithString("availabilitySlo", AchievabilityStatusMapper::GetNameForAchievabilityStatus(m_availabilitySlo));
  }

  if (m_multiAzRtoRpoHasBeenSet) {
    payload.WithString("multiAzRtoRpo", AchievabilityStatusMapper::GetNameForAchievabilityStatus(m_multiAzRtoRpo));
  }

  if (m_multiRegionRtoRpoHasBeenSet) {
    payload.WithString("multiRegionRtoRpo", AchievabilityStatusMapper::GetNameForAchievabilityStatus(m_multiRegionRtoRpo));
  }

  if (m_dataRecoveryTimeBetweenBackupsHasBeenSet) {
    payload.WithString("dataRecoveryTimeBetweenBackups",
                       AchievabilityStatusMapper::GetNameForAchievabilityStatus(m_dataRecoveryTimeBetweenBackups));
  }

  return payload;
}

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
