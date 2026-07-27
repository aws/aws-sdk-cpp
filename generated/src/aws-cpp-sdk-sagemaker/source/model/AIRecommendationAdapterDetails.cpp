/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/AIRecommendationAdapterDetails.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {

AIRecommendationAdapterDetails::AIRecommendationAdapterDetails(JsonView jsonValue) { *this = jsonValue; }

AIRecommendationAdapterDetails& AIRecommendationAdapterDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ModelPackageArns")) {
    Aws::Utils::Array<JsonView> modelPackageArnsJsonList = jsonValue.GetArray("ModelPackageArns");
    for (unsigned modelPackageArnsIndex = 0; modelPackageArnsIndex < modelPackageArnsJsonList.GetLength(); ++modelPackageArnsIndex) {
      m_modelPackageArns.push_back(modelPackageArnsJsonList[modelPackageArnsIndex].AsObject());
    }
    m_modelPackageArnsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("S3Uris")) {
    Aws::Utils::Array<JsonView> s3UrisJsonList = jsonValue.GetArray("S3Uris");
    for (unsigned s3UrisIndex = 0; s3UrisIndex < s3UrisJsonList.GetLength(); ++s3UrisIndex) {
      m_s3Uris.push_back(s3UrisJsonList[s3UrisIndex].AsObject());
    }
    m_s3UrisHasBeenSet = true;
  }
  return *this;
}

JsonValue AIRecommendationAdapterDetails::Jsonize() const {
  JsonValue payload;

  if (m_modelPackageArnsHasBeenSet) {
    Aws::Utils::Array<JsonValue> modelPackageArnsJsonList(m_modelPackageArns.size());
    for (unsigned modelPackageArnsIndex = 0; modelPackageArnsIndex < modelPackageArnsJsonList.GetLength(); ++modelPackageArnsIndex) {
      modelPackageArnsJsonList[modelPackageArnsIndex].AsObject(m_modelPackageArns[modelPackageArnsIndex].Jsonize());
    }
    payload.WithArray("ModelPackageArns", std::move(modelPackageArnsJsonList));
  }

  if (m_s3UrisHasBeenSet) {
    Aws::Utils::Array<JsonValue> s3UrisJsonList(m_s3Uris.size());
    for (unsigned s3UrisIndex = 0; s3UrisIndex < s3UrisJsonList.GetLength(); ++s3UrisIndex) {
      s3UrisJsonList[s3UrisIndex].AsObject(m_s3Uris[s3UrisIndex].Jsonize());
    }
    payload.WithArray("S3Uris", std::move(s3UrisJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
