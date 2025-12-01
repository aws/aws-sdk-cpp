/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/qconnect/model/ToolInstruction.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QConnect {
namespace Model {

ToolInstruction::ToolInstruction(JsonView jsonValue) { *this = jsonValue; }

ToolInstruction& ToolInstruction::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("instruction")) {
    m_instruction = jsonValue.GetString("instruction");
    m_instructionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("examples")) {
    Aws::Utils::Array<JsonView> examplesJsonList = jsonValue.GetArray("examples");
    for (unsigned examplesIndex = 0; examplesIndex < examplesJsonList.GetLength(); ++examplesIndex) {
      m_examples.push_back(examplesJsonList[examplesIndex].AsString());
    }
    m_examplesHasBeenSet = true;
  }
  return *this;
}

JsonValue ToolInstruction::Jsonize() const {
  JsonValue payload;

  if (m_instructionHasBeenSet) {
    payload.WithString("instruction", m_instruction);
  }

  if (m_examplesHasBeenSet) {
    Aws::Utils::Array<JsonValue> examplesJsonList(m_examples.size());
    for (unsigned examplesIndex = 0; examplesIndex < examplesJsonList.GetLength(); ++examplesIndex) {
      examplesJsonList[examplesIndex].AsString(m_examples[examplesIndex]);
    }
    payload.WithArray("examples", std::move(examplesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
