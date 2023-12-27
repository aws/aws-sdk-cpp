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
  enum class S3StorageClass
  {
    NOT_SET,
    STANDARD,
    REDUCED_REDUNDANCY,
    STANDARD_IA,
    ONEZONE_IA,
    INTELLIGENT_TIERING,
    GLACIER,
    DEEP_ARCHIVE
  };

namespace S3StorageClassMapper
{
AWS_MEDIACONVERT_API S3StorageClass GetS3StorageClassForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForS3StorageClass(S3StorageClass value);
} // namespace S3StorageClassMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
