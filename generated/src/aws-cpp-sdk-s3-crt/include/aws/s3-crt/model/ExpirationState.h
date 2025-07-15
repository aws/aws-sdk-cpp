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
  enum class ExpirationState
  {
    NOT_SET,
    ENABLED,
    DISABLED
  };

namespace ExpirationStateMapper
{
AWS_S3CRT_API ExpirationState GetExpirationStateForName(const Aws::String& name);

AWS_S3CRT_API Aws::String GetNameForExpirationState(ExpirationState value);
} // namespace ExpirationStateMapper
} // namespace Model
} // namespace S3Crt
} // namespace Aws
