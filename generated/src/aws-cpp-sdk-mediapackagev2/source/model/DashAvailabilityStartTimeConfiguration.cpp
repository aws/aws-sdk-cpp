/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mediapackagev2/model/DashAvailabilityStartTimeConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace mediapackagev2 {
namespace Model {

DashAvailabilityStartTimeConfiguration::DashAvailabilityStartTimeConfiguration(JsonView jsonValue) { *this = jsonValue; }

DashAvailabilityStartTimeConfiguration& DashAvailabilityStartTimeConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("FixedAvailabilityStartTime")) {
    m_fixedAvailabilityStartTime = jsonValue.GetString("FixedAvailabilityStartTime");
    m_fixedAvailabilityStartTimeHasBeenSet = true;
  }
  return *this;
}

JsonValue DashAvailabilityStartTimeConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_fixedAvailabilityStartTimeHasBeenSet) {
    payload.WithString("FixedAvailabilityStartTime", m_fixedAvailabilityStartTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

}  // namespace Model
}  // namespace mediapackagev2
}  // namespace Aws
