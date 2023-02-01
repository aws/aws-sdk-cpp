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
  enum class S3ObjectLockMode
  {
    NOT_SET,
    COMPLIANCE,
    GOVERNANCE
  };

namespace S3ObjectLockModeMapper
{
AWS_S3CONTROL_API S3ObjectLockMode GetS3ObjectLockModeForName(const Aws::String& name);

AWS_S3CONTROL_API Aws::String GetNameForS3ObjectLockMode(S3ObjectLockMode value);
} // namespace S3ObjectLockModeMapper
} // namespace Model
} // namespace S3Control
} // namespace Aws
