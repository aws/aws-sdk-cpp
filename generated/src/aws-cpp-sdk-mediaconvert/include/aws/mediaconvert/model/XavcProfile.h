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
  enum class XavcProfile
  {
    NOT_SET,
    XAVC_HD_INTRA_CBG,
    XAVC_4K_INTRA_CBG,
    XAVC_4K_INTRA_VBR,
    XAVC_HD,
    XAVC_4K
  };

namespace XavcProfileMapper
{
AWS_MEDIACONVERT_API XavcProfile GetXavcProfileForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForXavcProfile(XavcProfile value);
} // namespace XavcProfileMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
