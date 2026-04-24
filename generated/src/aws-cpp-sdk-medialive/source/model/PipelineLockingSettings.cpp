/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/medialive/model/PipelineLockingSettings.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaLive {
namespace Model {

PipelineLockingSettings::PipelineLockingSettings(JsonView jsonValue) { *this = jsonValue; }

PipelineLockingSettings& PipelineLockingSettings::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("pipelineLockingMethod")) {
    m_pipelineLockingMethod = PipelineLockingMethodMapper::GetPipelineLockingMethodForName(jsonValue.GetString("pipelineLockingMethod"));
    m_pipelineLockingMethodHasBeenSet = true;
  }
  if (jsonValue.ValueExists("customEpoch")) {
    m_customEpoch = jsonValue.GetString("customEpoch");
    m_customEpochHasBeenSet = true;
  }
  return *this;
}

JsonValue PipelineLockingSettings::Jsonize() const {
  JsonValue payload;

  if (m_pipelineLockingMethodHasBeenSet) {
    payload.WithString("pipelineLockingMethod", PipelineLockingMethodMapper::GetNameForPipelineLockingMethod(m_pipelineLockingMethod));
  }

  if (m_customEpochHasBeenSet) {
    payload.WithString("customEpoch", m_customEpoch);
  }

  return payload;
}

}  // namespace Model
}  // namespace MediaLive
}  // namespace Aws
