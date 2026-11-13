/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mediaconnect/model/AutoPidMapConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaConnect {
namespace Model {

AutoPidMapConfiguration::AutoPidMapConfiguration(JsonView jsonValue) { *this = jsonValue; }

AutoPidMapConfiguration& AutoPidMapConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("startPid")) {
    m_startPid = jsonValue.GetInteger("startPid");
    m_startPidHasBeenSet = true;
  }
  if (jsonValue.ValueExists("pidsPerProgram")) {
    m_pidsPerProgram = jsonValue.GetInteger("pidsPerProgram");
    m_pidsPerProgramHasBeenSet = true;
  }
  return *this;
}

JsonValue AutoPidMapConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_startPidHasBeenSet) {
    payload.WithInteger("startPid", m_startPid);
  }

  if (m_pidsPerProgramHasBeenSet) {
    payload.WithInteger("pidsPerProgram", m_pidsPerProgram);
  }

  return payload;
}

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
