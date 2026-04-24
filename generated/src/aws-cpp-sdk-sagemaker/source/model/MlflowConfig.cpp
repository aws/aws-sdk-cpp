/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/MlflowConfig.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {

MlflowConfig::MlflowConfig(JsonView jsonValue) { *this = jsonValue; }

MlflowConfig& MlflowConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("MlflowResourceArn")) {
    m_mlflowResourceArn = jsonValue.GetString("MlflowResourceArn");
    m_mlflowResourceArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("MlflowExperimentName")) {
    m_mlflowExperimentName = jsonValue.GetString("MlflowExperimentName");
    m_mlflowExperimentNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("MlflowRunName")) {
    m_mlflowRunName = jsonValue.GetString("MlflowRunName");
    m_mlflowRunNameHasBeenSet = true;
  }
  return *this;
}

JsonValue MlflowConfig::Jsonize() const {
  JsonValue payload;

  if (m_mlflowResourceArnHasBeenSet) {
    payload.WithString("MlflowResourceArn", m_mlflowResourceArn);
  }

  if (m_mlflowExperimentNameHasBeenSet) {
    payload.WithString("MlflowExperimentName", m_mlflowExperimentName);
  }

  if (m_mlflowRunNameHasBeenSet) {
    payload.WithString("MlflowRunName", m_mlflowRunName);
  }

  return payload;
}

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
