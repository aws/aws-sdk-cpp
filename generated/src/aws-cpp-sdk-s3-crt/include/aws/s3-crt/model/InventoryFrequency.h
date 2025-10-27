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
enum class InventoryFrequency { NOT_SET, Daily, Weekly };

namespace InventoryFrequencyMapper {
AWS_S3CRT_API InventoryFrequency GetInventoryFrequencyForName(const Aws::String& name);

AWS_S3CRT_API Aws::String GetNameForInventoryFrequency(InventoryFrequency value);
}  // namespace InventoryFrequencyMapper
}  // namespace Model
}  // namespace S3Crt
}  // namespace Aws
