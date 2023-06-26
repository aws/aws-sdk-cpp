/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace S3Control
{
namespace Model
{
  enum class BucketCannedACL
  {
    NOT_SET,
    private_,
    public_read,
    public_read_write,
    authenticated_read
  };

namespace BucketCannedACLMapper
{
AWS_S3CONTROL_API BucketCannedACL GetBucketCannedACLForName(const Aws::String& name);

AWS_S3CONTROL_API Aws::String GetNameForBucketCannedACL(BucketCannedACL value);
} // namespace BucketCannedACLMapper
} // namespace Model
} // namespace S3Control
} // namespace Aws
