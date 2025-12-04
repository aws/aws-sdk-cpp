/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/MlflowDetails.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {

MlflowDetails::MlflowDetails(JsonView jsonValue) { *this = jsonValue; }

MlflowDetails& MlflowDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("MlflowExperimentId")) {
    m_mlflowExperimentId = jsonValue.GetString("MlflowExperimentId");
    m_mlflowExperimentIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("MlflowRunId")) {
    m_mlflowRunId = jsonValue.GetString("MlflowRunId");
    m_mlflowRunIdHasBeenSet = true;
  }
  return *this;
}

JsonValue MlflowDetails::Jsonize() const {
  JsonValue payload;

  if (m_mlflowExperimentIdHasBeenSet) {
    payload.WithString("MlflowExperimentId", m_mlflowExperimentId);
  }

  if (m_mlflowRunIdHasBeenSet) {
    payload.WithString("MlflowRunId", m_mlflowRunId);
  }

  return payload;
}

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
