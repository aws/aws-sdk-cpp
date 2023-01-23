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
  enum class DecryptionMode
  {
    NOT_SET,
    AES_CTR,
    AES_CBC,
    AES_GCM
  };

namespace DecryptionModeMapper
{
AWS_MEDIACONVERT_API DecryptionMode GetDecryptionModeForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForDecryptionMode(DecryptionMode value);
} // namespace DecryptionModeMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
