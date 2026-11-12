/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mwaa/model/TeamConfig.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MWAA {
namespace Model {

TeamConfig::TeamConfig(JsonView jsonValue) { *this = jsonValue; }

TeamConfig& TeamConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("SourceBucketArn")) {
    m_sourceBucketArn = jsonValue.GetString("SourceBucketArn");
    m_sourceBucketArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("DagS3Path")) {
    m_dagS3Path = jsonValue.GetString("DagS3Path");
    m_dagS3PathHasBeenSet = true;
  }
  return *this;
}

JsonValue TeamConfig::Jsonize() const {
  JsonValue payload;

  if (m_sourceBucketArnHasBeenSet) {
    payload.WithString("SourceBucketArn", m_sourceBucketArn);
  }

  if (m_dagS3PathHasBeenSet) {
    payload.WithString("DagS3Path", m_dagS3Path);
  }

  return payload;
}

}  // namespace Model
}  // namespace MWAA
}  // namespace Aws
