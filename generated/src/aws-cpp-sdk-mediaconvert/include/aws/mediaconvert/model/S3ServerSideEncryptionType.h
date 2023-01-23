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
  enum class S3ServerSideEncryptionType
  {
    NOT_SET,
    SERVER_SIDE_ENCRYPTION_S3,
    SERVER_SIDE_ENCRYPTION_KMS
  };

namespace S3ServerSideEncryptionTypeMapper
{
AWS_MEDIACONVERT_API S3ServerSideEncryptionType GetS3ServerSideEncryptionTypeForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForS3ServerSideEncryptionType(S3ServerSideEncryptionType value);
} // namespace S3ServerSideEncryptionTypeMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
