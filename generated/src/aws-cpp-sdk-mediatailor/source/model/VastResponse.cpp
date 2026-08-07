/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mediatailor/model/VastResponse.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaTailor {
namespace Model {

VastResponse::VastResponse(JsonView jsonValue) { *this = jsonValue; }

VastResponse& VastResponse::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("AdSequencingMode")) {
    m_adSequencingMode = AdSequencingModeMapper::GetAdSequencingModeForName(jsonValue.GetString("AdSequencingMode"));
    m_adSequencingModeHasBeenSet = true;
  }
  return *this;
}

JsonValue VastResponse::Jsonize() const {
  JsonValue payload;

  if (m_adSequencingModeHasBeenSet) {
    payload.WithString("AdSequencingMode", AdSequencingModeMapper::GetNameForAdSequencingMode(m_adSequencingMode));
  }

  return payload;
}

}  // namespace Model
}  // namespace MediaTailor
}  // namespace Aws
