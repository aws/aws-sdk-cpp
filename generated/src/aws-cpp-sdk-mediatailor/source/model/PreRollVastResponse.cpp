/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mediatailor/model/PreRollVastResponse.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaTailor {
namespace Model {

PreRollVastResponse::PreRollVastResponse(JsonView jsonValue) { *this = jsonValue; }

PreRollVastResponse& PreRollVastResponse::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("AdSequencingMode")) {
    m_adSequencingMode = PreRollAdSequencingModeMapper::GetPreRollAdSequencingModeForName(jsonValue.GetString("AdSequencingMode"));
    m_adSequencingModeHasBeenSet = true;
  }
  return *this;
}

JsonValue PreRollVastResponse::Jsonize() const {
  JsonValue payload;

  if (m_adSequencingModeHasBeenSet) {
    payload.WithString("AdSequencingMode", PreRollAdSequencingModeMapper::GetNameForPreRollAdSequencingMode(m_adSequencingMode));
  }

  return payload;
}

}  // namespace Model
}  // namespace MediaTailor
}  // namespace Aws
