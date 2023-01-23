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
  enum class HlsEncryptionType
  {
    NOT_SET,
    AES128,
    SAMPLE_AES
  };

namespace HlsEncryptionTypeMapper
{
AWS_MEDIACONVERT_API HlsEncryptionType GetHlsEncryptionTypeForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForHlsEncryptionType(HlsEncryptionType value);
} // namespace HlsEncryptionTypeMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
