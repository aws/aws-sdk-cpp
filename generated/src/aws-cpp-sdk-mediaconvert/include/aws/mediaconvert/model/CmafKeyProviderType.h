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
  enum class CmafKeyProviderType
  {
    NOT_SET,
    SPEKE,
    STATIC_KEY
  };

namespace CmafKeyProviderTypeMapper
{
AWS_MEDIACONVERT_API CmafKeyProviderType GetCmafKeyProviderTypeForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForCmafKeyProviderType(CmafKeyProviderType value);
} // namespace CmafKeyProviderTypeMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
