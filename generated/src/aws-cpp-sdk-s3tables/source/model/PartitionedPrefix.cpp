/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/s3tables/model/PartitionedPrefix.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace S3Tables {
namespace Model {

PartitionedPrefix::PartitionedPrefix(JsonView jsonValue) { *this = jsonValue; }

PartitionedPrefix& PartitionedPrefix::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("partitionDateSource")) {
    m_partitionDateSource = PartitionDateSourceMapper::GetPartitionDateSourceForName(jsonValue.GetString("partitionDateSource"));
    m_partitionDateSourceHasBeenSet = true;
  }
  return *this;
}

JsonValue PartitionedPrefix::Jsonize() const {
  JsonValue payload;

  if (m_partitionDateSourceHasBeenSet) {
    payload.WithString("partitionDateSource", PartitionDateSourceMapper::GetNameForPartitionDateSource(m_partitionDateSource));
  }

  return payload;
}

}  // namespace Model
}  // namespace S3Tables
}  // namespace Aws
