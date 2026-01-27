/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/medialive/model/DisabledLockingSettings.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaLive {
namespace Model {

DisabledLockingSettings::DisabledLockingSettings(JsonView jsonValue) { *this = jsonValue; }

DisabledLockingSettings& DisabledLockingSettings::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("customEpoch")) {
    m_customEpoch = jsonValue.GetString("customEpoch");
    m_customEpochHasBeenSet = true;
  }
  return *this;
}

JsonValue DisabledLockingSettings::Jsonize() const {
  JsonValue payload;

  if (m_customEpochHasBeenSet) {
    payload.WithString("customEpoch", m_customEpoch);
  }

  return payload;
}

}  // namespace Model
}  // namespace MediaLive
}  // namespace Aws
