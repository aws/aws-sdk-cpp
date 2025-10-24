﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3-crt/S3Crt_EXPORTS.h>

namespace Aws {
namespace S3Crt {
namespace Model {
enum class S3TablesBucketType { NOT_SET, aws, customer };

namespace S3TablesBucketTypeMapper {
AWS_S3CRT_API S3TablesBucketType GetS3TablesBucketTypeForName(const Aws::String& name);

AWS_S3CRT_API Aws::String GetNameForS3TablesBucketType(S3TablesBucketType value);
}  // namespace S3TablesBucketTypeMapper
}  // namespace Model
}  // namespace S3Crt
}  // namespace Aws
