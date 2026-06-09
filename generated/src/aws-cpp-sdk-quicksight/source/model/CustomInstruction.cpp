/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/CustomInstruction.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

CustomInstruction::CustomInstruction(JsonView jsonValue) { *this = jsonValue; }

CustomInstruction& CustomInstruction::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("InlineCustomInstruction")) {
    m_inlineCustomInstruction = jsonValue.GetObject("InlineCustomInstruction");
    m_inlineCustomInstructionHasBeenSet = true;
  }
  return *this;
}

JsonValue CustomInstruction::Jsonize() const {
  JsonValue payload;

  if (m_inlineCustomInstructionHasBeenSet) {
    payload.WithObject("InlineCustomInstruction", m_inlineCustomInstruction.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
