/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/AIRecommendationModelDetails.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {

AIRecommendationModelDetails::AIRecommendationModelDetails(JsonView jsonValue) { *this = jsonValue; }

AIRecommendationModelDetails& AIRecommendationModelDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ModelPackageArn")) {
    m_modelPackageArn = jsonValue.GetString("ModelPackageArn");
    m_modelPackageArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("InferenceSpecificationName")) {
    m_inferenceSpecificationName = jsonValue.GetString("InferenceSpecificationName");
    m_inferenceSpecificationNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("InstanceDetails")) {
    Aws::Utils::Array<JsonView> instanceDetailsJsonList = jsonValue.GetArray("InstanceDetails");
    for (unsigned instanceDetailsIndex = 0; instanceDetailsIndex < instanceDetailsJsonList.GetLength(); ++instanceDetailsIndex) {
      m_instanceDetails.push_back(instanceDetailsJsonList[instanceDetailsIndex].AsObject());
    }
    m_instanceDetailsHasBeenSet = true;
  }
  return *this;
}

JsonValue AIRecommendationModelDetails::Jsonize() const {
  JsonValue payload;

  if (m_modelPackageArnHasBeenSet) {
    payload.WithString("ModelPackageArn", m_modelPackageArn);
  }

  if (m_inferenceSpecificationNameHasBeenSet) {
    payload.WithString("InferenceSpecificationName", m_inferenceSpecificationName);
  }

  if (m_instanceDetailsHasBeenSet) {
    Aws::Utils::Array<JsonValue> instanceDetailsJsonList(m_instanceDetails.size());
    for (unsigned instanceDetailsIndex = 0; instanceDetailsIndex < instanceDetailsJsonList.GetLength(); ++instanceDetailsIndex) {
      instanceDetailsJsonList[instanceDetailsIndex].AsObject(m_instanceDetails[instanceDetailsIndex].Jsonize());
    }
    payload.WithArray("InstanceDetails", std::move(instanceDetailsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
