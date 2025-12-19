/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/wickr/model/ShredderSettings.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Wickr {
namespace Model {

ShredderSettings::ShredderSettings(JsonView jsonValue) { *this = jsonValue; }

ShredderSettings& ShredderSettings::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("canProcessManually")) {
    m_canProcessManually = jsonValue.GetBool("canProcessManually");
    m_canProcessManuallyHasBeenSet = true;
  }
  if (jsonValue.ValueExists("intensity")) {
    m_intensity = jsonValue.GetInteger("intensity");
    m_intensityHasBeenSet = true;
  }
  return *this;
}

JsonValue ShredderSettings::Jsonize() const {
  JsonValue payload;

  if (m_canProcessManuallyHasBeenSet) {
    payload.WithBool("canProcessManually", m_canProcessManually);
  }

  if (m_intensityHasBeenSet) {
    payload.WithInteger("intensity", m_intensity);
  }

  return payload;
}

}  // namespace Model
}  // namespace Wickr
}  // namespace Aws
