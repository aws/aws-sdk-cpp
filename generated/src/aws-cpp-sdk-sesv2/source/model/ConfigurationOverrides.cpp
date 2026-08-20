/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sesv2/model/ConfigurationOverrides.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SESV2 {
namespace Model {

ConfigurationOverrides::ConfigurationOverrides(JsonView jsonValue) { *this = jsonValue; }

ConfigurationOverrides& ConfigurationOverrides::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Tracking")) {
    m_tracking = jsonValue.GetObject("Tracking");
    m_trackingHasBeenSet = true;
  }
  return *this;
}

JsonValue ConfigurationOverrides::Jsonize() const {
  JsonValue payload;

  if (m_trackingHasBeenSet) {
    payload.WithObject("Tracking", m_tracking.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace SESV2
}  // namespace Aws
