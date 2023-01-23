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
  enum class HlsOfflineEncrypted
  {
    NOT_SET,
    ENABLED,
    DISABLED
  };

namespace HlsOfflineEncryptedMapper
{
AWS_MEDIACONVERT_API HlsOfflineEncrypted GetHlsOfflineEncryptedForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForHlsOfflineEncrypted(HlsOfflineEncrypted value);
} // namespace HlsOfflineEncryptedMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
