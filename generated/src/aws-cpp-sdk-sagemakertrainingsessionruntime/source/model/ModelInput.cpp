/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemakertrainingsessionruntime/model/ModelInput.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SageMakerTrainingSessionRuntime {
namespace Model {

ModelInput::ModelInput(JsonView jsonValue) { *this = jsonValue; }

ModelInput& ModelInput::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("chunks")) {
    Aws::Utils::Array<JsonView> chunksJsonList = jsonValue.GetArray("chunks");
    for (unsigned chunksIndex = 0; chunksIndex < chunksJsonList.GetLength(); ++chunksIndex) {
      m_chunks.push_back(chunksJsonList[chunksIndex].AsObject());
    }
    m_chunksHasBeenSet = true;
  }
  return *this;
}

JsonValue ModelInput::Jsonize() const {
  JsonValue payload;

  if (m_chunksHasBeenSet) {
    Aws::Utils::Array<JsonValue> chunksJsonList(m_chunks.size());
    for (unsigned chunksIndex = 0; chunksIndex < chunksJsonList.GetLength(); ++chunksIndex) {
      chunksJsonList[chunksIndex].AsObject(m_chunks[chunksIndex].Jsonize());
    }
    payload.WithArray("chunks", std::move(chunksJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace SageMakerTrainingSessionRuntime
}  // namespace Aws
