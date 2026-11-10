/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/s3tables/model/TableBucketLoggingStatus.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace S3Tables {
namespace Model {

TableBucketLoggingStatus::TableBucketLoggingStatus(JsonView jsonValue) { *this = jsonValue; }

TableBucketLoggingStatus& TableBucketLoggingStatus::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("loggingEnabled")) {
    m_loggingEnabled = jsonValue.GetObject("loggingEnabled");
    m_loggingEnabledHasBeenSet = true;
  }
  return *this;
}

JsonValue TableBucketLoggingStatus::Jsonize() const {
  JsonValue payload;

  if (m_loggingEnabledHasBeenSet) {
    payload.WithObject("loggingEnabled", m_loggingEnabled.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace S3Tables
}  // namespace Aws
