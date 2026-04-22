/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/AIBenchmarkOutputConfig.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {

AIBenchmarkOutputConfig::AIBenchmarkOutputConfig(JsonView jsonValue) { *this = jsonValue; }

AIBenchmarkOutputConfig& AIBenchmarkOutputConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("S3OutputLocation")) {
    m_s3OutputLocation = jsonValue.GetString("S3OutputLocation");
    m_s3OutputLocationHasBeenSet = true;
  }
  return *this;
}

JsonValue AIBenchmarkOutputConfig::Jsonize() const {
  JsonValue payload;

  if (m_s3OutputLocationHasBeenSet) {
    payload.WithString("S3OutputLocation", m_s3OutputLocation);
  }

  return payload;
}

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
