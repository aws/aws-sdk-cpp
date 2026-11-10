/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/s3tables/model/TargetObjectKeyFormat.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace S3Tables {
namespace Model {

TargetObjectKeyFormat::TargetObjectKeyFormat(JsonView jsonValue) { *this = jsonValue; }

TargetObjectKeyFormat& TargetObjectKeyFormat::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("partitionedPrefix")) {
    m_partitionedPrefix = jsonValue.GetObject("partitionedPrefix");
    m_partitionedPrefixHasBeenSet = true;
  }
  return *this;
}

JsonValue TargetObjectKeyFormat::Jsonize() const {
  JsonValue payload;

  if (m_partitionedPrefixHasBeenSet) {
    payload.WithObject("partitionedPrefix", m_partitionedPrefix.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace S3Tables
}  // namespace Aws
