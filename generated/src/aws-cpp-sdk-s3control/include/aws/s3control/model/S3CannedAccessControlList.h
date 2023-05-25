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
  enum class S3CannedAccessControlList
  {
    NOT_SET,
    private_,
    public_read,
    public_read_write,
    aws_exec_read,
    authenticated_read,
    bucket_owner_read,
    bucket_owner_full_control
  };

namespace S3CannedAccessControlListMapper
{
AWS_S3CONTROL_API S3CannedAccessControlList GetS3CannedAccessControlListForName(const Aws::String& name);

AWS_S3CONTROL_API Aws::String GetNameForS3CannedAccessControlList(S3CannedAccessControlList value);
} // namespace S3CannedAccessControlListMapper
} // namespace Model
} // namespace S3Control
} // namespace Aws
