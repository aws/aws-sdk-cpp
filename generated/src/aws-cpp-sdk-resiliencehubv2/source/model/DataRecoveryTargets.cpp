/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/resiliencehubv2/model/DataRecoveryTargets.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace resiliencehubv2 {
namespace Model {

DataRecoveryTargets::DataRecoveryTargets(JsonView jsonValue) { *this = jsonValue; }

DataRecoveryTargets& DataRecoveryTargets::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("timeBetweenBackupsInMinutes")) {
    m_timeBetweenBackupsInMinutes = jsonValue.GetInteger("timeBetweenBackupsInMinutes");
    m_timeBetweenBackupsInMinutesHasBeenSet = true;
  }
  return *this;
}

JsonValue DataRecoveryTargets::Jsonize() const {
  JsonValue payload;

  if (m_timeBetweenBackupsInMinutesHasBeenSet) {
    payload.WithInteger("timeBetweenBackupsInMinutes", m_timeBetweenBackupsInMinutes);
  }

  return payload;
}

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
