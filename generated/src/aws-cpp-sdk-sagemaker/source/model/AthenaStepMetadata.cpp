/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/AthenaStepMetadata.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {

AthenaStepMetadata::AthenaStepMetadata(JsonView jsonValue) { *this = jsonValue; }

AthenaStepMetadata& AthenaStepMetadata::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("QueryExecutionId")) {
    m_queryExecutionId = jsonValue.GetString("QueryExecutionId");
    m_queryExecutionIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("S3OutputLocation")) {
    m_s3OutputLocation = jsonValue.GetString("S3OutputLocation");
    m_s3OutputLocationHasBeenSet = true;
  }
  return *this;
}

JsonValue AthenaStepMetadata::Jsonize() const {
  JsonValue payload;

  if (m_queryExecutionIdHasBeenSet) {
    payload.WithString("QueryExecutionId", m_queryExecutionId);
  }

  if (m_s3OutputLocationHasBeenSet) {
    payload.WithString("S3OutputLocation", m_s3OutputLocation);
  }

  return payload;
}

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
