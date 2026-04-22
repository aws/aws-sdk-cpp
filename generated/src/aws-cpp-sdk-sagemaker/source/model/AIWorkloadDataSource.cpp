/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/AIWorkloadDataSource.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {

AIWorkloadDataSource::AIWorkloadDataSource(JsonView jsonValue) { *this = jsonValue; }

AIWorkloadDataSource& AIWorkloadDataSource::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("S3DataSource")) {
    m_s3DataSource = jsonValue.GetObject("S3DataSource");
    m_s3DataSourceHasBeenSet = true;
  }
  return *this;
}

JsonValue AIWorkloadDataSource::Jsonize() const {
  JsonValue payload;

  if (m_s3DataSourceHasBeenSet) {
    payload.WithObject("S3DataSource", m_s3DataSource.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
