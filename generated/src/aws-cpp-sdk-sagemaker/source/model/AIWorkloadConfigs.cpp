/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/AIWorkloadConfigs.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {

AIWorkloadConfigs::AIWorkloadConfigs(JsonView jsonValue) { *this = jsonValue; }

AIWorkloadConfigs& AIWorkloadConfigs::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("WorkloadSpec")) {
    m_workloadSpec = jsonValue.GetObject("WorkloadSpec");
    m_workloadSpecHasBeenSet = true;
  }
  return *this;
}

JsonValue AIWorkloadConfigs::Jsonize() const {
  JsonValue payload;

  if (m_workloadSpecHasBeenSet) {
    payload.WithObject("WorkloadSpec", m_workloadSpec.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
