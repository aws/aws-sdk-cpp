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
enum class BucketAbacStatus { NOT_SET, Enabled, Disabled };

namespace BucketAbacStatusMapper {
AWS_S3CRT_API BucketAbacStatus GetBucketAbacStatusForName(const Aws::String& name);

AWS_S3CRT_API Aws::String GetNameForBucketAbacStatus(BucketAbacStatus value);
}  // namespace BucketAbacStatusMapper
}  // namespace Model
}  // namespace S3Crt
}  // namespace Aws
