/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/medialive/model/RouterDestinationSettings.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaLive {
namespace Model {

RouterDestinationSettings::RouterDestinationSettings(JsonView jsonValue) { *this = jsonValue; }

RouterDestinationSettings& RouterDestinationSettings::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("availabilityZoneName")) {
    m_availabilityZoneName = jsonValue.GetString("availabilityZoneName");
    m_availabilityZoneNameHasBeenSet = true;
  }
  return *this;
}

JsonValue RouterDestinationSettings::Jsonize() const {
  JsonValue payload;

  if (m_availabilityZoneNameHasBeenSet) {
    payload.WithString("availabilityZoneName", m_availabilityZoneName);
  }

  return payload;
}

}  // namespace Model
}  // namespace MediaLive
}  // namespace Aws
