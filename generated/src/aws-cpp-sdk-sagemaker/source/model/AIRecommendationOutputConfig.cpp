/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/AIRecommendationOutputConfig.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {

AIRecommendationOutputConfig::AIRecommendationOutputConfig(JsonView jsonValue) { *this = jsonValue; }

AIRecommendationOutputConfig& AIRecommendationOutputConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("S3OutputLocation")) {
    m_s3OutputLocation = jsonValue.GetString("S3OutputLocation");
    m_s3OutputLocationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ModelPackageGroupIdentifier")) {
    m_modelPackageGroupIdentifier = jsonValue.GetString("ModelPackageGroupIdentifier");
    m_modelPackageGroupIdentifierHasBeenSet = true;
  }
  return *this;
}

JsonValue AIRecommendationOutputConfig::Jsonize() const {
  JsonValue payload;

  if (m_s3OutputLocationHasBeenSet) {
    payload.WithString("S3OutputLocation", m_s3OutputLocation);
  }

  if (m_modelPackageGroupIdentifierHasBeenSet) {
    payload.WithString("ModelPackageGroupIdentifier", m_modelPackageGroupIdentifier);
  }

  return payload;
}

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
