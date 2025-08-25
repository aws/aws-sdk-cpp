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
  enum class ShareStatus
  {
    NOT_SET,
    NOT_SHARED,
    INITIATED,
    SHARED
  };

namespace ShareStatusMapper
{
AWS_MEDIACONVERT_API ShareStatus GetShareStatusForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForShareStatus(ShareStatus value);
} // namespace ShareStatusMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
