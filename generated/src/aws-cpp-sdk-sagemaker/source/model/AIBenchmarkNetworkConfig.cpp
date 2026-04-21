/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/AIBenchmarkNetworkConfig.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {

AIBenchmarkNetworkConfig::AIBenchmarkNetworkConfig(JsonView jsonValue) { *this = jsonValue; }

AIBenchmarkNetworkConfig& AIBenchmarkNetworkConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("VpcConfig")) {
    m_vpcConfig = jsonValue.GetObject("VpcConfig");
    m_vpcConfigHasBeenSet = true;
  }
  return *this;
}

JsonValue AIBenchmarkNetworkConfig::Jsonize() const {
  JsonValue payload;

  if (m_vpcConfigHasBeenSet) {
    payload.WithObject("VpcConfig", m_vpcConfig.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
