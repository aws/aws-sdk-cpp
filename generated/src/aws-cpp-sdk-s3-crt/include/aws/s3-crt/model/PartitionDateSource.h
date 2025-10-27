/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3-crt/S3Crt_EXPORTS.h>

namespace Aws {
namespace S3Crt {
namespace Model {
enum class PartitionDateSource { NOT_SET, EventTime, DeliveryTime };

namespace PartitionDateSourceMapper {
AWS_S3CRT_API PartitionDateSource GetPartitionDateSourceForName(const Aws::String& name);

AWS_S3CRT_API Aws::String GetNameForPartitionDateSource(PartitionDateSource value);
}  // namespace PartitionDateSourceMapper
}  // namespace Model
}  // namespace S3Crt
}  // namespace Aws
