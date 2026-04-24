/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/s3tables/model/ReplicationDestination.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace S3Tables {
namespace Model {

ReplicationDestination::ReplicationDestination(JsonView jsonValue) { *this = jsonValue; }

ReplicationDestination& ReplicationDestination::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("destinationTableBucketARN")) {
    m_destinationTableBucketARN = jsonValue.GetString("destinationTableBucketARN");
    m_destinationTableBucketARNHasBeenSet = true;
  }
  return *this;
}

JsonValue ReplicationDestination::Jsonize() const {
  JsonValue payload;

  if (m_destinationTableBucketARNHasBeenSet) {
    payload.WithString("destinationTableBucketARN", m_destinationTableBucketARN);
  }

  return payload;
}

}  // namespace Model
}  // namespace S3Tables
}  // namespace Aws
