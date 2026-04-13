/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mediaconvert/model/MultiViewSettings.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaConvert {
namespace Model {

MultiViewSettings::MultiViewSettings(JsonView jsonValue) { *this = jsonValue; }

MultiViewSettings& MultiViewSettings::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("input")) {
    m_input = jsonValue.GetObject("input");
    m_inputHasBeenSet = true;
  }
  return *this;
}

JsonValue MultiViewSettings::Jsonize() const {
  JsonValue payload;

  if (m_inputHasBeenSet) {
    payload.WithObject("input", m_input.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace MediaConvert
}  // namespace Aws
