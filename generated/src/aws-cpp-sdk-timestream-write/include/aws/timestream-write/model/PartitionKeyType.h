/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/timestream-write/TimestreamWrite_EXPORTS.h>

namespace Aws {
namespace TimestreamWrite {
namespace Model {
enum class PartitionKeyType { NOT_SET, DIMENSION, MEASURE };

namespace PartitionKeyTypeMapper {
AWS_TIMESTREAMWRITE_API PartitionKeyType GetPartitionKeyTypeForName(const Aws::String& name);

AWS_TIMESTREAMWRITE_API Aws::String GetNameForPartitionKeyType(PartitionKeyType value);
}  // namespace PartitionKeyTypeMapper
}  // namespace Model
}  // namespace TimestreamWrite
}  // namespace Aws
