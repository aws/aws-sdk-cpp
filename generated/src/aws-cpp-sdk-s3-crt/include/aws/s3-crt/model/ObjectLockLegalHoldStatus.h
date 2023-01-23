/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3-crt/S3Crt_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace S3Crt
{
namespace Model
{
  enum class ObjectLockLegalHoldStatus
  {
    NOT_SET,
    ON,
    OFF
  };

namespace ObjectLockLegalHoldStatusMapper
{
AWS_S3CRT_API ObjectLockLegalHoldStatus GetObjectLockLegalHoldStatusForName(const Aws::String& name);

AWS_S3CRT_API Aws::String GetNameForObjectLockLegalHoldStatus(ObjectLockLegalHoldStatus value);
} // namespace ObjectLockLegalHoldStatusMapper
} // namespace Model
} // namespace S3Crt
} // namespace Aws
