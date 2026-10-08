/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityhub/model/S3ExportDestination.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SecurityHub {
namespace Model {

S3ExportDestination::S3ExportDestination(JsonView jsonValue) { *this = jsonValue; }

S3ExportDestination& S3ExportDestination::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("BucketArn")) {
    m_bucketArn = jsonValue.GetString("BucketArn");
    m_bucketArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("KmsKeyArn")) {
    m_kmsKeyArn = jsonValue.GetString("KmsKeyArn");
    m_kmsKeyArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ObjectPrefix")) {
    m_objectPrefix = jsonValue.GetString("ObjectPrefix");
    m_objectPrefixHasBeenSet = true;
  }
  return *this;
}

JsonValue S3ExportDestination::Jsonize() const {
  JsonValue payload;

  if (m_bucketArnHasBeenSet) {
    payload.WithString("BucketArn", m_bucketArn);
  }

  if (m_kmsKeyArnHasBeenSet) {
    payload.WithString("KmsKeyArn", m_kmsKeyArn);
  }

  if (m_objectPrefixHasBeenSet) {
    payload.WithString("ObjectPrefix", m_objectPrefix);
  }

  return payload;
}

}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
