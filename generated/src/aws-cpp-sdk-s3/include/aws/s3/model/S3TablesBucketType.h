/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3/S3_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace S3
{
namespace Model
{
  enum class S3TablesBucketType
  {
    NOT_SET,
    aws,
    customer
  };

namespace S3TablesBucketTypeMapper
{
AWS_S3_API S3TablesBucketType GetS3TablesBucketTypeForName(const Aws::String& name);

AWS_S3_API Aws::String GetNameForS3TablesBucketType(S3TablesBucketType value);
} // namespace S3TablesBucketTypeMapper
} // namespace Model
} // namespace S3
} // namespace Aws
