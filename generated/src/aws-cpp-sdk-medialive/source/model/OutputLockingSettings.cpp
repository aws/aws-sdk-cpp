/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/medialive/model/OutputLockingSettings.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaLive {
namespace Model {

OutputLockingSettings::OutputLockingSettings(JsonView jsonValue) { *this = jsonValue; }

OutputLockingSettings& OutputLockingSettings::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("epochLockingSettings")) {
    m_epochLockingSettings = jsonValue.GetObject("epochLockingSettings");
    m_epochLockingSettingsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("pipelineLockingSettings")) {
    m_pipelineLockingSettings = jsonValue.GetObject("pipelineLockingSettings");
    m_pipelineLockingSettingsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("disabledLockingSettings")) {
    m_disabledLockingSettings = jsonValue.GetObject("disabledLockingSettings");
    m_disabledLockingSettingsHasBeenSet = true;
  }
  return *this;
}

JsonValue OutputLockingSettings::Jsonize() const {
  JsonValue payload;

  if (m_epochLockingSettingsHasBeenSet) {
    payload.WithObject("epochLockingSettings", m_epochLockingSettings.Jsonize());
  }

  if (m_pipelineLockingSettingsHasBeenSet) {
    payload.WithObject("pipelineLockingSettings", m_pipelineLockingSettings.Jsonize());
  }

  if (m_disabledLockingSettingsHasBeenSet) {
    payload.WithObject("disabledLockingSettings", m_disabledLockingSettings.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace MediaLive
}  // namespace Aws
