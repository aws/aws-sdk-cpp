/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mediaconvert/model/MultiViewInput.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaConvert {
namespace Model {

MultiViewInput::MultiViewInput(JsonView jsonValue) { *this = jsonValue; }

MultiViewInput& MultiViewInput::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("fileInput")) {
    m_fileInput = jsonValue.GetString("fileInput");
    m_fileInputHasBeenSet = true;
  }
  return *this;
}

JsonValue MultiViewInput::Jsonize() const {
  JsonValue payload;

  if (m_fileInputHasBeenSet) {
    payload.WithString("fileInput", m_fileInput);
  }

  return payload;
}

}  // namespace Model
}  // namespace MediaConvert
}  // namespace Aws
