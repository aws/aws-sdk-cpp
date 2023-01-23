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
  enum class H264FramerateControl
  {
    NOT_SET,
    INITIALIZE_FROM_SOURCE,
    SPECIFIED
  };

namespace H264FramerateControlMapper
{
AWS_MEDIALIVE_API H264FramerateControl GetH264FramerateControlForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForH264FramerateControl(H264FramerateControl value);
} // namespace H264FramerateControlMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
