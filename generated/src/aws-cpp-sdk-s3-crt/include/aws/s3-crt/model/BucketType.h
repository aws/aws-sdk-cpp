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
enum class BucketType { NOT_SET, Directory };

namespace BucketTypeMapper {
AWS_S3CRT_API BucketType GetBucketTypeForName(const Aws::String& name);

AWS_S3CRT_API Aws::String GetNameForBucketType(BucketType value);
}  // namespace BucketTypeMapper
}  // namespace Model
}  // namespace S3Crt
}  // namespace Aws
