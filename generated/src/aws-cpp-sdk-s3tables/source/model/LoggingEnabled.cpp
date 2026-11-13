/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/s3tables/model/LoggingEnabled.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace S3Tables {
namespace Model {

LoggingEnabled::LoggingEnabled(JsonView jsonValue) { *this = jsonValue; }

LoggingEnabled& LoggingEnabled::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("targetBucket")) {
    m_targetBucket = jsonValue.GetString("targetBucket");
    m_targetBucketHasBeenSet = true;
  }
  if (jsonValue.ValueExists("targetPrefix")) {
    m_targetPrefix = jsonValue.GetString("targetPrefix");
    m_targetPrefixHasBeenSet = true;
  }
  if (jsonValue.ValueExists("targetObjectKeyFormat")) {
    m_targetObjectKeyFormat = jsonValue.GetObject("targetObjectKeyFormat");
    m_targetObjectKeyFormatHasBeenSet = true;
  }
  return *this;
}

JsonValue LoggingEnabled::Jsonize() const {
  JsonValue payload;

  if (m_targetBucketHasBeenSet) {
    payload.WithString("targetBucket", m_targetBucket);
  }

  if (m_targetPrefixHasBeenSet) {
    payload.WithString("targetPrefix", m_targetPrefix);
  }

  if (m_targetObjectKeyFormatHasBeenSet) {
    payload.WithObject("targetObjectKeyFormat", m_targetObjectKeyFormat.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace S3Tables
}  // namespace Aws
