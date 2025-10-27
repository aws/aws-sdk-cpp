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
enum class BucketVersioningStatus { NOT_SET, Enabled, Suspended };

namespace BucketVersioningStatusMapper {
AWS_S3CRT_API BucketVersioningStatus GetBucketVersioningStatusForName(const Aws::String& name);

AWS_S3CRT_API Aws::String GetNameForBucketVersioningStatus(BucketVersioningStatus value);
}  // namespace BucketVersioningStatusMapper
}  // namespace Model
}  // namespace S3Crt
}  // namespace Aws
