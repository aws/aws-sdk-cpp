/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/CustomPromptInput.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

CustomPromptInput::CustomPromptInput(JsonView jsonValue) { *this = jsonValue; }

CustomPromptInput& CustomPromptInput::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ExistingPrompt")) {
    m_existingPrompt = jsonValue.GetObject("ExistingPrompt");
    m_existingPromptHasBeenSet = true;
  }
  if (jsonValue.ValueExists("NewPrompt")) {
    m_newPrompt = jsonValue.GetObject("NewPrompt");
    m_newPromptHasBeenSet = true;
  }
  return *this;
}

JsonValue CustomPromptInput::Jsonize() const {
  JsonValue payload;

  if (m_existingPromptHasBeenSet) {
    payload.WithObject("ExistingPrompt", m_existingPrompt.Jsonize());
  }

  if (m_newPromptHasBeenSet) {
    payload.WithObject("NewPrompt", m_newPrompt.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
