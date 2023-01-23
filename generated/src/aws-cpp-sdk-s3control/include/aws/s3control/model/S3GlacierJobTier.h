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
  enum class S3GlacierJobTier
  {
    NOT_SET,
    BULK,
    STANDARD
  };

namespace S3GlacierJobTierMapper
{
AWS_S3CONTROL_API S3GlacierJobTier GetS3GlacierJobTierForName(const Aws::String& name);

AWS_S3CONTROL_API Aws::String GetNameForS3GlacierJobTier(S3GlacierJobTier value);
} // namespace S3GlacierJobTierMapper
} // namespace Model
} // namespace S3Control
} // namespace Aws
