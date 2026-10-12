/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/TrainingSessionS3Location.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {

TrainingSessionS3Location::TrainingSessionS3Location(JsonView jsonValue) { *this = jsonValue; }

TrainingSessionS3Location& TrainingSessionS3Location::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Path")) {
    m_path = jsonValue.GetString("Path");
    m_pathHasBeenSet = true;
  }
  if (jsonValue.ValueExists("KmsKeyArn")) {
    m_kmsKeyArn = jsonValue.GetString("KmsKeyArn");
    m_kmsKeyArnHasBeenSet = true;
  }
  return *this;
}

JsonValue TrainingSessionS3Location::Jsonize() const {
  JsonValue payload;

  if (m_pathHasBeenSet) {
    payload.WithString("Path", m_path);
  }

  if (m_kmsKeyArnHasBeenSet) {
    payload.WithString("KmsKeyArn", m_kmsKeyArn);
  }

  return payload;
}

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
