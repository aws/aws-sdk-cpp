/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/TrainingSessionOutputConfig.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {

TrainingSessionOutputConfig::TrainingSessionOutputConfig(JsonView jsonValue) { *this = jsonValue; }

TrainingSessionOutputConfig& TrainingSessionOutputConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("S3Location")) {
    m_s3Location = jsonValue.GetObject("S3Location");
    m_s3LocationHasBeenSet = true;
  }
  return *this;
}

JsonValue TrainingSessionOutputConfig::Jsonize() const {
  JsonValue payload;

  if (m_s3LocationHasBeenSet) {
    payload.WithObject("S3Location", m_s3Location.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
