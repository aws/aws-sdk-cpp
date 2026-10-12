/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemakertrainingsessionruntime/model/TensorData.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SageMakerTrainingSessionRuntime {
namespace Model {

TensorData::TensorData(JsonView jsonValue) { *this = jsonValue; }

TensorData& TensorData::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("data")) {
    m_data = jsonValue.GetObject("data");
    m_dataHasBeenSet = true;
  }
  if (jsonValue.ValueExists("dtype")) {
    m_dtype = jsonValue.GetString("dtype");
    m_dtypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("shape")) {
    Aws::Utils::Array<JsonView> shapeJsonList = jsonValue.GetArray("shape");
    for (unsigned shapeIndex = 0; shapeIndex < shapeJsonList.GetLength(); ++shapeIndex) {
      m_shape.push_back(shapeJsonList[shapeIndex].AsInteger());
    }
    m_shapeHasBeenSet = true;
  }
  return *this;
}

JsonValue TensorData::Jsonize() const {
  JsonValue payload;

  if (m_dataHasBeenSet) {
    if (!m_data.View().IsNull()) {
      payload.WithObject("data", JsonValue(m_data.View()));
    }
  }

  if (m_dtypeHasBeenSet) {
    payload.WithString("dtype", m_dtype);
  }

  if (m_shapeHasBeenSet) {
    Aws::Utils::Array<JsonValue> shapeJsonList(m_shape.size());
    for (unsigned shapeIndex = 0; shapeIndex < shapeJsonList.GetLength(); ++shapeIndex) {
      shapeJsonList[shapeIndex].AsInteger(m_shape[shapeIndex]);
    }
    payload.WithArray("shape", std::move(shapeJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace SageMakerTrainingSessionRuntime
}  // namespace Aws
