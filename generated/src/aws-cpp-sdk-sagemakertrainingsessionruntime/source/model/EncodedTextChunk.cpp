/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemakertrainingsessionruntime/model/EncodedTextChunk.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SageMakerTrainingSessionRuntime {
namespace Model {

EncodedTextChunk::EncodedTextChunk(JsonView jsonValue) { *this = jsonValue; }

EncodedTextChunk& EncodedTextChunk::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("tokens")) {
    Aws::Utils::Array<JsonView> tokensJsonList = jsonValue.GetArray("tokens");
    for (unsigned tokensIndex = 0; tokensIndex < tokensJsonList.GetLength(); ++tokensIndex) {
      m_tokens.push_back(tokensJsonList[tokensIndex].AsInteger());
    }
    m_tokensHasBeenSet = true;
  }
  if (jsonValue.ValueExists("type")) {
    m_type = EncodedTextChunkTypeMapper::GetEncodedTextChunkTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  return *this;
}

JsonValue EncodedTextChunk::Jsonize() const {
  JsonValue payload;

  if (m_tokensHasBeenSet) {
    Aws::Utils::Array<JsonValue> tokensJsonList(m_tokens.size());
    for (unsigned tokensIndex = 0; tokensIndex < tokensJsonList.GetLength(); ++tokensIndex) {
      tokensJsonList[tokensIndex].AsInteger(m_tokens[tokensIndex]);
    }
    payload.WithArray("tokens", std::move(tokensJsonList));
  }

  if (m_typeHasBeenSet) {
    payload.WithString("type", EncodedTextChunkTypeMapper::GetNameForEncodedTextChunkType(m_type));
  }

  return payload;
}

}  // namespace Model
}  // namespace SageMakerTrainingSessionRuntime
}  // namespace Aws
