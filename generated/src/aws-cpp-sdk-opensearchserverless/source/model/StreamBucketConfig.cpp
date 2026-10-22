/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/opensearchserverless/model/StreamBucketConfig.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace OpenSearchServerless {
namespace Model {

StreamBucketConfig::StreamBucketConfig(JsonView jsonValue) { *this = jsonValue; }

StreamBucketConfig& StreamBucketConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("bucket")) {
    m_bucket = jsonValue.GetString("bucket");
    m_bucketHasBeenSet = true;
  }
  if (jsonValue.ValueExists("bucketOwnerAccountId")) {
    m_bucketOwnerAccountId = jsonValue.GetString("bucketOwnerAccountId");
    m_bucketOwnerAccountIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("initialScan")) {
    m_initialScan = InitialScanMapper::GetInitialScanForName(jsonValue.GetString("initialScan"));
    m_initialScanHasBeenSet = true;
  }
  return *this;
}

JsonValue StreamBucketConfig::Jsonize() const {
  JsonValue payload;

  if (m_bucketHasBeenSet) {
    payload.WithString("bucket", m_bucket);
  }

  if (m_bucketOwnerAccountIdHasBeenSet) {
    payload.WithString("bucketOwnerAccountId", m_bucketOwnerAccountId);
  }

  if (m_initialScanHasBeenSet) {
    payload.WithString("initialScan", InitialScanMapper::GetNameForInitialScan(m_initialScan));
  }

  return payload;
}

}  // namespace Model
}  // namespace OpenSearchServerless
}  // namespace Aws
