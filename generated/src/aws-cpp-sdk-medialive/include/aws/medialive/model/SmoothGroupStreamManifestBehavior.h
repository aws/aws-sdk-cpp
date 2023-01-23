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
  enum class SmoothGroupStreamManifestBehavior
  {
    NOT_SET,
    DO_NOT_SEND,
    SEND
  };

namespace SmoothGroupStreamManifestBehaviorMapper
{
AWS_MEDIALIVE_API SmoothGroupStreamManifestBehavior GetSmoothGroupStreamManifestBehaviorForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForSmoothGroupStreamManifestBehavior(SmoothGroupStreamManifestBehavior value);
} // namespace SmoothGroupStreamManifestBehaviorMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
