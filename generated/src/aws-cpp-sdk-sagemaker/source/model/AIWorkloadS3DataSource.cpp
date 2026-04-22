/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/AIWorkloadS3DataSource.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {

AIWorkloadS3DataSource::AIWorkloadS3DataSource(JsonView jsonValue) { *this = jsonValue; }

AIWorkloadS3DataSource& AIWorkloadS3DataSource::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("S3Uri")) {
    m_s3Uri = jsonValue.GetString("S3Uri");
    m_s3UriHasBeenSet = true;
  }
  return *this;
}

JsonValue AIWorkloadS3DataSource::Jsonize() const {
  JsonValue payload;

  if (m_s3UriHasBeenSet) {
    payload.WithString("S3Uri", m_s3Uri);
  }

  return payload;
}

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
