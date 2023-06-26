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
  enum class HlsKeyProviderType
  {
    NOT_SET,
    SPEKE,
    STATIC_KEY
  };

namespace HlsKeyProviderTypeMapper
{
AWS_MEDIACONVERT_API HlsKeyProviderType GetHlsKeyProviderTypeForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForHlsKeyProviderType(HlsKeyProviderType value);
} // namespace HlsKeyProviderTypeMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
