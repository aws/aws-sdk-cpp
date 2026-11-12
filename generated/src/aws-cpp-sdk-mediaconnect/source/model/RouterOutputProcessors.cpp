/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mediaconnect/model/RouterOutputProcessors.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaConnect {
namespace Model {

RouterOutputProcessors::RouterOutputProcessors(JsonView jsonValue) { *this = jsonValue; }

RouterOutputProcessors& RouterOutputProcessors::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("singleProgramTransportStreamPidMap")) {
    m_singleProgramTransportStreamPidMap = jsonValue.GetObject("singleProgramTransportStreamPidMap");
    m_singleProgramTransportStreamPidMapHasBeenSet = true;
  }
  return *this;
}

JsonValue RouterOutputProcessors::Jsonize() const {
  JsonValue payload;

  if (m_singleProgramTransportStreamPidMapHasBeenSet) {
    payload.WithObject("singleProgramTransportStreamPidMap", m_singleProgramTransportStreamPidMap.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
