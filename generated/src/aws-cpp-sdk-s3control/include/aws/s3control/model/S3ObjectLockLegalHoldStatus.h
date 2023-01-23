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
  enum class S3ObjectLockLegalHoldStatus
  {
    NOT_SET,
    OFF,
    ON
  };

namespace S3ObjectLockLegalHoldStatusMapper
{
AWS_S3CONTROL_API S3ObjectLockLegalHoldStatus GetS3ObjectLockLegalHoldStatusForName(const Aws::String& name);

AWS_S3CONTROL_API Aws::String GetNameForS3ObjectLockLegalHoldStatus(S3ObjectLockLegalHoldStatus value);
} // namespace S3ObjectLockLegalHoldStatusMapper
} // namespace Model
} // namespace S3Control
} // namespace Aws
