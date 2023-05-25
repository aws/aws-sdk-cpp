/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MediaConvert
{
namespace Model
{
  enum class S3ObjectCannedAcl
  {
    NOT_SET,
    PUBLIC_READ,
    AUTHENTICATED_READ,
    BUCKET_OWNER_READ,
    BUCKET_OWNER_FULL_CONTROL
  };

namespace S3ObjectCannedAclMapper
{
AWS_MEDIACONVERT_API S3ObjectCannedAcl GetS3ObjectCannedAclForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForS3ObjectCannedAcl(S3ObjectCannedAcl value);
} // namespace S3ObjectCannedAclMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
