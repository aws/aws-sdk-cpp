/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mediaconnect/model/MaintenanceConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaConnect {
namespace Model {

MaintenanceConfiguration::MaintenanceConfiguration(JsonView jsonValue) { *this = jsonValue; }

MaintenanceConfiguration& MaintenanceConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("preferredDayTime")) {
    m_preferredDayTime = jsonValue.GetObject("preferredDayTime");
    m_preferredDayTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("default")) {
    m_default = jsonValue.GetObject("default");
    m_defaultHasBeenSet = true;
  }
  return *this;
}

JsonValue MaintenanceConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_preferredDayTimeHasBeenSet) {
    payload.WithObject("preferredDayTime", m_preferredDayTime.Jsonize());
  }

  if (m_defaultHasBeenSet) {
    payload.WithObject("default", m_default.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
