/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/opensearchserverless/model/IngestionJobS3Source.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace OpenSearchServerless {
namespace Model {

IngestionJobS3Source::IngestionJobS3Source(JsonView jsonValue) { *this = jsonValue; }

IngestionJobS3Source& IngestionJobS3Source::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("bucket")) {
    m_bucket = jsonValue.GetString("bucket");
    m_bucketHasBeenSet = true;
  }
  if (jsonValue.ValueExists("bucketOwnerAccountId")) {
    m_bucketOwnerAccountId = jsonValue.GetString("bucketOwnerAccountId");
    m_bucketOwnerAccountIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("keyPrefix")) {
    m_keyPrefix = jsonValue.GetString("keyPrefix");
    m_keyPrefixHasBeenSet = true;
  }
  return *this;
}

JsonValue IngestionJobS3Source::Jsonize() const {
  JsonValue payload;

  if (m_bucketHasBeenSet) {
    payload.WithString("bucket", m_bucket);
  }

  if (m_bucketOwnerAccountIdHasBeenSet) {
    payload.WithString("bucketOwnerAccountId", m_bucketOwnerAccountId);
  }

  if (m_keyPrefixHasBeenSet) {
    payload.WithString("keyPrefix", m_keyPrefix);
  }

  return payload;
}

}  // namespace Model
}  // namespace OpenSearchServerless
}  // namespace Aws
