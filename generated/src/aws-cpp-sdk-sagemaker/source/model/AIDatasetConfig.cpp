/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/AIDatasetConfig.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {

AIDatasetConfig::AIDatasetConfig(JsonView jsonValue) { *this = jsonValue; }

AIDatasetConfig& AIDatasetConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("InputDataConfig")) {
    Aws::Utils::Array<JsonView> inputDataConfigJsonList = jsonValue.GetArray("InputDataConfig");
    for (unsigned inputDataConfigIndex = 0; inputDataConfigIndex < inputDataConfigJsonList.GetLength(); ++inputDataConfigIndex) {
      m_inputDataConfig.push_back(inputDataConfigJsonList[inputDataConfigIndex].AsObject());
    }
    m_inputDataConfigHasBeenSet = true;
  }
  return *this;
}

JsonValue AIDatasetConfig::Jsonize() const {
  JsonValue payload;

  if (m_inputDataConfigHasBeenSet) {
    Aws::Utils::Array<JsonValue> inputDataConfigJsonList(m_inputDataConfig.size());
    for (unsigned inputDataConfigIndex = 0; inputDataConfigIndex < inputDataConfigJsonList.GetLength(); ++inputDataConfigIndex) {
      inputDataConfigJsonList[inputDataConfigIndex].AsObject(m_inputDataConfig[inputDataConfigIndex].Jsonize());
    }
    payload.WithArray("InputDataConfig", std::move(inputDataConfigJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
