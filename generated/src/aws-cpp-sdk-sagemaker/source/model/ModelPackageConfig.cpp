/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/ModelPackageConfig.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {

ModelPackageConfig::ModelPackageConfig(JsonView jsonValue) { *this = jsonValue; }

ModelPackageConfig& ModelPackageConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ModelPackageGroupArn")) {
    m_modelPackageGroupArn = jsonValue.GetString("ModelPackageGroupArn");
    m_modelPackageGroupArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SourceModelPackageArn")) {
    m_sourceModelPackageArn = jsonValue.GetString("SourceModelPackageArn");
    m_sourceModelPackageArnHasBeenSet = true;
  }
  return *this;
}

JsonValue ModelPackageConfig::Jsonize() const {
  JsonValue payload;

  if (m_modelPackageGroupArnHasBeenSet) {
    payload.WithString("ModelPackageGroupArn", m_modelPackageGroupArn);
  }

  if (m_sourceModelPackageArnHasBeenSet) {
    payload.WithString("SourceModelPackageArn", m_sourceModelPackageArn);
  }

  return payload;
}

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
