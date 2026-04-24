/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/nova-act/model/WorkflowExportConfig.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace NovaAct {
namespace Model {

WorkflowExportConfig::WorkflowExportConfig(JsonView jsonValue) { *this = jsonValue; }

WorkflowExportConfig& WorkflowExportConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("s3BucketName")) {
    m_s3BucketName = jsonValue.GetString("s3BucketName");
    m_s3BucketNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("s3KeyPrefix")) {
    m_s3KeyPrefix = jsonValue.GetString("s3KeyPrefix");
    m_s3KeyPrefixHasBeenSet = true;
  }
  return *this;
}

JsonValue WorkflowExportConfig::Jsonize() const {
  JsonValue payload;

  if (m_s3BucketNameHasBeenSet) {
    payload.WithString("s3BucketName", m_s3BucketName);
  }

  if (m_s3KeyPrefixHasBeenSet) {
    payload.WithString("s3KeyPrefix", m_s3KeyPrefix);
  }

  return payload;
}

}  // namespace Model
}  // namespace NovaAct
}  // namespace Aws
