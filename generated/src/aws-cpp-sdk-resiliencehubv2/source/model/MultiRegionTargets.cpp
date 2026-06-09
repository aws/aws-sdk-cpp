/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/resiliencehubv2/model/MultiRegionTargets.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace resiliencehubv2 {
namespace Model {

MultiRegionTargets::MultiRegionTargets(JsonView jsonValue) { *this = jsonValue; }

MultiRegionTargets& MultiRegionTargets::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("rtoInMinutes")) {
    m_rtoInMinutes = jsonValue.GetInteger("rtoInMinutes");
    m_rtoInMinutesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("rpoInMinutes")) {
    m_rpoInMinutes = jsonValue.GetInteger("rpoInMinutes");
    m_rpoInMinutesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("disasterRecoveryApproach")) {
    m_disasterRecoveryApproach = MultiRegionDisasterRecoveryApproachMapper::GetMultiRegionDisasterRecoveryApproachForName(
        jsonValue.GetString("disasterRecoveryApproach"));
    m_disasterRecoveryApproachHasBeenSet = true;
  }
  return *this;
}

JsonValue MultiRegionTargets::Jsonize() const {
  JsonValue payload;

  if (m_rtoInMinutesHasBeenSet) {
    payload.WithInteger("rtoInMinutes", m_rtoInMinutes);
  }

  if (m_rpoInMinutesHasBeenSet) {
    payload.WithInteger("rpoInMinutes", m_rpoInMinutes);
  }

  if (m_disasterRecoveryApproachHasBeenSet) {
    payload.WithString("disasterRecoveryApproach", MultiRegionDisasterRecoveryApproachMapper::GetNameForMultiRegionDisasterRecoveryApproach(
                                                       m_disasterRecoveryApproach));
  }

  return payload;
}

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
