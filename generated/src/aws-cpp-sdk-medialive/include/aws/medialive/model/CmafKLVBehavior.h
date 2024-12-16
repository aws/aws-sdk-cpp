/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MediaLive
{
namespace Model
{
  enum class CmafKLVBehavior
  {
    NOT_SET,
    NO_PASSTHROUGH,
    PASSTHROUGH
  };

namespace CmafKLVBehaviorMapper
{
AWS_MEDIALIVE_API CmafKLVBehavior GetCmafKLVBehaviorForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForCmafKLVBehavior(CmafKLVBehavior value);
} // namespace CmafKLVBehaviorMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
