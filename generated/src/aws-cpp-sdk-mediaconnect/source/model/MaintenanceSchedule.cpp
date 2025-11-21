/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mediaconnect/model/MaintenanceSchedule.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaConnect {
namespace Model {

MaintenanceSchedule::MaintenanceSchedule(JsonView jsonValue) { *this = jsonValue; }

MaintenanceSchedule& MaintenanceSchedule::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("window")) {
    m_window = jsonValue.GetObject("window");
    m_windowHasBeenSet = true;
  }
  return *this;
}

JsonValue MaintenanceSchedule::Jsonize() const {
  JsonValue payload;

  if (m_windowHasBeenSet) {
    payload.WithObject("window", m_window.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
