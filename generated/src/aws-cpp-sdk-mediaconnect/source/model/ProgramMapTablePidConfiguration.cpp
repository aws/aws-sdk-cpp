/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mediaconnect/model/ProgramMapTablePidConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaConnect {
namespace Model {

ProgramMapTablePidConfiguration::ProgramMapTablePidConfiguration(JsonView jsonValue) { *this = jsonValue; }

ProgramMapTablePidConfiguration& ProgramMapTablePidConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("passthrough")) {
    m_passthrough = jsonValue.GetObject("passthrough");
    m_passthroughHasBeenSet = true;
  }
  if (jsonValue.ValueExists("set")) {
    m_set = jsonValue.GetInteger("set");
    m_setHasBeenSet = true;
  }
  return *this;
}

JsonValue ProgramMapTablePidConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_passthroughHasBeenSet) {
    payload.WithObject("passthrough", m_passthrough.Jsonize());
  }

  if (m_setHasBeenSet) {
    payload.WithInteger("set", m_set);
  }

  return payload;
}

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
