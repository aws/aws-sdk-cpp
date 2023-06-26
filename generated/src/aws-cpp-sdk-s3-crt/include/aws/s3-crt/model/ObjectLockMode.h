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
  enum class ObjectLockMode
  {
    NOT_SET,
    GOVERNANCE,
    COMPLIANCE
  };

namespace ObjectLockModeMapper
{
AWS_S3CRT_API ObjectLockMode GetObjectLockModeForName(const Aws::String& name);

AWS_S3CRT_API Aws::String GetNameForObjectLockMode(ObjectLockMode value);
} // namespace ObjectLockModeMapper
} // namespace Model
} // namespace S3Crt
} // namespace Aws
