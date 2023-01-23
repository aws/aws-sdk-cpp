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
  enum class Tier
  {
    NOT_SET,
    Standard,
    Bulk,
    Expedited
  };

namespace TierMapper
{
AWS_S3CRT_API Tier GetTierForName(const Aws::String& name);

AWS_S3CRT_API Aws::String GetNameForTier(Tier value);
} // namespace TierMapper
} // namespace Model
} // namespace S3Crt
} // namespace Aws
